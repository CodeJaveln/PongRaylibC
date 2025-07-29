#include "ball.h"
#include "types.h"
#include <stdlib.h>

void BallReset(GameState *gameState){
    gameState->ball.position.y = (SCREEN_HEIGHT + BALL_SIZE) / 2.0f;
    gameState->ball.position.x = (SCREEN_WIDTH + BALL_SIZE) / 2.0f;
    gameState->ball.velocity = (Vector2){
        .x = (rand() % 2) ? -BALL_SPEED : BALL_SPEED,
        .y = (rand() % 2) ? -BALL_SPEED : BALL_SPEED
    };
}
