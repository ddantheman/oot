#include "fnaf_scene.h"

/**
 * Header Child Day (Default)
*/
SceneCmd fnaf_scene_header00[] = {
    SCENE_CMD_COL_HEADER(&fnaf_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, fnaf_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x13, NA_BGM_NO_MUSIC),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x00, 0x00, LIGHT_MODE_SETTINGS),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, fnaf_scene_header00_lightSettings),
    SCENE_CMD_SPAWN_LIST(fnaf_scene_header00_entranceList),
    SCENE_CMD_PLAYER_ENTRY_LIST(1, fnaf_scene_header00_playerEntryList),
    SCENE_CMD_END(),
};

RomFile fnaf_scene_roomList[] = {
    { (uintptr_t)_fnaf_room_0SegmentRomStart, (uintptr_t)_fnaf_room_0SegmentRomEnd },
};

ActorEntry fnaf_scene_header00_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { 0, -106, 16 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ (0x0F00 | ((0xFF & 0x00FF)))
    },
};

Spawn fnaf_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

EnvLightSettings fnaf_scene_header00_lightSettings[1] = {
    // Indoor No. 1
    {
        {   143,   122,   140 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   219,   204,   194 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    79,    79,   133 },   // Diffuse1 Color
        {   196,   182,   175 },   // Fog Color
        BLEND_RATE_AND_FOG_NEAR(1, 993), // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

Vec3s fnaf_scene_camPosData[] = {
    {      0,    -70,    -15 },
    { 0xFCB9, 0x8000, 0x0000 },
    {   8670,     -1,     -1 },

    {      0,   -120,      0 },
    { 0xC000, 0x0000, 0x8000 },
    {   3960,     -1,     -1 },
};

BgCamInfo fnaf_scene_bgCamInfo[] = {
    { CAM_SET_PREREND_FIXED, 3, &fnaf_scene_camPosData[0] },
    { CAM_SET_NORMAL0, 3, &fnaf_scene_camPosData[3] },
};

SurfaceType fnaf_scene_polygonTypes[2] = {
    { SURFACETYPE0(0, 0, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
    { SURFACETYPE0(0, 0, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
};

Vec3s fnaf_scene_vertices[8] = {
    {    -77,   -106,     29 },
    {     77,   -106,     29 },
    {     77,   -106,   -118 },
    {    -77,   -106,   -118 },
    {    -77,      1,     29 },
    {    -77,      1,   -118 },
    {     77,      1,   -118 },
    {     77,      1,     29 },
};

CollisionPoly fnaf_scene_polygons[12] = {
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 106 },
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 106 },
    { 1, COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 1 },
    { 1, COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 1 },
    { 1, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0) }, 29 },
    { 1, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(1), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0) }, 29 },
    { 1, COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 77 },
    { 1, COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 77 },
    { 1, COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(4), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 77 },
    { 1, COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(0), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 77 },
    { 1, COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(5), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0) }, 118 },
    { 1, COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0) }, 118 },
};

CollisionHeader fnaf_scene_collisionHeader = {
    { -77, -106, -118 },
    { 77, 1, 29 },
    ARRAY_COUNT(fnaf_scene_vertices), fnaf_scene_vertices,
    ARRAY_COUNT(fnaf_scene_polygons), fnaf_scene_polygons,
    fnaf_scene_polygonTypes,
    fnaf_scene_bgCamInfo,
    0, NULL
};

