#include "my_dungeon_scene.h"

/**
 * Header Child Day (Default)
*/
#define LENGTH_MY_DUNGEON_ROOM_2_HEADER00_OBJECTLIST 1
#define LENGTH_MY_DUNGEON_ROOM_2_HEADER00_ACTORLIST 4
SceneCmd my_dungeon_room_2_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&my_dungeon_room_2_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_MY_DUNGEON_ROOM_2_HEADER00_OBJECTLIST, my_dungeon_room_2_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_MY_DUNGEON_ROOM_2_HEADER00_ACTORLIST, my_dungeon_room_2_header00_actorList),
    SCENE_CMD_END(),
};

s16 my_dungeon_room_2_header00_objectList[LENGTH_MY_DUNGEON_ROOM_2_HEADER00_OBJECTLIST] = {
    OBJECT_BOX,
};

ActorEntry my_dungeon_room_2_header00_actorList[LENGTH_MY_DUNGEON_ROOM_2_HEADER00_ACTORLIST] = {
    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { -428, -120, 552 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), 0x0 },
        /* Parameters */ (0x2000 | ((0x02 & 0x001F) | ((0x3F << 5) & 0x0FE0)))
    },

    // Flame Circle
    {
        /* Actor ID   */ ACTOR_BG_HIDAN_CURTAIN,
        /* Position   */ { -428, -120, 552 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ (0x1000 | ((0x02 & 0x003F) | ((0x02 << 6) & 0x0FC0)))
    },

    // Push Block
    {
        /* Actor ID   */ ACTOR_OBJ_OSHIHIKI,
        /* Position   */ { -416, -128, 816 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0
    },

    // Dungeon Switches
    {
        /* Actor ID   */ ACTOR_OBJ_SWITCH,
        /* Position   */ { -414, -124, 660 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ (((0x02 << 8) & 0x3F00))
    },
};

RoomShapeNormal my_dungeon_room_2_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(my_dungeon_room_2_shapeDListsEntry),
    my_dungeon_room_2_shapeDListsEntry,
    my_dungeon_room_2_shapeDListsEntry + ARRAY_COUNT(my_dungeon_room_2_shapeDListsEntry)
};

RoomShapeDListsEntry my_dungeon_room_2_shapeDListsEntry[1] = {
    { my_dungeon_room_2_shapeHeader_entry_0_opaque, my_dungeon_room_2_shapeHeader_entry_0_transparent }
};

Gfx my_dungeon_room_2_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Gfx my_dungeon_room_2_shapeHeader_entry_0_transparent[] = {
	gsSPDisplayList(my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent),
	gsSPEndDisplayList(),
};

u64 my_dungeon_room_2_dl_men_room_9_00003070_Tex_rgba16_rgba16[] = {
	0x324f114911891147, 0x11493ad32a4f118b, 0x11cb431364193291, 0x2a0d19cb220d224f, 0x2a914b553b153ad3, 0x11cb220d198b220f, 0x220d19cd19cd19cb, 0x220d329332d32a0d, 
	0x19cd118b11491149, 0x2ad53b15220d224f, 0x649f9d5f5b952a4f, 0x118911cb224f3ad1, 0x3ad32a8f32d54355, 0x220f2a4f1a0d2a51, 0x19cb1147220f220d, 0x118b220f198b1989, 
	0x2a4f224f220f220f, 0x224f224f33156c9f, 0x8d657459749f6419, 0x5b95641964195bd9, 0x4b953b133291224f, 0x220f19cd2a4f3ad5, 0x220f220f2a512a4f, 0x118b11491105198b, 
	0x224f32933b1532d3, 0x224f22d57ce1745d, 0x63db42d353db4b55, 0x42d1328f2a4d220d, 0x3ad14b553b133291, 0x220d1149118b2a0d, 0x2a0f2a93220f1189, 0x1149114911891149, 
	0x224f3b156c5d6ca1, 0x5c638d656bd7220d, 0x19cb2a4f4b154315, 0x2a91224f11491189, 0x2a4f224f2a4f3291, 0x2a4f19cd19cd198b, 0x19cb21cf220f1107, 0x10c71149118b220f, 
	0x3b5995a58d658e2d, 0xb66963532a913291, 0x220f220d2a0f3ad3, 0x3ad32a4f1149118b, 0x220f2a9119cb118b, 0x19cb2a4f2a5121cd, 0x198b198b1a0f1107, 0x1109114b118b118b, 
	0x745b5b954b554b55, 0x7c5b539743573ad3, 0x2a0f220f224f2a91, 0x2a8f2a4f220f2a4f, 0x3a91220f19cd1149, 0x11091149118b118b, 0x118b11cb19cb1149, 0x114b220f22512ad5, 
	0x324f22512251224f, 0x1a0d2a4f42d33291, 0x32512a912a9132d1, 0x42d343153ad33ad3, 0x43132a4f198b10c7, 0x1107114911491149, 0x118b11cd11cb1149, 0x220f2a934b575357, 
	0x220f220d225132d3, 0x329119cd2a913ad3, 0x3b15645d6c5d5b97, 0x535743133ad12a93, 0x53555b952a4f118b, 0x1149110710811109, 0x11cd220d21c92a4f, 0x32d33b15220d19cd, 
	0x1a0d118b19cb220f, 0x224f1a0f53d95bd9, 0x4b554b1553955357, 0x2a8f2a913ad33ad3, 0x3b198cdf63d94b55, 0x19cd114911071149, 0x2ad54b992a4d2a4f, 0x32912a0b11491a0f, 
	0x11cb19cd19cd19cd, 0x11cb32d753972a4f, 0x21cb220d2a4f3291, 0x32932a912a513ad3, 0x4bdb535532d55bd7, 0x3a91220d220d224f, 0x641b53974b594b97, 0x2a0d114911471149, 
	0x1149118b21cd11cb, 0x2a913ad31a0d11cd, 0x220f224f220d21cb, 0x224f220f2a913b15, 0x5bdb220d118b2a91, 0x43134b577ce18521, 0x5b9532d36ca16c19, 0x21cb118b11491107, 
	0x10c511491a0f4357, 0x3ad3118b220d220f, 0x224f224f3ad15355, 0x53554b1363d7745d, 0x6c1b2a0f11491149, 0x118b1a0d539742d1, 0x220d3b17741b2a51, 0x2a91224f11cb1189, 
	0x3ad34b576c9f3ad1, 0x118b1149220f3ad5, 0x43153291220d4313, 0x431332913a914313, 0x42d343152a9119cd, 0x225132d142d13ad1, 0x3ad36c5b4b572a4f, 0x220f2a9332d332d3, 
	0x53d94b552a0f11cd, 0x118b225132d33ad3, 0x3ad32a8f32913291, 0x21cb2a0f21cb2a4f, 0x19cd1a0f3ad34315, 0x3ad521cb2a4d4357, 0x641b745d4357324f, 0x21cd220f1a0d32d5, 
	0x2a0f21cd220f19cd, 0x22512a9332d32a4f, 0x2a913ad33ad121cb, 0x21cb220d21cb2a4f, 0x224f22515357539b, 0x43153ad143134359, 0x7c9d53974b572a91, 0x220d19cb1a0d220d, 
	0x2a0f220d2a4f220f, 0x2a4f2a4f2a4f3ad3, 0x431553975b975395, 0x32912a9353db5355, 0x439b6c5f7ce1539b, 0x3b1543153b13749f, 0x851f4b553b553b15, 0x32912a4f220f1a0d, 
	0x3ad1224d220d19cd, 0x220f1a0d3ad35bd9, 0x63db745f9d63849d, 0x6ca195679d655bd9, 0x649f645d7c9d641b, 0x5bd953d96c9d9da5, 0x63d933153ad32a91, 0x224f220d19cb224f, 
	0x2a4f21c919c911cb, 0x22915bdb95216397, 0x53995b53424f4313, 0x5bdb745d4b133291, 0x6c595c1b749d5bd9, 0x641d645d852363d7, 0x2a912ad32a91220f, 0x1a0d19cb11cd3291, 
	0x4355328f4b15749f, 0x7c9b63d74b133ad3, 0x42d1220d118b11cb, 0x1a0d220f2a912a4f, 0x4b1543578d6594df, 0x5c1d5c1b6c9d328f, 0x225132d32a9119cb, 0x118b11cb22514315, 
	0x5b972a0d3a8f428f, 0x21cb220f3a91324f, 0x3a8f118911491149, 0x118b2a0d2a4f3291, 0x32d3435764a36b95, 0x2a912291641b3ad1, 0x3ad1224f3ad32a4f, 0x11cb11cb5bd963d9, 
	0x19cb19cb19cb11cb, 0x220d3ad32a0d118b, 0x220b1189198b1189, 0x1189118b19cd2a8f, 0x32d12a9122511a51, 0x33154c21a5e7951f, 0x7c9d641953953ad3, 0x4b576c1b3a8d19c9, 
	0x118b1a0d19cb19cd, 0x2a913ad1324d220d, 0x1147110711891189, 0x1147114711cb220f, 0x2a912a912a914359, 0x5c6185a9ae2b8da9, 0x9e2d95a59da59de9, 0xae295b952a911989, 
	0x32912a0f198b1189, 0x220d2a4f2a4d21cb, 0x1189114911cb1149, 0x1189220d220d224f, 0x2a933b154b9b7ca1, 0x74e1641b43995c1d, 0x5c1b53973b15541d, 0x8d1f5bd73b13220f, 
	0x2a0d21cd2a0f220f, 0x19cb224f220d19cb, 0x1989118b118b118b, 0x220d2a91224f2291, 0x43574b9984e1641b, 0x4b572a9132d34b57, 0x5bd953d953d96c9f, 0x6c5b6c5d5b9542d1, 
	0x42cf220d1a0d1a0d, 0x220d224f21cb19cd, 0x220d114919cd220d, 0x224f2a4f2a914355, 0x641d8d63641b4315, 0x4355224f224f32d3, 0x43155bd953db6c9f, 0x641b431543576c9d, 
	0x641942cf1a0d2a8f, 0x43135bd92a91224f, 0x21cb220f118b11cb, 0x3ad52ad53b175bdb, 0x7c9f5bd94b99224f, 0x1a0d2a512a91220d, 0x2a8f5bd94b575355, 0x749d4b5532913b15, 
	0x541f85237c9d9d63, 0x7c174313329342d3, 0x2a4f2a4f118b11cb, 0x22515c5f6c1b63d7, 0x43153ad332d33293, 0x1a0d2a512a913b17, 0x541b8d67a5a99d1f, 0x5bd5329143553b57, 
	0x53db53db74e16c19, 0x3a8f19cb220d220f, 0x2251539932914359, 0x6ca163d932912a91, 0x2a8f3a912a4f2a91, 0x2a4f118b22936c9d, 0x63d94b1553595bd9, 0x53955395645d641b, 
	0x3ad13ad532d5220f, 0x2a8f1149220f3293, 0x2a0f32d34b997d23, 0x5b55225122511a0f, 0x4b57641b3ad1224f, 0x2a933b1763d94313, 0x1149224f32913ad3, 0x3ad53a914b535bd7, 
	0x324f3ad3329119cd, 0x19cd1a0d19cd198b, 0x2a513ad5439b63db, 0x2251220f3b155bdb, 0x9567856595638523, 0xc66da5a55b974291, 0x29cd220d2a51220f, 0x2a4f220d32d34315, 
	0x220f118911cb1149, 0x10c7329121cd1149, 0x118b1a11641d4b57, 0x32d319cd220f224f, 0x4b995c5f5bdb5397, 0x5313324f118b19cb, 0x220d220f220d19cb, 0x1a0d220f435753d9, 
	
};

Vtx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-532, -395, 992}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-532, 711, 992}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-532, 711, 320}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-532, -395, 320}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {68, -395, 992}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {68, 711, 992}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {68, 711, 320}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {68, -395, 320}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_0[26] = {
	{{ {-393, -120, 340}, 0, {225, -1347}, {255, 255, 255, 255} }},
	{{ {-333, -120, 340}, 0, {548, -1347}, {255, 255, 255, 255} }},
	{{ {-333, -120, 320}, 0, {548, -1454}, {255, 255, 255, 255} }},
	{{ {-393, -120, 320}, 0, {225, -1454}, {255, 255, 255, 255} }},
	{{ {-264, -120, 888}, 0, {921, 1606}, {255, 255, 255, 255} }},
	{{ {-264, -114, 626}, 0, {921, 193}, {255, 255, 255, 255} }},
	{{ {-466, -122, 406}, 0, {-170, -992}, {255, 255, 255, 255} }},
	{{ {-466, -134, 916}, 0, {-170, 1758}, {255, 255, 255, 255} }},
	{{ {-532, -120, 340}, 0, {-524, -1347}, {86, 81, 81, 255} }},
	{{ {2, -122, 406}, 0, {2354, -992}, {255, 255, 255, 255} }},
	{{ {-264, -114, 626}, 0, {921, 193}, {255, 255, 255, 255} }},
	{{ {-44, -114, 626}, 0, {2106, 193}, {255, 255, 255, 255} }},
	{{ {-264, -114, 649}, 0, {921, 318}, {255, 255, 255, 255} }},
	{{ {-44, -114, 649}, 0, {2106, 318}, {255, 255, 255, 255} }},
	{{ {-393, -120, 340}, 0, {225, -1347}, {86, 81, 81, 255} }},
	{{ {-333, -120, 340}, 0, {548, -1347}, {86, 81, 81, 255} }},
	{{ {68, -120, 340}, 0, {2708, -1347}, {86, 81, 81, 255} }},
	{{ {68, -135, 982}, 0, {2708, 2112}, {86, 81, 81, 255} }},
	{{ {2, -134, 916}, 0, {2354, 1758}, {255, 255, 255, 255} }},
	{{ {-44, -114, 626}, 0, {2106, 193}, {255, 255, 255, 255} }},
	{{ {-44, -120, 888}, 0, {2106, 1606}, {255, 255, 255, 255} }},
	{{ {-532, -135, 982}, 0, {-524, 2112}, {86, 81, 81, 255} }},
	{{ {-44, -120, 888}, 0, {2106, 1606}, {255, 255, 255, 255} }},
	{{ {-264, -120, 888}, 0, {921, 1606}, {255, 255, 255, 255} }},
	{{ {-44, -119, 868}, 0, {2106, 1518}, {255, 255, 255, 255} }},
	{{ {-264, -119, 868}, 0, {921, 1518}, {255, 255, 255, 255} }},
};

Gfx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_0 + 0, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 8, 6, 9, 0),
	gsSP2Triangles(10, 9, 6, 0, 10, 11, 9, 0),
	gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
	gsSP2Triangles(14, 8, 9, 0, 9, 15, 14, 0),
	gsSP2Triangles(9, 16, 15, 0, 9, 17, 16, 0),
	gsSP2Triangles(9, 18, 17, 0, 19, 18, 9, 0),
	gsSP2Triangles(19, 20, 18, 0, 18, 21, 17, 0),
	gsSP2Triangles(18, 7, 21, 0, 22, 7, 18, 0),
	gsSP2Triangles(22, 23, 7, 0, 23, 22, 24, 0),
	gsSP2Triangles(23, 24, 25, 0, 7, 8, 21, 0),
	gsSPEndDisplayList(),
};

Vtx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_1[76] = {
	{{ {-264, -395, 882}, 0, {5112, -1556}, {255, 255, 255, 255} }},
	{{ {-264, -119, 868}, 0, {4491, 2548}, {255, 255, 255, 255} }},
	{{ {-264, -395, 862}, 0, {4491, -1556}, {255, 255, 255, 255} }},
	{{ {-264, -120, 888}, 0, {5112, 2548}, {255, 255, 255, 255} }},
	{{ {-264, -114, 626}, 0, {-3096, 2548}, {255, 255, 255, 255} }},
	{{ {-264, -389, 620}, 0, {-3096, -1556}, {255, 255, 255, 255} }},
	{{ {-264, -390, 643}, 0, {-2365, -1556}, {255, 255, 255, 255} }},
	{{ {-264, -114, 649}, 0, {-2365, 2548}, {255, 255, 255, 255} }},
	{{ {-532, -120, 340}, 0, {-1500, 1913}, {255, 255, 255, 255} }},
	{{ {-393, -120, 340}, 0, {548, 1913}, {255, 255, 255, 255} }},
	{{ {-393, -20, 340}, 0, {548, 1178}, {255, 255, 255, 255} }},
	{{ {-532, 297, 340}, 0, {-1500, -1157}, {34, 34, 34, 255} }},
	{{ {-393, 297, 340}, 0, {548, -1157}, {34, 34, 34, 255} }},
	{{ {-393, 711, 340}, 0, {548, -4204}, {0, 0, 0, 255} }},
	{{ {-532, 711, 340}, 0, {-1500, -4204}, {0, 0, 0, 255} }},
	{{ {-532, 711, 992}, 0, {-1500, -4202}, {0, 0, 0, 255} }},
	{{ {-333, 711, 340}, 0, {1431, -4204}, {0, 0, 0, 255} }},
	{{ {68, 711, 992}, 0, {-5728, -4204}, {0, 0, 0, 255} }},
	{{ {68, 711, 340}, 0, {7329, -4204}, {0, 0, 0, 255} }},
	{{ {-532, -135, 982}, 0, {-1500, 2025}, {255, 255, 255, 255} }},
	{{ {68, 297, 992}, 0, {7329, -1157}, {34, 34, 34, 255} }},
	{{ {68, -135, 982}, 0, {7329, 2025}, {255, 242, 242, 255} }},
	{{ {-532, 297, 992}, 0, {-1500, -1157}, {34, 34, 34, 255} }},
	{{ {68, 711, 992}, 0, {7329, -4202}, {0, 0, 0, 255} }},
	{{ {-333, -120, 340}, 0, {1431, 1913}, {255, 255, 255, 255} }},
	{{ {68, -120, 340}, 0, {7329, 1913}, {255, 255, 255, 255} }},
	{{ {68, 297, 340}, 0, {7329, -1157}, {34, 34, 34, 255} }},
	{{ {-333, -20, 340}, 0, {1431, 1178}, {255, 255, 255, 255} }},
	{{ {-333, 297, 340}, 0, {1431, -1157}, {34, 34, 34, 255} }},
	{{ {-333, 711, 340}, 0, {1431, -4204}, {0, 0, 0, 255} }},
	{{ {68, -135, 982}, 0, {-5578, 2025}, {255, 242, 242, 255} }},
	{{ {68, 297, 340}, 0, {3869, -1157}, {34, 34, 34, 255} }},
	{{ {68, -120, 340}, 0, {3869, 1913}, {255, 255, 255, 255} }},
	{{ {68, 297, 992}, 0, {-5728, -1157}, {34, 34, 34, 255} }},
	{{ {68, 711, 992}, 0, {-5728, -4204}, {0, 0, 0, 255} }},
	{{ {68, 711, 340}, 0, {3869, -4204}, {0, 0, 0, 255} }},
	{{ {-532, -120, 340}, 0, {3869, 1913}, {255, 255, 255, 255} }},
	{{ {-532, 297, 992}, 0, {-5728, -1157}, {34, 34, 34, 255} }},
	{{ {-532, -135, 982}, 0, {-5578, 2025}, {255, 255, 255, 255} }},
	{{ {-532, 297, 340}, 0, {3869, -1157}, {34, 34, 34, 255} }},
	{{ {-532, 711, 340}, 0, {3869, -4204}, {0, 0, 0, 255} }},
	{{ {-532, 711, 992}, 0, {-5728, -4204}, {0, 0, 0, 255} }},
	{{ {-333, -20, 340}, 0, {1431, -300}, {255, 255, 255, 255} }},
	{{ {-393, -20, 340}, 0, {548, -300}, {255, 255, 255, 255} }},
	{{ {-393, -20, 320}, 0, {548, -447}, {255, 255, 255, 255} }},
	{{ {-333, -20, 320}, 0, {1431, -447}, {255, 255, 255, 255} }},
	{{ {-393, -20, 340}, 0, {548, 1178}, {255, 255, 255, 255} }},
	{{ {-333, -20, 340}, 0, {1431, 1178}, {255, 255, 255, 255} }},
	{{ {-333, 297, 340}, 0, {1431, -1157}, {34, 34, 34, 255} }},
	{{ {-393, 297, 340}, 0, {548, -1157}, {34, 34, 34, 255} }},
	{{ {-333, 711, 340}, 0, {1431, -4204}, {0, 0, 0, 255} }},
	{{ {-393, 711, 340}, 0, {548, -4204}, {0, 0, 0, 255} }},
	{{ {-333, -120, 340}, 0, {3869, 1913}, {255, 255, 255, 255} }},
	{{ {-333, -20, 340}, 0, {3869, 1178}, {255, 255, 255, 255} }},
	{{ {-333, -20, 320}, 0, {4163, 1178}, {255, 255, 255, 255} }},
	{{ {-333, -120, 320}, 0, {4163, 1913}, {255, 255, 255, 255} }},
	{{ {-393, -20, 340}, 0, {3869, 1178}, {255, 255, 255, 255} }},
	{{ {-393, -120, 340}, 0, {3869, 1913}, {255, 255, 255, 255} }},
	{{ {-393, -120, 320}, 0, {4163, 1913}, {255, 255, 255, 255} }},
	{{ {-393, -20, 320}, 0, {4163, 1178}, {255, 255, 255, 255} }},
	{{ {-44, -114, 649}, 0, {-3096, 2548}, {255, 255, 255, 255} }},
	{{ {-264, -114, 649}, 0, {5112, 2548}, {255, 255, 255, 255} }},
	{{ {-264, -390, 643}, 0, {5112, -1556}, {255, 255, 255, 255} }},
	{{ {-44, -390, 643}, 0, {-3096, -1556}, {255, 255, 255, 255} }},
	{{ {-44, -389, 620}, 0, {5112, -1556}, {255, 255, 255, 255} }},
	{{ {-44, -114, 649}, 0, {4381, 2548}, {255, 255, 255, 255} }},
	{{ {-44, -390, 643}, 0, {4381, -1556}, {255, 255, 255, 255} }},
	{{ {-44, -114, 626}, 0, {5112, 2548}, {255, 255, 255, 255} }},
	{{ {-44, -120, 888}, 0, {-3096, 2548}, {255, 255, 255, 255} }},
	{{ {-44, -395, 882}, 0, {-3096, -1556}, {255, 255, 255, 255} }},
	{{ {-44, -395, 862}, 0, {-2475, -1556}, {255, 255, 255, 255} }},
	{{ {-44, -119, 868}, 0, {-2475, 2548}, {255, 255, 255, 255} }},
	{{ {-264, -119, 868}, 0, {-3096, 2548}, {255, 255, 255, 255} }},
	{{ {-44, -119, 868}, 0, {5112, 2548}, {255, 255, 255, 255} }},
	{{ {-44, -395, 862}, 0, {5112, -1556}, {255, 255, 255, 255} }},
	{{ {-264, -395, 862}, 0, {-3096, -1556}, {255, 255, 255, 255} }},
};

Gfx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_1 + 0, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 0, 5, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
	gsSP2Triangles(10, 12, 11, 0, 11, 12, 13, 0),
	gsSP2Triangles(11, 13, 14, 0, 15, 14, 13, 0),
	gsSP2Triangles(15, 13, 16, 0, 16, 17, 15, 0),
	gsSP2Triangles(16, 18, 17, 0, 19, 20, 21, 0),
	gsSP2Triangles(19, 22, 20, 0, 20, 22, 15, 0),
	gsSP2Triangles(20, 15, 23, 0, 24, 25, 26, 0),
	gsSP2Triangles(26, 27, 24, 0, 26, 28, 27, 0),
	gsSP2Triangles(28, 26, 18, 0, 28, 18, 29, 0),
	gsSPVertex(my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_1 + 30, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(1, 3, 4, 0, 1, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(7, 9, 10, 0, 7, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
	gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
	gsSPVertex(my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_1 + 60, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 7, 4, 0, 8, 4, 9, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_2[8] = {
	{{ {-264, -389, 620}, 0, {3241, 3135}, {255, 255, 255, 255} }},
	{{ {-44, -390, 643}, 0, {-173, 2772}, {255, 255, 255, 255} }},
	{{ {-264, -390, 643}, 0, {3241, 2772}, {255, 255, 255, 255} }},
	{{ {-44, -389, 620}, 0, {-173, 3135}, {255, 255, 255, 255} }},
	{{ {-264, -395, 882}, 0, {3241, -933}, {255, 255, 255, 255} }},
	{{ {-44, -395, 882}, 0, {-173, -933}, {255, 255, 255, 255} }},
	{{ {-264, -395, 862}, 0, {3241, -625}, {255, 255, 255, 255} }},
	{{ {-44, -395, 862}, 0, {-173, -625}, {255, 255, 255, 255} }},
};

Gfx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_tri_2[] = {
	gsSPVertex(my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_2 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_cull[8] = {
	{{ {-310, -135, 914}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-310, -135, 914}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-310, -135, 601}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-310, -135, 601}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2, -135, 914}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2, -135, 914}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2, -135, 601}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2, -135, 601}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_0[4] = {
	{{ {-310, -135, 914}, 0, {-1052, 2003}, {0, 127, 0, 255} }},
	{{ {2, -135, 914}, 0, {1499, 2003}, {0, 127, 0, 255} }},
	{{ {2, -135, 601}, 0, {1499, -548}, {0, 127, 0, 255} }},
	{{ {-310, -135, 601}, 0, {-1052, -548}, {0, 127, 0, 255} }},
};

Gfx my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent_tri_0[] = {
	gsSPVertex(my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_my_dungeon_room_2_dl_floor_2_layerOpaque[] = {
	gsSPLoadGeometryMode(G_FOG | G_SHADING_SMOOTH | G_SHADE | G_ZBUFFER | G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_PM_NPRIMITIVE | G_AD_NOISE | G_TL_TILE | G_CD_MAGICSQ | G_TC_FILT | G_TF_BILERP | G_CYC_2CYCLE | G_TT_RGBA16 | G_CK_NONE | G_TD_CLAMP | G_TP_PERSP),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_AC_NONE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, my_dungeon_room_0_dl_men_room_2_00004C48_CITex_ci8_tlut_men_scene_0000F6C0_TLUT_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 50),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, my_dungeon_room_0_dl_men_room_2_00004C48_CITex_ci8_tlut_men_scene_0000F6C0_TLUT_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_my_dungeon_room_2_dl_oot_water_mat_layerTransparent[] = {
	gsSPLoadGeometryMode(G_LIGHTING | G_SHADING_SMOOTH | G_SHADE | G_ZBUFFER | G_FOG),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_PM_NPRIMITIVE | G_AD_NOISE | G_TL_TILE | G_CD_MAGICSQ | G_TT_NONE | G_TC_FILT | G_TF_BILERP | G_CYC_2CYCLE | G_CK_NONE | G_TD_CLAMP | G_TP_PERSP),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_XLU_SURF2 | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_AC_NONE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 149),
	gsDPSetEnvColor(255, 255, 255, 128),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, my_dungeon_room_2_dl_men_room_9_00003070_Tex_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 2, G_TX_WRAP | G_TX_NOMIRROR, 5, 1),
	gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPDisplayList(0x08000000),
	gsSPEndDisplayList(),
};

Gfx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_my_dungeon_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_my_dungeon_room_1_dl_wall_2_layerOpaque),
	gsSPDisplayList(my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_tri_1),
	gsSPDisplayList(mat_my_dungeon_room_2_dl_floor_2_layerOpaque),
	gsSPDisplayList(my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_tri_2),
	gsSPEndDisplayList(),
};

Gfx my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_my_dungeon_room_2_dl_oot_water_mat_layerTransparent),
	gsSPDisplayList(my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent_tri_0),
	gsSPEndDisplayList(),
};

