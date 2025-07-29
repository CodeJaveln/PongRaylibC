#include "ball.h"
#include "types.h"

void BallReset(GameState *gameState){
    gameState->ball.position.y = (SCREEN_HEIGHT + BALL_SIZE) / 2.0f;
    gameState->ball.position.x = (SCREEN_WIDTH + BALL_SIZE) / 2.0f;
    gameState->ball.velocity = (Vector2){
        .x = -BALL_SPEED,
        .y = BALL_SPEED
    };
}
