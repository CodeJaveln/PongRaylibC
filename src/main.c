#include "raylib/raylib.h"
#include "update.h"
#include "render.h"

int main() {
    const int screenWidth = 800, screenHeight = 600;
    const float playerOffset = 0.036f;

    InitWindow(screenWidth, screenHeight, "Hello, World!");

    SetTargetFPS(60);

    GameState gameState = {0};

    gameState.player1.position.x = screenWidth * playerOffset;
    gameState.player2.position.x = screenWidth - screenWidth * playerOffset;

    gameState.player1.position.y = (screenHeight + PLAYER_HEIGHT) / 2.0f;
    gameState.player2.position.y = gameState.player1.position.y;

    while (!WindowShouldClose()) {
        Update(&gameState);
        
        Render(&gameState);
    }

    CloseWindow();

    return 0;
}
