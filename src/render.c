#include "render.h"

#include "raylib/raylib.h"

void Render(GameState *gameState) {
    BeginDrawing();

    ClearBackground(BLACK);

    DrawRectangle(gameState->player1.position.x, gameState->player1.position.y, 10, 30, RAYWHITE);
    DrawRectangle(gameState->player2.position.x, gameState->player2.position.y, 10, 30, RAYWHITE);

    EndDrawing();
}
