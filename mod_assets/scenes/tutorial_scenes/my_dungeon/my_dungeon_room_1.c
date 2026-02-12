#include "my_dungeon_scene.h"

/**
 * Header Child Day (Default)
*/
#define LENGTH_MY_DUNGEON_ROOM_1_HEADER00_OBJECTLIST 4
#define LENGTH_MY_DUNGEON_ROOM_1_HEADER00_ACTORLIST 5
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

    // Lizalfos
    {
        /* Actor ID   */ ACTOR_EN_ZF,
        /* Position   */ { 380, -129, 707 },
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

u64 my_dungeon_room_1_dl_ari_rgba16[] = {
	0xfffff7bdf7bdbdef, 0x8c63a529def5ce2d, 0xbde9a52784216319, 0x5ad76b5b739d7bdf, 0x94a59ce794a58c63, 0x8c638c638c639ce7, 0xad6be739f7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0xce73e739ef7ba529, 0x8421ad6bdef3cdeb, 0xb5679d258c636319, 0x52955ad76b5b7bdf, 0x94a59ce794a38421, 0x739f7bdf8c639ce7, 0xb5adef7bf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0xa4e9a529c62f94a5, 0x8421b5add6f1c5eb, 0xb5279ca58c638421, 0x739d6b5b6b5b8421, 0x9ce5ad65a4e37bdf, 0x7bdf842194a59ce7, 0xbe31efbdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x9ceb9ce7a5278c63, 0x8421be2fd6b1c5eb, 0xbd67a4a384217bdf, 0x7bdf7bdf842194a5, 0xa525bd67a4e57bdf, 0x7bdf7bdf8c63a529, 0xceb5f7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x9ce994a59ce58c63, 0x8c63ce71d6afcdeb, 0xc5a9b52594637bdf, 0x7bdf84218c639ce5, 0xb525c567a4e57bdf, 0x7bdf8c219ce7adad, 0xdf7bf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x9ca994a594a58421, 0x8c63ce71ceafcdeb, 0xc5a9bd67b4e5a4a3, 0x9ca39ca3a4e5b525, 0xbd67c5a9ad277bdf, 0x6b5b6b9f8463b5ef, 0xe7bbf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x9ca9946594a57bdf, 0x94a5ce73ce71c5eb, 0xc5a9c567bd67b525, 0xb525b525b525bd67, 0xc5a9c5a9b5678c63, 0x739f639f6be19d6d, 0xd739f7bdf7bdf7bd, 0xf7bdf7bdefbdf7bd, 
	0x94a98c658c637bdf, 0x9ce5ce73ce71c5eb, 0xc5a9c567bd67bd27, 0xb525bd25bd67c5a9, 0xcda9c5a9b5a994a5, 0x842184237c658d2d, 0xcef7f7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x94a78c6584217bdf, 0x9ce7ce73c66fbdeb, 0xc567bd67bd67bd27, 0xbd67bd67c569cda9, 0xcdabcdabbda99d25, 0x8c638c639d69beb5, 0xe739f7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x8c678c637bdf8421, 0xada9ce73c631bded, 0xbd69bd27b525b525, 0xbd67c5a9c5a9cdab, 0xcdabcdabc5ebad69, 0x94a58c63a56bd737, 0xefbdf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x8c6784217bdf9d27, 0xada9c631bdefb5ad, 0xb56bb527b4e5b4e5, 0xb525bd67cda9cdab, 0xcdabcdabce2bb5a9, 0xa5279ce7ad6bdef7, 0xf7bdf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x8c6584217bdfad67, 0xad69c631bdefad6b, 0xa529a4e7aca5a4a1, 0xaca3bd67cdabcdeb, 0xcdebcdabce2dbda9, 0xb569b5adbdefe739, 0xf7bdf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x8c65842184219ce7, 0x9ce7c631b5ada529, 0x9ce794a5a465a461, 0xace3cda9cde9d5eb, 0xd5ebcdabce2dc5e9, 0xbd69bdafc671e77b, 0xf7bdf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x8c658421842194a3, 0x9ce7bdefad6b9ce7, 0x94a58c6394639ca1, 0xb4e5cdebd5ebd62b, 0xcdebcdabce2dbda9, 0xbd2bbdadc671e77b, 0xf7bdf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x8c6384217bdf8c61, 0xa527bdefad6b9ce7, 0x8c638421842194a1, 0xb525c5a9cdabcdeb, 0xc5a9c5a9ce2fbdad, 0xad29b5adc671efbb, 0xf7bdf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x8c61841f7bdf7c1f, 0x94a5b5adad6b9ce7, 0x8c638421842194a3, 0x9ca3a4a3ace5bd67, 0xbd67bd27ce2fce71, 0xa529b5adc673efbb, 0xf7bdf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x8c637bdf739d841d, 0x8c61b5adad6b94a5, 0x94a594a59ce79ce5, 0x94a5946394219ca5, 0xa4a5aca7bdadce73, 0xa529ad6bc673e7bd, 0xf7bdf7bdf7bdf7bd, 0xf7bdf7bdf7bdf7bd, 
	0x8c63739d73dd841d, 0x7bdfb5adb5ada529, 0xa529a529a567a565, 0xa5259ce794638c23, 0x8c638c63a4e7ad6b, 0x9ce7a529be73d73b, 0xf7bdf7bdf7bdf7bd, 0xeffdf7bdf7bdf7bd, 
	0x8c636b5b7c1d7bdb, 0x6b5bad6bb5adad6b, 0xad6ba529a527ad67, 0xad65a5659ce58c63, 0x84218c6394a58c63, 0x94a59d29b635bef9, 0xefbdf7bdf7bdf7bd, 0xeffdf7bdf7bdf7bd, 
	0x8421739b8c1d6b99, 0x5b199ce7b5adb5ad, 0xad6ba52994a39463, 0x9d23a5259ce58c23, 0x842194a594a58c63, 0x8c639d29a5f1ae75, 0xefbdf7bdf7bdf7bd, 0xeffdf7bdf7bdf7bd, 
	0x8c1f8bdd8bdb6b59, 0x52958c63b5adb5ad, 0xad6bad6ba4e79c23, 0x8bdf94618ca38421, 0x8c639d27a5299ce7, 0x94a59d6b956d9df3, 0xe77df7bdf7bdf7bd, 0xeffdf7fdf7bdf7bd, 
	0x945f8bdb8bdb62d7, 0x52957bdfad6bad6b, 0xb5adadabad65aca5, 0x9c238b9f83e18463, 0x8c6394a394a59ce7, 0x9ce7a56b8ce995b1, 0xdf7df7bdf7bdf7bd, 0xeffdeffdf7bdf7bd, 
	0x945f8c1b7b5b5295, 0x4a535ad79ce7ad6b, 0xad6bad6bad69ace7, 0xa46594238b9f839f, 0x839f8be194a5a529, 0xa56b94e97c678d6f, 0xd73df7bdf7bdf7bd, 0xeffde7fdefbdf7bd, 
	0x8c5f8bdb6ad54a53, 0x4a534a538421ad6b, 0xa529a529a529ad29, 0xace5a4639c239423, 0x93e19c65a529ad6b, 0xad6b84a76c257d2d, 0xcf3bf7bdf7bdf7bd, 0xe7ffe7ffefbdf7bd, 
	0x941f7b595a954a53, 0x4a5342115ad79ce7, 0xa5299ce79ce7a529, 0xad27ace5a4659c65, 0x9c659ca7a529ad6b, 0x9d296c236c2374e9, 0xbef9f7bdf7bdf7bd, 0xe7bfdfbfe7fdf7bd, 
	0x9c5f735952d74a53, 0x4a534a5342117bdf, 0x9ce794a594a59ce7, 0x9ce79ce79ca7a4a7, 0x9ca79ce7a529ad6b, 0x74235b5f6be37ca7, 0xae35f7bdf7bdf7bd, 0xe7bfdfbfe7bdf7bd, 
	0x9c61735b5ad75295, 0x4a53421142115295, 0x842194a58c6394a5, 0x94a594a594a594a5, 0x94a594a5a5298ca7, 0x535d5b5f63a16c65, 0x95afe77df7bdf7bd, 0xdffddfbde7bdf7fd, 
	0x941f7bdf6b5b5ad7, 0x4a5342114a534a53, 0x6b5b8c638c638c63, 0x8c63842184218421, 0x84218c6394e75b5f, 0x4adb531d5b5f63e3, 0x852bdf3bffbdf7fd, 0xe7fdd7fdcfbdcf7f, 
	0x8c217bdf7bdf739d, 0x52954a534a534211, 0x5ad78c638c638421, 0x84217bdf7bdf7bdf, 0x842184635b5d4299, 0x42d94b1d5b5f63a1, 0x7467c6f7dfbfc73d, 0xaefb9e7b9df7adf5, 
	0x94a384217bdf7bdf, 0x631952954a534211, 0x4a53842194a594a5, 0x8c637bdf84218421, 0x8421635b42994299, 0x42db4b1b535d5ba1, 0x6c238db195f595b1, 0x956f956f952fa5af, 
	0x94a584217bdf739d, 0x6b5b631952954a53, 0x4a53739d9ce79ce7, 0x8c638421842194a5, 0x7bdd4a9542974299, 0x42d94adb4b1d5b5f, 0x63e37ca97ca984e9, 0x8ceb8ceb8ceb9d6d, 
	0x9ce78c6384217bdf, 0x84217bdf739d5ad7, 0x5295631994a59ce7, 0x94a58c6394a59ce7, 0x6b5b52d94b1b531b, 0x4b1b531d5b5f63a1, 0x6be37c6784a98d2d, 0x8ce98ceb8ceb9d6f, 
	
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
	{{ {230, -122, 406}, 0, {-170, -992}, {255, 255, 255, 255} }},
	{{ {164, -120, 340}, 0, {-524, -1347}, {86, 81, 81, 255} }},
	{{ {303, -120, 340}, 0, {225, -1347}, {86, 81, 81, 255} }},
	{{ {303, -122, 406}, 0, {225, -992}, {255, 255, 255, 255} }},
	{{ {363, -120, 340}, 0, {548, -1347}, {86, 81, 81, 255} }},
	{{ {363, -122, 406}, 0, {548, -992}, {255, 255, 255, 255} }},
	{{ {764, -120, 340}, 0, {2708, -1347}, {86, 81, 81, 255} }},
	{{ {698, -122, 406}, 0, {2354, -992}, {255, 255, 255, 255} }},
	{{ {764, -135, 982}, 0, {2708, 2112}, {86, 81, 81, 255} }},
	{{ {698, -134, 916}, 0, {2354, 1758}, {255, 255, 255, 255} }},
	{{ {164, -135, 982}, 0, {-524, 2112}, {86, 81, 81, 255} }},
};

Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
	gsSP2Triangles(5, 8, 7, 0, 8, 9, 7, 0),
	gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
	gsSP2Triangles(10, 12, 11, 0, 12, 13, 11, 0),
	gsSP2Triangles(12, 14, 13, 0, 14, 15, 13, 0),
	gsSP2Triangles(14, 4, 15, 0, 4, 6, 15, 0),
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

Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_2[6] = {
	{{ {230, -122, 406}, 0, {2929, 2939}, {255, 255, 255, 255} }},
	{{ {230, -134, 916}, 0, {2726, -2118}, {255, 255, 255, 255} }},
	{{ {698, -134, 916}, 0, {-1915, -1931}, {255, 255, 255, 255} }},
	{{ {303, -122, 406}, 0, {2202, 2968}, {255, 255, 255, 255} }},
	{{ {363, -122, 406}, 0, {1608, 2992}, {255, 255, 255, 255} }},
	{{ {698, -122, 406}, 0, {-1711, 3125}, {255, 255, 255, 255} }},
};

Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_2[] = {
	gsSPVertex(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_2 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSPEndDisplayList(),
};

Gfx mat_my_dungeon_room_1_dl_f3dlite_material_layerOpaque[] = {
	gsSPLoadGeometryMode(G_CULL_BACK | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_ZBUFFER),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_CD_MAGICSQ | G_CK_NONE | G_TP_PERSP | G_TC_FILT | G_TD_CLAMP | G_PM_NPRIMITIVE | G_TL_TILE | G_TF_BILERP | G_CYC_2CYCLE | G_TT_NONE | G_AD_NOISE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF2 | G_AC_NONE | G_RM_FOG_SHADE_A | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, my_dungeon_room_1_dl_ari_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
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
	gsSPDisplayList(mat_my_dungeon_room_1_dl_f3dlite_material_layerOpaque),
	gsSPDisplayList(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_2),
	gsSPEndDisplayList(),
};

