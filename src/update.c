#include "update.h"
#include "raylib/raylib.h"
#include "raylib/raymath.h"


#define PLAYER_SPEED 200

void Bounce(GameState *gamestate, bool xAxis){
    if(xAxis){
        gamestate->ball.velocity.x *= -1;
    }
    else  {
        gamestate->ball.velocity.y *= -1;
    }
}

void Update(GameState *gameState){


    float dt = GetFrameTime();
    Player *player1 = &gameState->player1;
    Player *player2 = &gameState->player2;
    Ball *ball = &gameState->ball;

    //Player1 movement
    player1->velocity = 0;
    if(IsKeyDown(KEY_W)){player1->velocity -= PLAYER_SPEED * dt;}
    if(IsKeyDown(KEY_S)){player1->velocity += PLAYER_SPEED * dt;}
    player1->position.y += player1->velocity;

    player1->position.y = Clamp(player1->position.y, 0, GetScreenHeight() - PLAYER_HEIGHT);

    //Player2 movement
    player2->velocity = 0;
    if(IsKeyDown(KEY_UP)){player2->velocity -= PLAYER_SPEED * dt;}
    if(IsKeyDown(KEY_DOWN)){player2->velocity += PLAYER_SPEED * dt;}
    player2->position.y += player2->velocity;

    player2->position.y = Clamp(player2->position.y, 0, GetScreenHeight() - PLAYER_HEIGHT);

    //Ball movement
    ball->position.x += ball->velocity.x * dt;
    ball->position.y += ball->velocity.y * dt;

    if(ball->position.y <= 0 || ball->position.y >= GetScreenHeight() - BALL_SIZE){
        Bounce(gameState, false);
    }

    if(ball->position.x <= 0 || ball->position.x >= GetScreenWidth() - BALL_SIZE){
        Bounce(gameState, true);
    }
}

