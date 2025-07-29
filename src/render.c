#include "render.h"

#include "raylib/raylib.h"
#include "types.h"
#include <stdio.h>

void Render(GameState *gameState) {
    BeginDrawing();

    ClearBackground(BLACK);

    DrawRectangle(gameState->player1.position.x, gameState->player1.position.y, PLAYER_WIDTH, PLAYER_HEIGHT, RAYWHITE);
    DrawRectangle(gameState->player2.position.x, gameState->player2.position.y, PLAYER_WIDTH, PLAYER_HEIGHT, RAYWHITE);

    DrawRectangle(gameState->ball.position.x, gameState->ball.position.y, BALL_SIZE, BALL_SIZE, RAYWHITE);

    char buf[16];
    sprintf(buf, "%d", gameState->player1.score);
    DrawText(buf, 100, 100, 24, RED);
   
    sprintf(buf, "%d", gameState->player2.score);
    DrawText(buf, 700, 100, 24, BLUE);

    EndDrawing();
}
