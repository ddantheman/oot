#ifndef MY_SCENE_SCENE_H
#define MY_SCENE_SCENE_H

#include "ultra64.h"
#include "romfile.h"
#include "array_count.h"
#include "sequence.h"
#include "actor_profile.h"
#include "bgcheck.h"
#include "camera.h"
#include "cutscene.h"
#include "cutscene_commands.h"
#include "environment.h"
#include "z_math.h"
#include "object.h"
#include "ocarina.h"
#include "path.h"
#include "player.h"
#include "room.h"
#include "scene.h"

// For older decomp versions
#ifndef SCENE_CMD_PLAYER_ENTRY_LIST
#define SCENE_CMD_PLAYER_ENTRY_LIST(length, playerEntryList) \
    { SCENE_CMD_ID_SPAWN_LIST, length, CMD_PTR(playerEntryList) }
#undef SCENE_CMD_SPAWN_LIST
#define SCENE_CMD_SPAWN_LIST(spawnList) \
    { SCENE_CMD_ID_ENTRANCE_LIST, 0, CMD_PTR(spawnList) }
#endif

#ifndef BLEND_RATE_AND_FOG_NEAR
#define BLEND_RATE_AND_FOG_NEAR(blendRate, fogNear) (s16)((((blendRate) / 4) << 10) | (fogNear))
#endif

extern SceneCmd my_scene_scene_header00[];
extern RomFile my_scene_scene_roomList[];
extern u8 _my_scene_room_0SegmentRomStart[];
extern u8 _my_scene_room_0SegmentRomEnd[];
extern ActorEntry my_scene_scene_header00_playerEntryList[];
extern Spawn my_scene_scene_header00_entranceList[];
extern s16 my_scene_scene_header00_exitList[1];
extern EnvLightSettings my_scene_scene_header00_lightSettings[1];
extern Vec3s my_scene_scene_camPosData[];
extern BgCamInfo my_scene_scene_bgCamInfo[];
extern SurfaceType my_scene_scene_polygonTypes[2];
extern Vec3s my_scene_scene_vertices[8];
extern CollisionPoly my_scene_scene_polygons[10];
extern CollisionHeader my_scene_scene_collisionHeader;
extern SceneCmd my_scene_room_0_header00[];
extern s16 my_scene_room_0_header00_objectList[];
extern ActorEntry my_scene_room_0_header00_actorList[];
extern Gfx my_scene_room_0_shapeHeader_entry_0_opaque[];
extern u64 my_scene_room_0_dl_ground_texture_rgba32[];
extern Vtx my_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_cull[8];
extern Vtx my_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_0[16];
extern Gfx my_scene_room_0_dl_Ground_mesh_layer_Opaque_tri_0[];
extern Vtx my_scene_room_0_dl_Ground_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx my_scene_room_0_dl_Ground_001_mesh_layer_Opaque_vtx_0[4];
extern Gfx my_scene_room_0_dl_Ground_001_mesh_layer_Opaque_tri_0[];
extern Gfx mat_my_scene_room_0_dl_f3dlite_material_layerOpaque[];
extern Gfx mat_my_scene_room_0_dl_f3dlite_material_001_layerOpaque[];
extern Gfx my_scene_room_0_dl_Ground_mesh_layer_Opaque[];
extern Gfx my_scene_room_0_dl_Ground_001_mesh_layer_Opaque[];
extern RoomShapeNormal my_scene_room_0_shapeHeader;
extern RoomShapeDListsEntry my_scene_room_0_shapeDListsEntry[1];

#endif
