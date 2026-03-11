/*
 File: z_office_security.c
 Overlay: ovl_Office_Security
 Description: Controls the office security system (doors, buttons, etc)
*/

#include "z_office_security.h"
#include "assets/objects/object_office_security/gOfficeSecurityDL.h"
#include "assets/objects/object_office_security/gOfficeSecurityDL_collision.h"
#include "z_lib.h"
#include "player.h"
#include "regs.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void OfficeSecurity_Init(Actor* thisx, PlayState* play, Player* player);
void OfficeSecurity_Destroy(Actor* thisx, PlayState* play);
void OfficeSecurity_Update(Actor* thisx, PlayState* play, Player* player);
void OfficeSecurity_Draw(Actor* thisx, PlayState* play);

void OfficeSecurity_MainActionFunc(OfficeSecurity* this, PlayState* play);

void OfficeSecurity_UpdateJoystickInputState(PlayState* play, OfficeSecurity* this);
void OfficeSecurity_UpdateCameraDirection(OfficeSecurity* this, PlayState* play, f32 cameraFaceAngle);

void OfficeSecurity_State_FacingForward(OfficeSecurity* this, PlayState* play);
void OfficeSecurity_State_FacingLeft(OfficeSecurity* this, PlayState* play);
void OfficeSecurity_State_FacingRight(OfficeSecurity* this, PlayState* play);
void OfficeSecurity_State_LookToLeft(OfficeSecurity* this, PlayState* play);
void OfficeSecurity_State_LookToRight(OfficeSecurity* this, PlayState* play);
void OfficeSecurity_State_LookForward(OfficeSecurity* this, PlayState* play);

static OfficeSecurityStateFunc sStateFunc[] = {
    OfficeSecurity_State_FacingForward,
    OfficeSecurity_State_FacingLeft,
    OfficeSecurity_State_FacingRight,
    OfficeSecurity_State_LookToLeft,
    OfficeSecurity_State_LookToRight,
    OfficeSecurity_State_LookForward
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

void OfficeSecurity_Init(Actor* thisx, PlayState* play, Player* player){
    OfficeSecurity* this = (OfficeSecurity*)thisx;

    CollisionHeader* colHeader = NULL;
    CollisionHeader_GetVirtual(&gOfficeSecurityDL_collisionHeader, &colHeader);

    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
    OfficeSecurity_UpdateCameraDirection(this, play, 0.0f);

    this->stateFlag = OFFICE_SECURITY_STATE_FACING_FORWARD;
    this->actionFunc = OfficeSecurity_MainActionFunc;
}

void OfficeSecurity_Destroy(Actor* thisx, PlayState* play){
    OfficeSecurity* this = (OfficeSecurity*)thisx;
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void OfficeSecurity_Update(Actor* thisx, PlayState* play, Player* player){
    OfficeSecurity* this = (OfficeSecurity*)thisx;
    this->actionFunc(this, play);
}

void OfficeSecurity_Draw(Actor* thisx, PlayState* play){
    Gfx_DrawDListOpa(play, gOfficeSecurityDL_opaque_dl);
}

void OfficeSecurity_MainActionFunc(OfficeSecurity* this, PlayState* play) {
    OfficeSecurity_UpdateJoystickInputState(play, this);
    sStateFunc[this->stateFlag](this, play);
    
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

void OfficeSecurity_State_FacingForward(OfficeSecurity* this, PlayState* play){
    if (this->stickAccumX < 0) {
        this->stateFlag = OFFICE_SECURITY_STATE_LOOK_LEFT;
    } else if (this->stickAccumX > 0) {
        this->stateFlag = OFFICE_SECURITY_STATE_LOOK_RIGHT;
    }
}

void OfficeSecurity_State_FacingLeft(OfficeSecurity* this, PlayState* play){
    if (this->stickAccumX > 0) {
        this->stateFlag = OFFICE_SECURITY_STATE_LOOK_FORWARD;
    }
}

void OfficeSecurity_State_FacingRight(OfficeSecurity* this, PlayState* play){
    if (this->stickAccumX < 0) {
        this->stateFlag = OFFICE_SECURITY_STATE_LOOK_FORWARD;
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