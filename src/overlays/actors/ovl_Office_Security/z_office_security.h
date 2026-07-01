#ifndef Z_OFFICE_SECURITY
#define Z_OFFICE_SECURITY

#include "ultra64.h"
#include "actor.h"
#include "play_state.h"

struct OfficeSecurity;

typedef void(*OfficeSecurityActionFunc)(struct OfficeSecurity*, PlayState*);
typedef void (*OfficeSecurityStateFunc)(struct OfficeSecurity*, struct PlayState*);

typedef struct StickDirectionPrompt {
    u32 stickColorR;
    u32 stickColorG;
    u32 stickColorB;
    u32 stickColorA;
    f32 stickTexX;
    f32 stickTexY;
    u32 arrowColorR;
    u32 arrowColorG;
    u32 arrowColorB;
    u32 arrowColorA;
    f32 arrowTexX;
    f32 arrowTexY;
    f32 z;
    s32 isEnabled;
} StickDirectionPrompt;

typedef struct OfficeSecurity {
    DynaPolyActor dyna;
    OfficeSecurityActionFunc actionFunc;
    f32 cameraFaceAngle;
    s32 stickAccumX;
    s32 stickAccumY;
    u8 moveHorizontal;
    u8 moveVertical;
    s16 playerStateFlag;
    s16 LDoorStateFlag;
    s16 RDoorStateFlag;
    s16 freddyStateFlag;
    s16 bonnieStateFlag;
    s16 chicaStateFlag;
    s16 foxyStateFlag;
    s16 goldenStateFlag;
    StickDirectionPrompt stickLeftPrompt;
    StickDirectionPrompt stickRightPrompt;
    f32 arrowAnimTween;
    f32 stickAnimTween;
    u8 arrowAnimState;
    u8 stickAnimState;
    u16 camIndex;
    s16 remainingPower;
    u8 currentNight;
    u16 passiveDrainFrequency;
    u16 timer;
    u16 fps;
} OfficeSecurity;

typedef enum OfficeSecurityNights {
    /* 00 */ NIGHT_1,
    /* 01 */ NIGHT_2,
    /* 02 */ NIGHT_3,
    /* 03 */ NIGHT_4,
    /* 04 */ NIGHT_5
} OfficeSecurityNights;

typedef enum OfficeSecurityPlayerState {
    /* 00 */ OFFICE_SECURITY_PLAYER_FACING_FORWARD,
    /* 01 */ OFFICE_SECURITY_PLAYER_FACING_LEFT,
    /* 02 */ OFFICE_SECURITY_PLAYER_FACING_RIGHT,
    /* 03 */ OFFICE_SECURITY_PLAYER_LOOK_LEFT,
    /* 04 */ OFFICE_SECURITY_PLAYER_LOOK_RIGHT,
    /* 04 */ OFFICE_SECURITY_PLAYER_LOOK_FORWARD,
    /* 05 */ OFFICE_SECURITY_PLAYER_OPENING_CAMS,
    /* 06 */ OFFICE_SECURITY_PLAYER_IN_CAMS,
    /* 07 */ OFFICE_SECURITY_PLAYER_POWER_OFF
} OfficeSecurityPlayerState;

typedef enum OfficeSecurityFreddyState {
    /* 00 */ OFFICE_SECURITY_FREDDY_STAGE,
    /* 01 */ OFFICE_SECURITY_FREDDY_DINING,
    /* 02 */ OFFICE_SECURITY_FREDDY_BATHROOM,
    /* 03 */ OFFICE_SECURITY_FREDDY_KITCHEN,
    /* 04 */ OFFICE_SECURITY_FREDDY_EAST_HALL,
    /* 05 */ OFFICE_SECURITY_FREDDY_EAST_HALL_CORNER,
    /* 06 */ OFFICE_SECURITY_FREDDY_INSIDE,
} OfficeSecurityFreddyState;

typedef enum OfficeSecurityBonnieState {
    /* 00 */ OFFICE_SECURITY_BONNIE_STAGE,
    /* 01 */ OFFICE_SECURITY_BONNIE_DINING1,
    /* 02 */ OFFICE_SECURITY_BONNIE_DINING2,
    /* 03 */ OFFICE_SECURITY_BONNIE_PARTS1,
    /* 04 */ OFFICE_SECURITY_BONNIE_PARTS2,
    /* 05 */ OFFICE_SECURITY_BONNIE_HALL,
    /* 06 */ OFFICE_SECURITY_BONNIE_CLOSET,
    /* 07 */ OFFICE_SECURITY_BONNIE_CORNER,
    /* 08 */ OFFICE_SECURITY_BONNIE_DOOR,
    /* 09 */ OFFICE_SECURITY_BONNIE_INSIDE
} OfficeSecurityBonnieState;

typedef enum OfficeSecurityChicaState {
    /* 00 */ OFFICE_SECURITY_CHICA_STAGE,
    /* 01 */ OFFICE_SECURITY_CHICA_DINING1,
    /* 02 */ OFFICE_SECURITY_CHICA_DINING2,
    /* 03 */ OFFICE_SECURITY_CHICA_BATH1,
    /* 04 */ OFFICE_SECURITY_CHICA_BATH2,
    /* 05 */ OFFICE_SECURITY_CHICA_KITCHEN,
    /* 06 */ OFFICE_SECURITY_CHICA_HALL1,
    /* 07 */ OFFICE_SECURITY_CHICA_HALL2,
    /* 08 */ OFFICE_SECURITY_CHICA_CORNER,
    /* 09 */ OFFICE_SECURITY_CHICA_DOOR,
    /* 10 */ OFFICE_SECURITY_CHICA_INSIDE
} OfficeSecurityChicaState;

typedef enum OfficeSecurityFoxyState {
    /* 00 */ OFFICE_SECURITY_FOXY_ONE,
    /* 01 */ OFFICE_SECURITY_FOXY_TWO,
    /* 02 */ OFFICE_SECURITY_FOXY_THREE,
    /* 03 */ OFFICE_SECURITY_FOXY_RUN,
    /* 04 */ OFFICE_SECURITY_FOXY_DOOR,
} OfficeSecurityFoxyState;

typedef enum OfficeSecurityGoldenState {
    /* 00 */ OFFICE_SECURITY_GOLDEN_HIDING,
    /* 01 */ OFFICE_SECURITY_GOLDEN_POSTER,
    /* 02 */ OFFICE_SECURITY_GOLDEN_INSIDE,
} OfficeSecurityGoldenState;

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

typedef enum OfficeSecurityLeftDoor {
    /* 00 */ OFFICE_SECURITY_LDOOR_OPEN,
    /* 01 */ OFFICE_SECURITY_LDOOR_CLOSED,
    /* 02 */ OFFICE_SECURITY_LDOOR_OPENING,
    /* 03 */ OFFICE_SECURITY_LDOOR_CLOSING
} OfficeSecurityLeftDoor;

typedef enum OfficeSecurityRightDoor {
    /* 00 */ OFFICE_SECURITY_RDOOR_OPEN,
    /* 01 */ OFFICE_SECURITY_RDOOR_CLOSED,
    /* 02 */ OFFICE_SECURITY_RDOOR_OPENING,
    /* 03 */ OFFICE_SECURITY_RDOOR_CLOSING
} OfficeSecurityRightDoor;

#endif
