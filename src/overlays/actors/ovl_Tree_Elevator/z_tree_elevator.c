/*
 File: z_tree_elevator.c
 Overlay: ovl_Tree_Elevator
 Description: Switch-controlled elevator that looks like a tree
*/

#include "z_tree_elevator.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void TreeElevator_Init(Actor* thisx, PlayState* play);
void TreeElevator_Destroy(Actor* thisx, PlayState* play);
void TreeElevator_Update(Actor* thisx, PlayState* play);
void TreeElevator_Draw(Actor* thisx, PlayState* play);

ActorProfile Tree_Elevator_Profile = {
    ACTOR_TREE_ELEVATOR,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(TreeElevator),
    (ActorFunc)TreeElevator_Init,
    (ActorFunc)TreeElevator_Destroy,
    (ActorFunc)TreeElevator_Update,
    (ActorFunc)TreeElevator_Draw,
};

void TreeElevator_Init(Actor* thisx, PlayState* play){

}
void TreeElevator_Destroy(Actor* thisx, PlayState* play){

}
void TreeElevator_Update(Actor* thisx, PlayState* play){

}
void TreeElevator_Draw(Actor* thisx, PlayState* play){
    Gfx_DrawDListOpa(play, gBombchuDL);
}