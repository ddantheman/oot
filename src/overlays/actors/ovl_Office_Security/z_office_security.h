#ifndef Z_OFFICE_SECURITY
#define Z_OFFICE_SECURITY

#include "ultra64.h"
#include "actor.h"
#include "play_state.h"

struct OfficeSecurity;

typedef void(*OfficeSecurityActionFunc)(struct OfficeSecurity*, PlayState*);
typedef void (*OfficeSecurityStateFunc)(struct OfficeSecurity*, struct PlayState*);

typedef struct OfficeSecurity {
    DynaPolyActor dyna;
    OfficeSecurityActionFunc actionFunc;
    f32 cameraFaceAngle;
    s32 stickAccumX;
    s32 stickAccumY;
    u8 moveHorizontal;
    u8 moveVertical;
    s16 stateFlag;
} OfficeSecurity;

typedef enum OfficeSecurityState {
    /* 00 */ OFFICE_SECURITY_STATE_FACING_FORWARD,
    /* 01 */ OFFICE_SECURITY_STATE_FACING_LEFT,
    /* 02 */ OFFICE_SECURITY_STATE_FACING_RIGHT,
    /* 03 */ OFFICE_SECURITY_STATE_LOOK_LEFT,
    /* 04 */ OFFICE_SECURITY_STATE_LOOK_RIGHT,
    /* 04 */ OFFICE_SECURITY_STATE_LOOK_FORWARD,
} OfficeSecurityState;
#endif
