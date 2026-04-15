#ifndef Z_OFFICE_SECURITY
#define Z_OFFICE_SECURITY

#include "ultra64.h"
#include "actor.h"
#include "play_state.h"

struct OfficeSecurity;

typedef void(*OfficeSecurityActionFunc)(struct OfficeSecurity*, PlayState*);
typedef void (*OfficeSecurityStateFunc)(struct OfficeSecurity*, struct PlayState*);

typedef struct StickDirectionPrompt {
    /* 0x00 */ u32 stickColorR;
    /* 0x04 */ u32 stickColorG;
    /* 0x08 */ u32 stickColorB;
    /* 0x0C */ u32 stickColorA;
    /* 0x10 */ f32 stickTexX;
    /* 0x14 */ f32 stickTexY;
    /* 0x18 */ u32 arrowColorR;
    /* 0x1C */ u32 arrowColorG;
    /* 0x20 */ u32 arrowColorB;
    /* 0x24 */ u32 arrowColorA;
    /* 0x28 */ f32 arrowTexX;
    /* 0x2C */ f32 arrowTexY;
    /* 0x30 */ f32 z;
    /* 0x34 */ s32 isEnabled;
} StickDirectionPrompt;

typedef struct OfficeSecurity {
    DynaPolyActor dyna;
    OfficeSecurityActionFunc actionFunc;
    f32 cameraFaceAngle;
    s32 stickAccumX;
    s32 stickAccumY;
    u8 moveHorizontal;
    u8 moveVertical;
    s16 stateFlag;
    StickDirectionPrompt stickLeftPrompt;
    StickDirectionPrompt stickRightPrompt;
    f32 arrowAnimTween;
    f32 stickAnimTween;
    u8 arrowAnimState;
    u8 stickAnimState;
    u16 camIndex;
} OfficeSecurity;

typedef enum OfficeSecurityState {
    /* 00 */ OFFICE_SECURITY_STATE_FACING_FORWARD,
    /* 01 */ OFFICE_SECURITY_STATE_FACING_LEFT,
    /* 02 */ OFFICE_SECURITY_STATE_FACING_RIGHT,
    /* 03 */ OFFICE_SECURITY_STATE_LOOK_LEFT,
    /* 04 */ OFFICE_SECURITY_STATE_LOOK_RIGHT,
    /* 04 */ OFFICE_SECURITY_STATE_LOOK_FORWARD,
    /* 05 */ OFFICE_SECURITY_STATE_OPENING_CAMS,
    /* 06 */ OFFICE_SECURITY_STATE_IN_CAMS
} OfficeSecurityState;

typedef enum OfficeSecurityCams {
    /* 00 */ OFFICE_SECURITY_CAM_DUMMY,
    /* 01 */ OFFICE_SECURITY_CAM_OFFICE,
    /* 02 */ OFFICE_SECURITY_CAM_ROAM,
    /* 03 */ OFFICE_SECURITY_CAM_STAGE,
    /* 04 */ OFFICE_SECURITY_CAM_DINING,
    /* 05 */ OFFICE_SECURITY_CAM_PIRATE,
    /* 06 */ OFFICE_SECURITY_CAM_LEFT_HALL,
    /* 07 */ OFFICE_SECURITY_CAM_LEFT_CORNER,
    /* 08 */ OFFICE_SECURITY_CAM_CLOSET,
    /* 09 */ OFFICE_SECURITY_CAM_RIGHT_HALL,
    /* 10 */ OFFICE_SECURITY_CAM_RIGHT_CORNER,
    /* 11 */ OFFICE_SECURITY_CAM_PARTS,
    /* 12 */ OFFICE_SECURITY_CAM_KITCHEN,
    /* 13 */ OFFICE_SECURITY_CAM_BATHROOMS
} OfficeSecurityCams;

#endif
