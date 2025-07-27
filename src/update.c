#include "update.h"
#include "raylib/raylib.h"

void Update(GameState *gameState){

    Player *player1 = &gameState->player1;
    Player *player2 = &gameState->player2;

    //Player1 movement
    player1->velocity = 0;
    if(IsKeyPressed(KEY_A)){player1->velocity += 5;}
    if(IsKeyPressed(KEY_S)){player1->velocity += -5;}
    player1->position.Y += player1->velocity;

    //Player2 movement
    player2->velocity = 0;
    if(IsKeyPressed(KEY_UP)){player2->velocity += 5;}
    if(IsKeyPressed(KEY_DOWN)){player2->velocity += -5;}
    player2->position.Y += player2->velocity;
}