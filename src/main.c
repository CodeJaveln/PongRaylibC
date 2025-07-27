#include "raylib/raylib.h"
#include "update.h"
#include "render.h"

int main() {
    const int screenWidth = 1920, screenHeight = 1080;
    const int playerOffset = 69;

    InitWindow(screenWidth, screenHeight, "Hello, World!");

    SetTargetFPS(60);

    GameState gameState = {0};

    gameState.player1.position.x = playerOffset;
    gameState.player2.position.x = screenWidth - playerOffset;

    gameState.player1.position.y = screenHeight/2 + PLAYER_HEIGHT/2;
    gameState.player2.position.y = gameState.player1.position.y;

    while (!WindowShouldClose()) {
        Update(&gameState);
        
        Render(&gameState);
    }

    CloseWindow();

    return 0;
}
