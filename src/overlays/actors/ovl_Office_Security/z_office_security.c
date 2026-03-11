/*
 File: z_office_security.c
 Overlay: ovl_Office_Security
 Description: Controls the office security system (doors, buttons, etc)
*/

#include "z_office_security.h"
#include "assets/objects/object_office_security/gOfficeSecurityDL.h"
#include "assets/objects/object_office_security/gOfficeSecurityDL_collision.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void OfficeSecurity_Init(Actor* thisx, PlayState* play);
void OfficeSecurity_Destroy(Actor* thisx, PlayState* play);
void OfficeSecurity_Update(Actor* thisx, PlayState* play);
void OfficeSecurity_Draw(Actor* thisx, PlayState* play);

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

void OfficeSecurity_UpdateCameraDirection(OfficeSecurity* this, PlayState* play, f32 cameraFaceAngle) {
    this->cameraFaceAngle = cameraFaceAngle;
    Camera_SetCameraData(GET_ACTIVE_CAM(play), CAM_DATA_SET_2 | CAM_DATA_SET_3, NULL, NULL, cameraFaceAngle, 0, 0);
}

void OfficeSecurity_Init(Actor* thisx, PlayState* play){
    OfficeSecurity* this = (OfficeSecurity*)thisx;

    CollisionHeader* colHeader = NULL;
    CollisionHeader_GetVirtual(&gOfficeSecurityDL_collisionHeader, &colHeader);

    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);

    //TreeElevator_SetupWaitForSwitch(this, play);
}
void OfficeSecurity_Destroy(Actor* thisx, PlayState* play){
    OfficeSecurity* this = (OfficeSecurity*)thisx;
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}
void OfficeSecurity_Update(Actor* thisx, PlayState* play){
    OfficeSecurity* this = (OfficeSecurity*)thisx;
    
    
    //this->actionFunc(this, play);
}
void OfficeSecurity_Draw(Actor* thisx, PlayState* play){
    Gfx_DrawDListOpa(play, gOfficeSecurityDL_opaque_dl);
}