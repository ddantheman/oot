/*
 File: z_office_security.c
 Overlay: ovl_Office_Security
 Description: Controls the office security system (doors, buttons, etc)
*/

#include "z_office_security.h"
#include "assets/objects/object_office_security/gOfficeSecurityDL.h"
#include "assets/objects/object_office_security/gOfficeSecurityDL_collision.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "sfx.h"
#include "z_lib.h"
#include "player.h"
#include "regs.h"
#include "controller.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void OfficeSecurity_Init(Actor* thisx, PlayState* play);
void OfficeSecurity_Destroy(Actor* thisx, PlayState* play);
void OfficeSecurity_Update(Actor* thisx, PlayState* play);
void OfficeSecurity_Draw(Actor* thisx, PlayState* play);

void OfficeSecurity_MainActionFunc(OfficeSecurity* this, PlayState* play);

void OfficeSecurity_DrawStickDirectionPrompts(PlayState* play, OfficeSecurity* this);
void OfficeSecurity_DrawTextRec(PlayState* play, s32 r, s32 g, s32 b, s32 a, f32 x, f32 y, f32 z, s32 s, s32 t, f32 dx, f32 dy);

void OfficeSecurity_UpdateJoystickInputState(PlayState* play, OfficeSecurity* this);
void OfficeSecurity_UpdateCameraDirection(OfficeSecurity* this, PlayState* play, f32 cameraFaceAngle);
void OfficeSecurity_UpdateStickDirectionPromptAnim(OfficeSecurity* this);

void OfficeSecurity_State_FacingForward(OfficeSecurity* this, PlayState* play);
void OfficeSecurity_State_FacingLeft(OfficeSecurity* this, PlayState* play);
void OfficeSecurity_State_FacingRight(OfficeSecurity* this, PlayState* play);
void OfficeSecurity_State_LookToLeft(OfficeSecurity* this, PlayState* play);
void OfficeSecurity_State_LookToRight(OfficeSecurity* this, PlayState* play);
void OfficeSecurity_State_LookForward(OfficeSecurity* this, PlayState* play);
void OfficeSecurity_State_OpeningCams(OfficeSecurity* this, PlayState* play);
void OfficeSecurity_State_InCams(OfficeSecurity* this, PlayState* play);

static OfficeSecurityStateFunc sStateFunc[] = {
    OfficeSecurity_State_FacingForward,
    OfficeSecurity_State_FacingLeft,
    OfficeSecurity_State_FacingRight,
    OfficeSecurity_State_LookToLeft,
    OfficeSecurity_State_LookToRight,
    OfficeSecurity_State_LookForward,
    OfficeSecurity_State_OpeningCams,
    OfficeSecurity_State_InCams
};

ActorProfile Office_Security_Profile = {
    ACTOR_OFFICE_SECURITY,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_OFFICE_SECURITY,
    sizeof(OfficeSecurity),
    (ActorFunc)OfficeSecurity_Init,
    (ActorFunc)OfficeSecurity_Destroy,
    (ActorFunc)OfficeSecurity_Update,
    (ActorFunc)OfficeSecurity_Draw,
};

void OfficeSecurity_Init(Actor* thisx, PlayState* play){
    OfficeSecurity* this = (OfficeSecurity*)thisx;

    CollisionHeader* colHeader = NULL;
    CollisionHeader_GetVirtual(&gOfficeSecurityDL_collisionHeader, &colHeader);

    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
    //OfficeSecurity_UpdateCameraDirection(this, play, 0.0f);
    
    this->stickLeftPrompt.stickColorR = 200;
    this->stickLeftPrompt.stickColorG = 200;
    this->stickLeftPrompt.stickColorB = 200;
    this->stickLeftPrompt.stickColorA = 180;
    this->stickLeftPrompt.stickTexX = 49;
    this->stickLeftPrompt.stickTexY = 95;
    this->stickLeftPrompt.arrowColorR = 255;
    this->stickLeftPrompt.arrowColorG = 0;
    this->stickLeftPrompt.arrowColorB = 0;
    this->stickLeftPrompt.arrowColorA = 200;
    this->stickLeftPrompt.arrowTexX = 33;
    this->stickLeftPrompt.arrowTexY = 91;
    this->stickLeftPrompt.z = 1;
    this->stickLeftPrompt.isEnabled = true;

    this->stickRightPrompt.stickColorR = 200;
    this->stickRightPrompt.stickColorG = 200;
    this->stickRightPrompt.stickColorB = 200;
    this->stickRightPrompt.stickColorA = 180;
    this->stickRightPrompt.stickTexX = 274;
    this->stickRightPrompt.stickTexY = 95;
    this->stickRightPrompt.arrowColorR = 255;
    this->stickRightPrompt.arrowColorG = 0;
    this->stickRightPrompt.arrowColorB = 0;
    this->stickRightPrompt.arrowColorA = 200;
    this->stickRightPrompt.arrowTexX = 290;
    this->stickRightPrompt.arrowTexY = 91;
    this->stickRightPrompt.z = 1;
    this->stickRightPrompt.isEnabled = true;

    this->arrowAnimState = 0;
    this->stickAnimState = 0;
    this->arrowAnimTween = 0;
    this->stickAnimTween = 0;

    this->camIndex = OFFICE_SECURITY_CAM_STAGE;
    this->stateFlag = OFFICE_SECURITY_STATE_FACING_FORWARD;
    this->actionFunc = OfficeSecurity_MainActionFunc;
}

void OfficeSecurity_Destroy(Actor* thisx, PlayState* play){
    OfficeSecurity* this = (OfficeSecurity*)thisx;
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void OfficeSecurity_Update(Actor* thisx, PlayState* play){
    OfficeSecurity* this = (OfficeSecurity*)thisx;
    this->actionFunc(this, play);
}

void OfficeSecurity_Draw(Actor* thisx, PlayState* play){
    OfficeSecurity* this = (OfficeSecurity*)thisx;
    Gfx_DrawDListOpa(play, gOfficeSecurityDL_opaque_dl);
    OfficeSecurity_DrawStickDirectionPrompts(play, this);
}

void OfficeSecurity_MainActionFunc(OfficeSecurity* this, PlayState* play) {
    OfficeSecurity_UpdateJoystickInputState(play, this);
    OfficeSecurity_UpdateStickDirectionPromptAnim(this);
    sStateFunc[this->stateFlag](this, play);
}

void OfficeSecurity_DrawStickDirectionPrompts(PlayState* play, OfficeSecurity* this) {
    s32 drawStickLeftPrompt = this->stickLeftPrompt.isEnabled;
    s32 drawStickRightPrompt = this->stickRightPrompt.isEnabled;

    OPEN_DISPS(play->state.gfxCtx, "../z_office_security.c", 4252);
    if (drawStickLeftPrompt || drawStickRightPrompt) {
        Gfx_SetupDL_39Overlay(play->state.gfxCtx);
        gDPSetCombineMode(OVERLAY_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
        gDPLoadTextureBlock(OVERLAY_DISP++, gArrowCursorTex, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 24, 0,
                            G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOMASK, G_TX_NOLOD,
                            G_TX_NOLOD);
        if (drawStickLeftPrompt) {
            OfficeSecurity_DrawTextRec(play, this->stickLeftPrompt.arrowColorR, this->stickLeftPrompt.arrowColorG,
                                this->stickLeftPrompt.arrowColorB, this->stickLeftPrompt.arrowColorA,
                                this->stickLeftPrompt.arrowTexX, this->stickLeftPrompt.arrowTexY,
                                this->stickLeftPrompt.z, 0, 0, -1.0f, 1.0f);
        }
        if (drawStickRightPrompt) {
            OfficeSecurity_DrawTextRec(play, this->stickRightPrompt.arrowColorR, this->stickRightPrompt.arrowColorG,
                                this->stickRightPrompt.arrowColorB, this->stickRightPrompt.arrowColorA,
                                this->stickRightPrompt.arrowTexX, this->stickRightPrompt.arrowTexY,
                                this->stickRightPrompt.z, 0, 0, 1.0f, 1.0f);
        }
        gDPLoadTextureBlock(OVERLAY_DISP++, gControlStickTex, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0,
                            G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOMASK, G_TX_NOLOD,
                            G_TX_NOLOD);
        if (drawStickLeftPrompt) {
            OfficeSecurity_DrawTextRec(play, this->stickLeftPrompt.stickColorR, this->stickLeftPrompt.stickColorG,
                                this->stickLeftPrompt.stickColorB, this->stickLeftPrompt.stickColorA,
                                this->stickLeftPrompt.stickTexX, this->stickLeftPrompt.stickTexY,
                                this->stickLeftPrompt.z, 0, 0, -1.0f, 1.0f);
        }
        if (drawStickRightPrompt) {
            OfficeSecurity_DrawTextRec(play, this->stickRightPrompt.stickColorR, this->stickRightPrompt.stickColorG,
                                this->stickRightPrompt.stickColorB, this->stickRightPrompt.stickColorA,
                                this->stickRightPrompt.stickTexX, this->stickRightPrompt.stickTexY,
                                this->stickRightPrompt.z, 0, 0, 1.0f, 1.0f);
        }
    }
    CLOSE_DISPS(play->state.gfxCtx, "../z_office_security.c", 4300);
}

void OfficeSecurity_DrawTextRec(PlayState* play, s32 r, s32 g, s32 b, s32 a, f32 x, f32 y, f32 z, s32 s, s32 t, f32 dx, f32 dy) {
    f32 texCoordScale;
    s32 ulx, uly, lrx, lry;
    f32 w, h;
    s32 dsdx, dtdy;

    OPEN_DISPS(play->state.gfxCtx, "../z_office_security.c", 4228);
    gDPPipeSync(OVERLAY_DISP++);
    gDPSetPrimColor(OVERLAY_DISP++, 0, 0, r, g, b, a);

    w = 8.0f * z;
    ulx = (x - w) * 4.0f;
    lrx = (x + w) * 4.0f;

    h = 12.0f * z;
    uly = (y - h) * 4.0f;
    lry = (y + h) * 4.0f;

    texCoordScale = (1.0f / z) * 1024;
    dsdx = texCoordScale * dx;
    dtdy = dy * texCoordScale;

    gSPTextureRectangle(OVERLAY_DISP++, ulx, uly, lrx, lry, G_TX_RENDERTILE, s, t, dsdx, dtdy);
    CLOSE_DISPS(play->state.gfxCtx, "../z_office_security.c", 4242);
}

void OfficeSecurity_UpdateCameraDirection(OfficeSecurity* this, PlayState* play, f32 cameraFaceAngle) {
    this->cameraFaceAngle = cameraFaceAngle;
    Camera_SetCameraData(GET_ACTIVE_CAM(play), CAM_DATA_SET_2 | CAM_DATA_SET_3, NULL, NULL, cameraFaceAngle, 0, 0);
}

void OfficeSecurity_UpdateJoystickInputState(PlayState* play, OfficeSecurity* this) {
    Input* input = &play->state.input[0];
    s8 stickX = input->rel.stick_x;
    s8 stickY = input->rel.stick_y;

    this->moveHorizontal = this->moveVertical = false;

    if (this->stickAccumX == 0) {
        if (stickX > 30 || stickX < -30) {
            this->stickAccumX = stickX;
            this->moveHorizontal = true;
        }
    } else if (stickX <= 30 && stickX >= -30) {
        this->stickAccumX = 0;
    } else if (this->stickAccumX * stickX < 0) { // Stick has swapped directions
        this->stickAccumX = stickX;
        this->moveHorizontal = true;
    } else {
        this->stickAccumX += stickX;

        if (this->stickAccumX > 2000) {
            this->stickAccumX = 2000;
        } else if (this->stickAccumX < -2000) {
            this->stickAccumX = -2000;
        }
    }

    if (this->stickAccumY == 0) {
        if (stickY > 30 || stickY < -30) {
            this->stickAccumY = stickY;
            this->moveVertical = true;
        }
    } else if (stickY <= 30 && stickY >= -30) {
        this->stickAccumY = 0;
    } else if (this->stickAccumY * stickY < 0) { // Stick has swapped directions
        this->stickAccumY = stickY;
        this->moveVertical = true;
    } else {
        this->stickAccumY += stickY;

        if (this->stickAccumY > 2000) {
            this->stickAccumY = 2000;
        } else if (this->stickAccumY < -2000) {
            this->stickAccumY = -2000;
        }
    }
}

void OfficeSecurity_UpdateStickDirectionPromptAnim(OfficeSecurity* this) {
    f32 arrowAnimTween;
    f32 new_var3;
    s32 new_var2 = 255;
    f32 stickAnimTween;

    arrowAnimTween = this->arrowAnimTween;
    stickAnimTween = this->stickAnimTween;
    if (this->arrowAnimState == 0) {
        arrowAnimTween += 0.05f;
        if (arrowAnimTween > 1.0f) {
            arrowAnimTween = 1.0f;
            this->arrowAnimState = 1;
        }

    } else {
        arrowAnimTween -= 0.05f;
        if (arrowAnimTween < 0.0f) {
            arrowAnimTween = 0.0f;
            this->arrowAnimState = 0;
        }
    }

    this->arrowAnimTween = arrowAnimTween;
    if (this->stickAnimState == 0) {
        stickAnimTween += 0.1f;
        if (stickAnimTween > 1.0f) {
            stickAnimTween = 1.0f;
            this->stickAnimState = 1;
        }

    } else {
        stickAnimTween = 0.0f;
        this->stickAnimState = 0;
    }

    this->stickAnimTween = stickAnimTween;
    this->stickLeftPrompt.arrowColorR = (u8)(255 - ((s32)(155.0f * arrowAnimTween)));
    this->stickLeftPrompt.arrowColorG = (u8)(new_var2 - (s32)(155.0f * arrowAnimTween));
    new_var3 = (155.0f * arrowAnimTween);
    this->stickLeftPrompt.arrowColorB = (u8)(0 - ((s32)((-100.0f) * arrowAnimTween)));
    this->stickLeftPrompt.arrowColorA = (u8)(200 - ((s32)(50.0f * arrowAnimTween)));
    this->stickRightPrompt.arrowColorR = (u8)(new_var2 - (s32)new_var3);
    this->stickRightPrompt.arrowColorG = (u8)(255 - (s32)new_var3);
    this->stickRightPrompt.arrowColorB = (u8)(0 - ((s32)((-100.0f) * arrowAnimTween)));
    this->stickRightPrompt.arrowColorA = (u8)(200 - ((s32)(50.0f * arrowAnimTween)));
    this->stickRightPrompt.arrowTexX = 290.0f;
    this->stickLeftPrompt.arrowTexX = 33.0f;
    this->stickRightPrompt.stickTexX = 274.0f;
    this->stickLeftPrompt.stickTexX = 49.0f;
    this->stickRightPrompt.stickTexX += (8.0f * stickAnimTween);
    this->stickLeftPrompt.stickTexX -= (8.0f * stickAnimTween);
    this->stickLeftPrompt.arrowTexY = this->stickRightPrompt.arrowTexY = 91.0f;
    this->stickLeftPrompt.stickTexY = this->stickRightPrompt.stickTexY = 95.0f;
}

void OfficeSecurity_State_FacingForward(OfficeSecurity* this, PlayState* play){
    if (this->stickAccumX < 0) {
        this->stateFlag = OFFICE_SECURITY_STATE_LOOK_LEFT;
        this->stickLeftPrompt.isEnabled = false;
        //Sfx_PlaySfxCentered(NA_SE_SY_CURSOR);
    } else if (this->stickAccumX > 0) {
        this->stateFlag = OFFICE_SECURITY_STATE_LOOK_RIGHT;
        this->stickRightPrompt.isEnabled = false;
        //Sfx_PlaySfxCentered(NA_SE_SY_CURSOR);
    } else if (this->stickAccumY < 0) {
        this->stateFlag = OFFICE_SECURITY_STATE_OPENING_CAMS;
        this->stickLeftPrompt.isEnabled = false;
        this->stickRightPrompt.isEnabled = false;
    }
}

void OfficeSecurity_State_FacingLeft(OfficeSecurity* this, PlayState* play){
    if (this->stickAccumX > 0) {
        this->stateFlag = OFFICE_SECURITY_STATE_LOOK_FORWARD;
        this->stickLeftPrompt.isEnabled = true;
        //Sfx_PlaySfxCentered(NA_SE_SY_CURSOR);
    }
}

void OfficeSecurity_State_FacingRight(OfficeSecurity* this, PlayState* play){
    if (this->stickAccumX < 0) {
        this->stateFlag = OFFICE_SECURITY_STATE_LOOK_FORWARD;
        this->stickRightPrompt.isEnabled = true;
        //Sfx_PlaySfxCentered(NA_SE_SY_CURSOR);
    }
}

void OfficeSecurity_State_LookToLeft(OfficeSecurity* this, PlayState* play){
    Math_ApproachF(&this->cameraFaceAngle, 30.0f, 0.5f, 10.0f);

    if (this->cameraFaceAngle > 29.5f) {
        OfficeSecurity_UpdateCameraDirection(this, play, 30.0f);
    }

    OfficeSecurity_UpdateCameraDirection(this, play, this->cameraFaceAngle);

    if (this->cameraFaceAngle >= 30.0f) {
        OfficeSecurity_UpdateCameraDirection(this, play, 30.0f);
        this->stateFlag = OFFICE_SECURITY_STATE_FACING_LEFT;
    } else {
        this->stickAccumX = 0;
    }
}

void OfficeSecurity_State_LookToRight(OfficeSecurity* this, PlayState* play){
    Math_ApproachF(&this->cameraFaceAngle, -30.0f, 0.5f, 10.0f);

    if (this->cameraFaceAngle < -29.5f) {
        OfficeSecurity_UpdateCameraDirection(this, play, -30.0f);
    }

    OfficeSecurity_UpdateCameraDirection(this, play, this->cameraFaceAngle);

    if (this->cameraFaceAngle <= -30.0f) {
        OfficeSecurity_UpdateCameraDirection(this, play, -30.0f);
        this->stateFlag = OFFICE_SECURITY_STATE_FACING_RIGHT;
    } else {
        this->stickAccumX = 0;
    }
}

void OfficeSecurity_State_LookForward(OfficeSecurity* this, PlayState* play){
    Math_ApproachF(&this->cameraFaceAngle, 0.0f, 0.5f, 10.0f);
    if ((this->cameraFaceAngle < 0.5f) && (this->cameraFaceAngle > -0.5f)) {
        OfficeSecurity_UpdateCameraDirection(this, play, 0.0f);
    }
    OfficeSecurity_UpdateCameraDirection(this, play, this->cameraFaceAngle);
    if (this->cameraFaceAngle == 0.0f) {
        this->stateFlag = OFFICE_SECURITY_STATE_FACING_FORWARD;
    }
}

void OfficeSecurity_State_OpeningCams(OfficeSecurity* this, PlayState* play){
    play->viewpoint = this->camIndex;
    this->stateFlag = OFFICE_SECURITY_STATE_IN_CAMS;
}

void OfficeSecurity_State_InCams(OfficeSecurity* this, PlayState* play) {
    Input* input = &play->state.input[0];
    if (CHECK_BTN_ALL(input->press.button, BTN_L)){
        if (play->viewpoint == OFFICE_SECURITY_CAM_STAGE){
            play->viewpoint = OFFICE_SECURITY_CAM_BATHROOMS;
        } else {
            play->viewpoint -= 1;
        }
    }
    if (CHECK_BTN_ALL(input->press.button, BTN_R)){
        if (play->viewpoint == OFFICE_SECURITY_CAM_BATHROOMS){
            play->viewpoint = OFFICE_SECURITY_CAM_STAGE;
        } else {
            play->viewpoint += 1;
        }
    }
    if (this->stickAccumY > 0) {
        play->viewpoint = OFFICE_SECURITY_CAM_OFFICE;
        this->stateFlag = OFFICE_SECURITY_STATE_LOOK_FORWARD;
        this->stickLeftPrompt.isEnabled = true;
        this->stickRightPrompt.isEnabled = true;
    }
}
