#include "update.h"
#include "raylib/raylib.h"

#define PLAYER_SPEED 5

void Update(GameState *gameState){

    Player *player1 = &gameState->player1;
    Player *player2 = &gameState->player2;

    //Player1 movement
    player1->velocity = 0;
    if(IsKeyDown(KEY_W)){player1->velocity -= PLAYER_SPEED;}
    if(IsKeyDown(KEY_S)){player1->velocity += PLAYER_SPEED;}
    player1->position.y += player1->velocity;

    //Player2 movement
    player2->velocity = 0;
    if(IsKeyDown(KEY_UP)){player2->velocity -= PLAYER_SPEED;}
    if(IsKeyDown(KEY_DOWN)){player2->velocity += PLAYER_SPEED;}
    player2->position.y += player2->velocity;
}
