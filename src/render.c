#include "render.h"

#include "raylib/raylib.h"
#include "types.h"

void Render(GameState *gameState) {
    BeginDrawing();

    ClearBackground(BLACK);

    DrawRectangle(gameState->player1.position.x, gameState->player1.position.y, PLAYER_WIDTH, PLAYER_HEIGHT, RAYWHITE);
    DrawRectangle(gameState->player2.position.x, gameState->player2.position.y, PLAYER_WIDTH, PLAYER_HEIGHT, RAYWHITE);

    DrawRectangle(gameState->ball.position.x, gameState->ball.position.y, BALL_SIZE, BALL_SIZE, RAYWHITE);

    EndDrawing();
}
