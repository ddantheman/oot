/*
 File: z_npc_test.c
 Overlay: ovl_Npc_Test
 Description: A test for making npcs
*/

#include "z_npc_test.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "effect.h"
#include "sfx.h"
#include "z_lib.h"
#include "libc64/qrand.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_FRIENDLY | ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void NpcTest_Init(Actor* thisx, PlayState* play);
void NpcTest_Destroy(Actor* thisx, PlayState* play);
void NpcTest_Update(Actor* thisx, PlayState* play);
void NpcTest_Draw(Actor* thisx, PlayState* play);

u16 NpcTest_GetNextTextId(PlayState* play, Actor* thisx);
s16 NpcTest_UpdateTalkState(PlayState* play, Actor* thisx);

ActorProfile Npc_Test_Profile = {
    ACTOR_NPC_TEST,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(NpcTest),
    (ActorFunc)NpcTest_Init,
    (ActorFunc)NpcTest_Destroy,
    (ActorFunc)NpcTest_Update,
    (ActorFunc)NpcTest_Draw,
};

typedef enum {
    NPCTEST_MESSAGE_1 = 0x71B3,
    NPCTEST_MESSAGE_2 = 0x71B4,
    NPCTEST_MESSAGE_3 = 0x71B5,
    NPCTEST_MESSAGE_4 = 0x71B6,
    NPCTEST_MESSAGE_5 = 0x71B7,
} NpcTestMessageId;

void NpcTest_Init(Actor* thisx, PlayState* play){
    NpcTest* this = (NpcTest*)thisx;
}

void NpcTest_Destroy(Actor* thisx, PlayState* play){
    NpcTest* this = (NpcTest*)thisx;
}

void NpcTest_Update(Actor* thisx, PlayState* play){
    NpcTest* this = (NpcTest*)thisx;

    Npc_UpdateTalking(
        play,
        &this->actor,
        &this->interactInfo.talkState,
        50.0f,
        NpcTest_GetNextTextId,
        NpcTest_UpdateTalkState
    );
}

void NpcTest_Draw(Actor* thisx, PlayState* play){
    NpcTest* this = (NpcTest*)thisx;

    Gfx_DrawDListOpa(play, gBombchuDL);
}

u16 NpcTest_GetNextTextId(PlayState* play, Actor* thisx) {
    return NPCTEST_MESSAGE_1;
}

s16 NpcTest_UpdateTalkState(PlayState* play, Actor* thisx) {
    return NPC_TALK_STATE_IDLE;
}