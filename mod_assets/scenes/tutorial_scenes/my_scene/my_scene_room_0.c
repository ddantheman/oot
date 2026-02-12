#include "my_scene_scene.h"

/**
 * Header Child Day (Default)
*/
#define LENGTH_MY_SCENE_ROOM_0_HEADER00_OBJECTLIST 1
#define LENGTH_MY_SCENE_ROOM_0_HEADER00_ACTORLIST 2
SceneCmd my_scene_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&my_scene_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_MY_SCENE_ROOM_0_HEADER00_OBJECTLIST, my_scene_room_0_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_MY_SCENE_ROOM_0_HEADER00_ACTORLIST, my_scene_room_0_header00_actorList),
    SCENE_CMD_END(),
};

s16 my_scene_room_0_header00_objectList[LENGTH_MY_SCENE_ROOM_0_HEADER00_OBJECTLIST] = {
    OBJECT_SYOKUDAI,
};

ActorEntry my_scene_room_0_header00_actorList[LENGTH_MY_SCENE_ROOM_0_HEADER00_ACTORLIST] = {
    // Collectable Item
    {
        /* Actor ID   */ ACTOR_EN_ITEM00,
        /* Position   */ { -74, 0, -117 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },

    // Torch
    {
        /* Actor ID   */ ACTOR_OBJ_SYOKUDAI,
        /* Position   */ { 122, 0, -87 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ (0x2000 | ((0x01 << 10)))
    },
};

RoomShapeNormal my_scene_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(my_scene_room_0_shapeDListsEntry),
    my_scene_room_0_shapeDListsEntry,
    my_scene_room_0_shapeDListsEntry + ARRAY_COUNT(my_scene_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry my_scene_room_0_shapeDListsEntry[1] = {
    { my_scene_room_0_shapeHeader_entry_0_opaque, NULL }
};

Gfx my_scene_room_0_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(my_scene_room_0_dl_Ground_mesh_layer_Opaque),
	gsSPDisplayList(my_scene_room_0_dl_Ground_001_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

u64 my_scene_room_0_dl_ground_texture_rgba32[] = {
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x62914dff669452ff, 0x5c8d47ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff63924fff, 0x729d5fff669452ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x60904cff679553ff, 0x5c8d47ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x7aa367ff86ad75ff, 0x80a96fff61914cff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff79a367ff, 0x86ad75ff86ad75ff, 0x719d5eff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x719d5eff82aa70ff, 0x63924eff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x689655ff85ac74ff, 0x86ad75ff85ac74ff, 0x6d9a5aff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x7ea76cff85ac74ff, 0x699756ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff659451ff, 0x7ca66aff86ad75ff, 0x85ac74ff61914dff, 
	0x5b8c46ff5b8c46ff, 0x61914dff699755ff, 0x5d8d48ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff63924fff, 0x82aa70ff86ad75ff, 0x86ad75ff78a266ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x86ad75ff86ad75ff, 0x719d5eff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff80a96fff, 0x86ad75ff739f60ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5d8d48ff749f61ff, 0x86ad75ff85ac74ff, 0x60904cff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x85ad74ff85ad74ff, 0x61914dff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff729e60ff, 0x86ad75ff7da66bff, 
	0x5b8c46ff649350ff, 0x6a9756ff5c8d47ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x84ab73ff86ad75ff, 0x649350ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x679654ff659451ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff79a367ff, 0x86ad75ff7ca56aff, 
	0x5b8c46ff82aa70ff, 0x84ac73ff62914dff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x74a062ff7da66bff, 0x5f8f4aff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff85ac74ff, 0x86ad75ff6e9a5bff, 
	0x659451ff86ad75ff, 0x84ac73ff5e8e49ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5c8d47ff5d8d48ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff85ad74ff, 0x84ac73ff5d8e48ff, 
	0x7ba569ff86ad75ff, 0x7ba469ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x6a9856ff85ac74ff, 0x83ab72ff689654ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff86ad75ff, 0x82aa71ff5b8c46ff, 
	0x82aa70ff86ad75ff, 0x6c9958ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5c8d47ff, 0x6e9a5bff75a062ff, 0x6b9857ff5c8d47ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x64934fff84ab73ff, 0x86ad75ff85ac74ff, 0x689655ff5b8c46ff, 0x5b8c46ff85ac74ff, 0x80a96fff5b8c46ff, 
	0x83ab71ff86ad75ff, 0x669552ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5c8d47ff739f60ff, 0x699655ff679553ff, 0x85ad74ff86ad75ff, 0x86ad75ff7ba469ff, 0x5c8d47ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5f8f4bff, 0x80a86eff86ad75ff, 0x7ba569ff5b8c46ff, 0x5b8c46ff75a062ff, 0x6b9857ff5b8c46ff, 
	0x82aa71ff86ad75ff, 0x6d9a5aff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x6c9958ff86ad75ff, 0x7ea76cff5f8f4bff, 0x77a265ff7da66bff, 0x86ad75ff83ab72ff, 0x5f8f4aff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x76a163ff86ad75ff, 0x7ea76cff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x7aa468ff86ad75ff, 0x75a063ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x79a367ff86ad75ff, 0x79a366ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x669452ff669452ff, 0x5b8c46ff5c8d47ff, 
	0x719d5eff709c5dff, 0x5c8d47ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5f8f4aff82aa71ff, 0x86ad75ff86ad75ff, 0x729e5fff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5f8f4aff6e9b5bff, 0x61914cff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x7ba569ff86ad75ff, 0x739f61ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff689655ff, 
	0x86ad75ff86ad75ff, 0x6d9959ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x679553ff86ad75ff, 0x86ad75ff82aa71ff, 0x5d8e48ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x7aa468ff86ad75ff, 0x729e5fff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff80a86eff, 
	0x86ad75ff86ad75ff, 0x719d5eff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5d8e48ff76a164ff, 0x86ad75ff85ac74ff, 0x608f4bff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x6c9958ff80a96fff, 0x669452ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff7fa86eff, 
	0x86ad75ff84ac73ff, 0x62914dff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff709c5cff, 0x86ad75ff80a86fff, 0x5c8d47ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5c8c47ff5e8e49ff, 0x5b8c46ff5b8c46ff, 0x64934fff77a265ff, 0x63924fff5b8c46ff, 0x5b8c46ff62914eff, 
	0x6f9c5cff61914dff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff79a367ff, 0x86ad75ff77a164ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x6c9958ff86ad75ff, 0x85ac74ff6a9756ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff75a063ff, 0x86ad75ff80a86eff, 0x5c8d47ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5d8d48ff7fa76dff, 0x86ad75ff7fa86eff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff63924eff, 0x85ac74ff86ad75ff, 0x739f61ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5c8d47ff, 0x86ad75ff85ac74ff, 0x62924eff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x6f9c5cff86ad75ff, 0x86ad75ff78a366ff, 0x5c8d47ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x82aa71ff86ad75ff, 0x82aa70ff5d8d48ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff729e5fff, 0x86ad75ff86ad75ff, 0x7ca56aff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x6f9c5cff7ea76cff, 0x679553ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x719d5fff86ad75ff, 0x86ad75ff63924fff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x86ad75ff86ad75ff, 0x7ea76cff5c8d47ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x85ac74ff86ad75ff, 0x76a164ff5b8c46ff, 0x729e5fff81a96fff, 0x84ac73ff85ac74ff, 0x86ad75ff86ad75ff, 0x80a86fff5d8e49ff, 
	0x5b8c46ff5b8c46ff, 0x62914dff6b9857ff, 0x5d8e48ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x7ba468ff79a367ff, 0x60904cff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x7ea76cff86ad75ff, 0x85ad74ff82aa70ff, 0x86ad75ff86ad75ff, 0x85ad74ff85ac74ff, 0x81a970ff709c5dff, 0x5d8e48ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x749f61ff86ad75ff, 0x83ab72ff669452ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff6a9857ff, 0x7fa86eff679553ff, 0x5d8d48ff78a265ff, 0x85ac74ff86ad75ff, 0x86ad75ff7ea76dff, 0x649350ff5e8e4aff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x62914eff82aa71ff, 0x86ad75ff86ad75ff, 0x80a86eff659351ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff76a164ff, 0x86ad75ff77a265ff, 0x5b8c46ff5b8c46ff, 0x699755ff7fa86dff, 0x7da66cff62914dff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5e8e49ff, 0x77a164ff84ac73ff, 0x86ad75ff85ac74ff, 0x7ea76cff699755ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff6e9b5bff, 0x85ac74ff729d5fff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff62914eff, 0x79a366ff85ac74ff, 0x86ad75ff86ad75ff, 0x85ac74ff75a063ff, 0x5c8c47ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5d8e48ff, 0x679553ff5e8e49ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff62924eff, 0x75a063ff82aa71ff, 0x85ac74ff77a164ff, 0x5c8c47ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5c8d47ff, 0x60904bff5c8d47ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 0x5b8c46ff5b8c46ff, 
	
};

Vtx my_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-360, 0, 360}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-360, 0, 360}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-360, 0, -360}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-360, 0, -360}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {360, 0, 360}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {360, 0, 360}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {360, 0, -360}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {360, 0, -360}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx my_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_0[16] = {
	{{ {-360, 0, 360}, 0, {-2894, -2892}, {0, 127, 0, 255} }},
	{{ {-360, 0, -360}, 0, {3894, -2902}, {0, 127, 0, 255} }},
	{{ {-360, 0, 360}, 0, {-2902, -2902}, {0, 127, 0, 255} }},
	{{ {-360, 0, -360}, 0, {3884, -2894}, {0, 127, 0, 255} }},
	{{ {-360, 0, 360}, 0, {-2883, -2881}, {0, 127, 0, 255} }},
	{{ {360, 0, 360}, 0, {-2881, 3875}, {0, 127, 0, 255} }},
	{{ {360, 0, 360}, 0, {-2892, 3886}, {0, 127, 0, 255} }},
	{{ {360, 0, 360}, 0, {-2902, 3894}, {0, 127, 0, 255} }},
	{{ {360, 0, -360}, 0, {3886, 3884}, {0, 127, 0, 255} }},
	{{ {360, 0, -360}, 0, {3894, 3894}, {0, 127, 0, 255} }},
	{{ {-360, 0, -360}, 0, {3873, -2883}, {0, 127, 0, 255} }},
	{{ {360, 0, -360}, 0, {3875, 3873}, {0, 127, 0, 255} }},
	{{ {-56, 0, -56}, 0, {1162, -285}, {0, 127, 0, 255} }},
	{{ {-56, 0, 56}, 0, {-285, -170}, {0, 127, 0, 255} }},
	{{ {56, 0, 56}, 0, {-170, 1277}, {0, 127, 0, 255} }},
	{{ {56, 0, -56}, 0, {1277, 1162}, {0, 127, 0, 255} }},
};

Gfx my_scene_room_0_dl_Ground_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(my_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 4, 0, 0),
	gsSP2Triangles(5, 0, 6, 0, 6, 0, 2, 0),
	gsSP2Triangles(6, 2, 7, 0, 8, 6, 7, 0),
	gsSP2Triangles(8, 7, 9, 0, 3, 8, 9, 0),
	gsSP2Triangles(3, 9, 1, 0, 10, 8, 3, 0),
	gsSP2Triangles(10, 11, 8, 0, 12, 11, 10, 0),
	gsSP2Triangles(13, 12, 10, 0, 13, 10, 4, 0),
	gsSP2Triangles(4, 10, 3, 0, 14, 13, 4, 0),
	gsSP2Triangles(14, 4, 5, 0, 15, 14, 5, 0),
	gsSP2Triangles(15, 5, 11, 0, 11, 5, 6, 0),
	gsSP2Triangles(11, 6, 8, 0, 12, 15, 11, 0),
	gsSPEndDisplayList(),
};

Vtx my_scene_room_0_dl_Ground_001_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-56, 0, 56}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-56, 0, 56}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-56, 0, -56}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-56, 0, -56}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {56, 0, 56}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {56, 0, 56}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {56, 0, -56}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {56, 0, -56}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx my_scene_room_0_dl_Ground_001_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-56, 0, 56}, 0, {416, 576}, {0, 127, 0, 255} }},
	{{ {56, 0, 56}, 0, {576, 576}, {0, 127, 0, 255} }},
	{{ {56, 0, -56}, 0, {576, 416}, {0, 127, 0, 255} }},
	{{ {-56, 0, -56}, 0, {416, 416}, {0, 127, 0, 255} }},
};

Gfx my_scene_room_0_dl_Ground_001_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(my_scene_room_0_dl_Ground_001_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_my_scene_room_0_dl_f3dlite_material_layerOpaque[] = {
	gsSPLoadGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH | G_ZBUFFER | G_LIGHTING | G_FOG),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_PM_NPRIMITIVE | G_TC_FILT | G_TD_CLAMP | G_CK_NONE | G_CD_MAGICSQ | G_TP_PERSP | G_AD_NOISE | G_TL_TILE | G_TT_NONE | G_CYC_2CYCLE | G_TF_BILERP),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL | G_AC_NONE | G_RM_FOG_SHADE_A),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 1, my_scene_room_0_dl_ground_texture_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_my_scene_room_0_dl_f3dlite_material_001_layerOpaque[] = {
	gsSPLoadGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH | G_ZBUFFER | G_LIGHTING | G_FOG),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_PM_NPRIMITIVE | G_TC_FILT | G_TD_CLAMP | G_CK_NONE | G_CD_MAGICSQ | G_TP_PERSP | G_AD_NOISE | G_TL_TILE | G_TT_NONE | G_CYC_2CYCLE | G_TF_BILERP),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL | G_AC_NONE | G_RM_FOG_SHADE_A),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 21, 223, 255),
	gsSPEndDisplayList(),
};

Gfx my_scene_room_0_dl_Ground_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(my_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_my_scene_room_0_dl_f3dlite_material_layerOpaque),
	gsSPDisplayList(my_scene_room_0_dl_Ground_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx my_scene_room_0_dl_Ground_001_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(my_scene_room_0_dl_Ground_001_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_my_scene_room_0_dl_f3dlite_material_001_layerOpaque),
	gsSPDisplayList(my_scene_room_0_dl_Ground_001_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

