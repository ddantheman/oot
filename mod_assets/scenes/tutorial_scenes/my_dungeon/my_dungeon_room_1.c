#include "my_dungeon_scene.h"

/**
 * Header Child Day (Default)
*/
#define LENGTH_MY_DUNGEON_ROOM_1_HEADER00_OBJECTLIST 4
#define LENGTH_MY_DUNGEON_ROOM_1_HEADER00_ACTORLIST 4
SceneCmd my_dungeon_room_1_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&my_dungeon_room_1_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_MY_DUNGEON_ROOM_1_HEADER00_OBJECTLIST, my_dungeon_room_1_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_MY_DUNGEON_ROOM_1_HEADER00_ACTORLIST, my_dungeon_room_1_header00_actorList),
    SCENE_CMD_END(),
};

s16 my_dungeon_room_1_header00_objectList[LENGTH_MY_DUNGEON_ROOM_1_HEADER00_OBJECTLIST] = {
    OBJECT_BOX,
    OBJECT_FIREFLY,
    OBJECT_ZF,
    OBJECT_DEKUBABA,
};

ActorEntry my_dungeon_room_1_header00_actorList[LENGTH_MY_DUNGEON_ROOM_1_HEADER00_ACTORLIST] = {
    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { 464, -133, 902 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), 0x0 },
        /* Parameters */ (0x7000 | (((0x42 << 5) & 0x0FE0)))
    },

    // Keese
    {
        /* Actor ID   */ ACTOR_EN_FIREFLY,
        /* Position   */ { 273, 46, 741 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },

    // Keese
    {
        /* Actor ID   */ ACTOR_EN_FIREFLY,
        /* Position   */ { 661, 32, 819 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },

    // Lizalfos
    {
        /* Actor ID   */ ACTOR_EN_ZF,
        /* Position   */ { 466, -129, 714 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0080
    },
};

RoomShapeNormal my_dungeon_room_1_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(my_dungeon_room_1_shapeDListsEntry),
    my_dungeon_room_1_shapeDListsEntry,
    my_dungeon_room_1_shapeDListsEntry + ARRAY_COUNT(my_dungeon_room_1_shapeDListsEntry)
};

RoomShapeDListsEntry my_dungeon_room_1_shapeDListsEntry[1] = {
    { my_dungeon_room_1_shapeHeader_entry_0_opaque, NULL }
};

Gfx my_dungeon_room_1_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {164, -135, 992}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {164, 711, 992}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {164, 711, 320}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {164, -135, 320}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {764, -135, 992}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {764, 711, 992}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {764, 711, 320}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {764, -135, 320}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_0[16] = {
	{{ {303, -120, 340}, 0, {225, -1347}, {255, 255, 255, 255} }},
	{{ {363, -120, 340}, 0, {548, -1347}, {255, 255, 255, 255} }},
	{{ {363, -120, 320}, 0, {548, -1454}, {255, 255, 255, 255} }},
	{{ {303, -120, 320}, 0, {225, -1454}, {255, 255, 255, 255} }},
	{{ {230, -134, 916}, 0, {-170, 1758}, {255, 255, 255, 255} }},
	{{ {164, -120, 340}, 0, {-524, -1347}, {86, 81, 81, 255} }},
	{{ {164, -135, 982}, 0, {-524, 2112}, {86, 81, 81, 255} }},
	{{ {230, -122, 406}, 0, {-170, -992}, {255, 255, 255, 255} }},
	{{ {698, -134, 916}, 0, {2354, 1758}, {255, 255, 255, 255} }},
	{{ {764, -135, 982}, 0, {2708, 2112}, {86, 81, 81, 255} }},
	{{ {698, -122, 406}, 0, {2354, -992}, {255, 255, 255, 255} }},
	{{ {764, -120, 340}, 0, {2708, -1347}, {86, 81, 81, 255} }},
	{{ {363, -122, 406}, 0, {548, -992}, {255, 255, 255, 255} }},
	{{ {363, -120, 340}, 0, {548, -1347}, {86, 81, 81, 255} }},
	{{ {303, -122, 406}, 0, {225, -992}, {255, 255, 255, 255} }},
	{{ {303, -120, 340}, 0, {225, -1347}, {86, 81, 81, 255} }},
};

Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(7, 4, 8, 0, 8, 4, 6, 0),
	gsSP2Triangles(8, 6, 9, 0, 10, 8, 9, 0),
	gsSP2Triangles(10, 9, 11, 0, 12, 10, 11, 0),
	gsSP2Triangles(12, 11, 13, 0, 14, 12, 13, 0),
	gsSP2Triangles(14, 13, 15, 0, 7, 14, 15, 0),
	gsSP2Triangles(7, 15, 5, 0, 14, 7, 8, 0),
	gsSP2Triangles(8, 12, 14, 0, 8, 10, 12, 0),
	gsSPEndDisplayList(),
};

Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_1[53] = {
	{{ {164, -120, 340}, 0, {-1500, 1913}, {255, 255, 255, 255} }},
	{{ {303, -120, 340}, 0, {548, 1913}, {255, 255, 255, 255} }},
	{{ {303, -20, 340}, 0, {548, 1178}, {255, 255, 255, 255} }},
	{{ {164, 297, 340}, 0, {-1500, -1157}, {34, 34, 34, 255} }},
	{{ {303, 297, 340}, 0, {548, -1157}, {34, 34, 34, 255} }},
	{{ {303, 711, 340}, 0, {548, -4204}, {0, 0, 0, 255} }},
	{{ {164, 711, 340}, 0, {-1500, -4204}, {0, 0, 0, 255} }},
	{{ {164, 711, 992}, 0, {-1500, -4202}, {0, 0, 0, 255} }},
	{{ {363, 711, 340}, 0, {1431, -4204}, {0, 0, 0, 255} }},
	{{ {764, 711, 992}, 0, {-5728, -4204}, {0, 0, 0, 255} }},
	{{ {764, 711, 340}, 0, {7329, -4204}, {0, 0, 0, 255} }},
	{{ {164, -135, 982}, 0, {-1500, 2025}, {255, 255, 255, 255} }},
	{{ {764, 297, 992}, 0, {7329, -1157}, {34, 34, 34, 255} }},
	{{ {764, -135, 982}, 0, {7329, 2025}, {255, 242, 242, 255} }},
	{{ {164, 297, 992}, 0, {-1500, -1157}, {34, 34, 34, 255} }},
	{{ {764, 711, 992}, 0, {7329, -4202}, {0, 0, 0, 255} }},
	{{ {363, -120, 340}, 0, {1431, 1913}, {255, 255, 255, 255} }},
	{{ {764, -120, 340}, 0, {7329, 1913}, {255, 255, 255, 255} }},
	{{ {764, 297, 340}, 0, {7329, -1157}, {34, 34, 34, 255} }},
	{{ {363, -20, 340}, 0, {1431, 1178}, {255, 255, 255, 255} }},
	{{ {363, 297, 340}, 0, {1431, -1157}, {34, 34, 34, 255} }},
	{{ {363, 711, 340}, 0, {1431, -4204}, {0, 0, 0, 255} }},
	{{ {764, -135, 982}, 0, {-5578, 2025}, {255, 242, 242, 255} }},
	{{ {764, 297, 340}, 0, {3869, -1157}, {34, 34, 34, 255} }},
	{{ {764, -120, 340}, 0, {3869, 1913}, {255, 255, 255, 255} }},
	{{ {764, 297, 992}, 0, {-5728, -1157}, {34, 34, 34, 255} }},
	{{ {764, 711, 340}, 0, {3869, -4204}, {0, 0, 0, 255} }},
	{{ {164, -120, 340}, 0, {3869, 1913}, {255, 255, 255, 255} }},
	{{ {164, 297, 992}, 0, {-5728, -1157}, {34, 34, 34, 255} }},
	{{ {164, -135, 982}, 0, {-5578, 2025}, {255, 255, 255, 255} }},
	{{ {164, 297, 340}, 0, {3869, -1157}, {34, 34, 34, 255} }},
	{{ {164, 711, 340}, 0, {3869, -4204}, {0, 0, 0, 255} }},
	{{ {164, 297, 992}, 0, {-5728, -1157}, {34, 34, 34, 255} }},
	{{ {164, 711, 340}, 0, {3869, -4204}, {0, 0, 0, 255} }},
	{{ {164, 711, 992}, 0, {-5728, -4204}, {0, 0, 0, 255} }},
	{{ {363, -20, 340}, 0, {1431, -300}, {255, 255, 255, 255} }},
	{{ {303, -20, 340}, 0, {548, -300}, {255, 255, 255, 255} }},
	{{ {303, -20, 320}, 0, {548, -447}, {255, 255, 255, 255} }},
	{{ {363, -20, 320}, 0, {1431, -447}, {255, 255, 255, 255} }},
	{{ {303, -20, 340}, 0, {548, 1178}, {255, 255, 255, 255} }},
	{{ {363, -20, 340}, 0, {1431, 1178}, {255, 255, 255, 255} }},
	{{ {363, 297, 340}, 0, {1431, -1157}, {34, 34, 34, 255} }},
	{{ {303, 297, 340}, 0, {548, -1157}, {34, 34, 34, 255} }},
	{{ {363, 711, 340}, 0, {1431, -4204}, {0, 0, 0, 255} }},
	{{ {303, 711, 340}, 0, {548, -4204}, {0, 0, 0, 255} }},
	{{ {363, -120, 340}, 0, {3869, 1913}, {255, 255, 255, 255} }},
	{{ {363, -20, 340}, 0, {3869, 1178}, {255, 255, 255, 255} }},
	{{ {363, -20, 320}, 0, {4163, 1178}, {255, 255, 255, 255} }},
	{{ {363, -120, 320}, 0, {4163, 1913}, {255, 255, 255, 255} }},
	{{ {303, -20, 340}, 0, {3869, 1178}, {255, 255, 255, 255} }},
	{{ {303, -120, 340}, 0, {3869, 1913}, {255, 255, 255, 255} }},
	{{ {303, -120, 320}, 0, {4163, 1913}, {255, 255, 255, 255} }},
	{{ {303, -20, 320}, 0, {4163, 1178}, {255, 255, 255, 255} }},
};

Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 5, 8, 0, 8, 9, 7, 0),
	gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
	gsSP2Triangles(11, 14, 12, 0, 12, 14, 7, 0),
	gsSP2Triangles(12, 7, 15, 0, 16, 17, 18, 0),
	gsSP2Triangles(18, 19, 16, 0, 18, 20, 19, 0),
	gsSP2Triangles(20, 18, 10, 0, 20, 10, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
	gsSP2Triangles(23, 25, 9, 0, 23, 9, 26, 0),
	gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
	gsSP1Triangle(28, 30, 31, 0),
	gsSPVertex(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_1 + 32, 21, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 10, 9, 11, 0),
	gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
	gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
	gsSP1Triangle(17, 19, 20, 0),
	gsSPEndDisplayList(),
};

Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_my_dungeon_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_my_dungeon_room_1_dl_wall_2_layerOpaque),
	gsSPDisplayList(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

