#ifndef FNAF_SCENE_H
#define FNAF_SCENE_H

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

extern SceneCmd fnaf_scene_header00[];
extern RomFile fnaf_scene_roomList[];
extern u8 _fnaf_room_0SegmentRomStart[];
extern u8 _fnaf_room_0SegmentRomEnd[];
extern ActorEntry fnaf_scene_header00_playerEntryList[];
extern Spawn fnaf_scene_header00_entranceList[];
extern EnvLightSettings fnaf_scene_header00_lightSettings[1];
extern Vec3s fnaf_scene_camPosData[];
extern BgCamInfo fnaf_scene_bgCamInfo[];
extern SurfaceType fnaf_scene_polygonTypes[3];
extern Vec3s fnaf_scene_vertices[186];
extern CollisionPoly fnaf_scene_polygons[364];
extern CollisionHeader fnaf_scene_collisionHeader;
extern SceneCmd fnaf_room_0_header00[];
extern s16 fnaf_room_0_header00_objectList[];
extern ActorEntry fnaf_room_0_header00_actorList[];
extern Gfx fnaf_room_0_shapeHeader_entry_0_opaque[];
extern u64 fnaf_room_0_dl_tile_rgba32[];
extern u64 fnaf_room_0_dl_wall_rgba32[];
extern Vtx fnaf_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx fnaf_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[82];
extern Gfx fnaf_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Vtx fnaf_room_0_dl_Floor_mesh_layer_Opaque_vtx_1[4];
extern Gfx fnaf_room_0_dl_Floor_mesh_layer_Opaque_tri_1[];
extern Vtx fnaf_room_0_dl_Floor_mesh_layer_Opaque_vtx_2[302];
extern Gfx fnaf_room_0_dl_Floor_mesh_layer_Opaque_tri_2[];
extern Vtx fnaf_room_0_dl_Foxy_Stage_mesh_layer_Opaque_vtx_cull[8];
extern Vtx fnaf_room_0_dl_Foxy_Stage_mesh_layer_Opaque_vtx_0[101];
extern Gfx fnaf_room_0_dl_Foxy_Stage_mesh_layer_Opaque_tri_0[];
extern Gfx mat_fnaf_room_0_dl_tile_layerOpaque[];
extern Gfx mat_fnaf_room_0_dl_f3dlite_material_layerOpaque[];
extern Gfx mat_fnaf_room_0_dl_wall_layerOpaque[];
extern Gfx fnaf_room_0_dl_Floor_mesh_layer_Opaque[];
extern Gfx fnaf_room_0_dl_Foxy_Stage_mesh_layer_Opaque[];
extern RoomShapeNormal fnaf_room_0_shapeHeader;
extern RoomShapeDListsEntry fnaf_room_0_shapeDListsEntry[1];

#endif
