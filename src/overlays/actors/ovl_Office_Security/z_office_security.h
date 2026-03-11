#ifndef Z_OFFICE_SECURITY
#define Z_OFFICE_SECURITY

#include "ultra64.h"
#include "actor.h"
#include "play_state.h"

struct OfficeSecurity;

typedef void(*OfficeSecurityActionFunc)(struct OfficeSecurity*, PlayState*);

typedef struct OfficeSecurity {
    DynaPolyActor dyna;
    OfficeSecurityActionFunc actionFunc;
    f32 cameraFaceAngle;
} OfficeSecurity;
#endif
