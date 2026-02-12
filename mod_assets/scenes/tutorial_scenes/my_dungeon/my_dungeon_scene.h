#ifndef MY_DUNGEON_SCENE_H
#define MY_DUNGEON_SCENE_H

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

extern SceneCmd my_dungeon_scene_header00[];
extern RomFile my_dungeon_scene_roomList[];
extern u8 _my_dungeon_room_0SegmentRomStart[];
extern u8 _my_dungeon_room_0SegmentRomEnd[];
extern u8 _my_dungeon_room_1SegmentRomStart[];
extern u8 _my_dungeon_room_1SegmentRomEnd[];
extern u8 _my_dungeon_room_2SegmentRomStart[];
extern u8 _my_dungeon_room_2SegmentRomEnd[];
extern ActorEntry my_dungeon_scene_header00_playerEntryList[];
extern Spawn my_dungeon_scene_header00_entranceList[];
extern TransitionActorEntry my_dungeon_scene_header00_transitionActors[];
extern s16 my_dungeon_scene_header00_exitList[1];
extern EnvLightSettings my_dungeon_scene_header00_lightSettings[1];
extern WaterBox my_dungeon_scene_waterBoxes[1];
extern BgCamInfo my_dungeon_scene_bgCamInfo[];
extern SurfaceType my_dungeon_scene_polygonTypes[9];
extern Vec3s my_dungeon_scene_vertices[142];
extern CollisionPoly my_dungeon_scene_polygons[264];
extern CollisionHeader my_dungeon_scene_collisionHeader;
extern u64 my_dungeon_room_0_dl_men_room_10_00002C48_Tex_rgba16_ci8[];
extern u64 my_dungeon_room_0_dl_men_room_10_00002C48_Tex_rgba16_pal_rgba16[];
extern u64 my_dungeon_room_1_dl_men_scene_00010CC0_CITex_ci8_tlut_men_scene_0000F6C0_TLUT_ci8[];
extern u64 my_dungeon_room_1_dl_men_scene_00010CC0_CITex_ci8_tlut_men_scene_0000F6C0_TLUT_pal_rgba16[];
extern u64 my_dungeon_room_0_dl_men_room_2_00004C48_CITex_ci8_tlut_men_scene_0000F6C0_TLUT_ci8[];
extern u64 my_dungeon_room_0_dl_men_room_2_00004C48_CITex_ci8_tlut_men_scene_0000F6C0_TLUT_pal_rgba16[];
extern Gfx mat_my_dungeon_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mat_my_dungeon_room_1_dl_wall_2_layerOpaque[];
extern SceneCmd my_dungeon_room_0_header00[];
extern s16 my_dungeon_room_0_header00_objectList[];
extern Gfx my_dungeon_room_0_shapeHeader_entry_0_opaque[];
extern u64 my_dungeon_room_0_dl_men_room_0_0000B538_CITex_ci8_tlut_men_scene_0000F6C0_TLUT_ci8[];
extern u64 my_dungeon_room_0_dl_men_room_0_0000B538_CITex_ci8_tlut_men_scene_0000F6C0_TLUT_pal_rgba16[];
extern u64 my_dungeon_room_0_dl_men_room_8_00005D30_Tex_rgba16_ci8[];
extern u64 my_dungeon_room_0_dl_men_room_8_00005D30_Tex_rgba16_pal_rgba16[];
extern Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[24];
extern Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_1[106];
extern Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_1[];
extern Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_2[4];
extern Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_2[];
extern Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_3[4];
extern Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_3[];
extern Vtx my_dungeon_room_0_dl_metal_vines_mesh_layer_Opaque_vtx_cull[8];
extern Vtx my_dungeon_room_0_dl_metal_vines_mesh_layer_Opaque_vtx_0[4];
extern Gfx my_dungeon_room_0_dl_metal_vines_mesh_layer_Opaque_tri_0[];
extern Gfx mat_my_dungeon_room_0_dl_wall_stone_layerOpaque[];
extern Gfx mat_my_dungeon_room_0_dl_floor_2_001_layerOpaque[];
extern Gfx mat_my_dungeon_room_0_dl_wall_stone_climb_layerOpaque[];
extern Gfx mat_my_dungeon_room_0_dl_metal_vines_layerOpaque[];
extern Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque[];
extern Gfx my_dungeon_room_0_dl_metal_vines_mesh_layer_Opaque[];
extern RoomShapeNormal my_dungeon_room_0_shapeHeader;
extern RoomShapeDListsEntry my_dungeon_room_0_shapeDListsEntry[1];
extern SceneCmd my_dungeon_room_1_header00[];
extern s16 my_dungeon_room_1_header00_objectList[];
extern ActorEntry my_dungeon_room_1_header00_actorList[];
extern Gfx my_dungeon_room_1_shapeHeader_entry_0_opaque[];
extern u64 my_dungeon_room_1_dl_ari_rgba16[];
extern Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_0[16];
extern Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_0[];
extern Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_1[53];
extern Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_1[];
extern Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_2[6];
extern Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_2[];
extern Gfx mat_my_dungeon_room_1_dl_f3dlite_material_layerOpaque[];
extern Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque[];
extern RoomShapeNormal my_dungeon_room_1_shapeHeader;
extern RoomShapeDListsEntry my_dungeon_room_1_shapeDListsEntry[1];
extern SceneCmd my_dungeon_room_2_header00[];
extern s16 my_dungeon_room_2_header00_objectList[];
extern ActorEntry my_dungeon_room_2_header00_actorList[];
extern Gfx my_dungeon_room_2_shapeHeader_entry_0_opaque[];
extern Gfx my_dungeon_room_2_shapeHeader_entry_0_transparent[];
extern u64 my_dungeon_room_2_dl_men_room_9_00003070_Tex_rgba16_rgba16[];
extern Vtx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_cull[8];
extern Vtx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_0[26];
extern Gfx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_tri_0[];
extern Vtx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_1[76];
extern Gfx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_tri_1[];
extern Vtx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_2[8];
extern Gfx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_tri_2[];
extern Vtx my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_cull[8];
extern Vtx my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_0[4];
extern Gfx my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent_tri_0[];
extern Gfx mat_my_dungeon_room_2_dl_floor_2_layerOpaque[];
extern Gfx mat_my_dungeon_room_2_dl_oot_water_mat_layerTransparent[];
extern Gfx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque[];
extern Gfx my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent[];
extern RoomShapeNormal my_dungeon_room_2_shapeHeader;
extern RoomShapeDListsEntry my_dungeon_room_2_shapeDListsEntry[1];

#endif
