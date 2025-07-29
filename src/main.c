#include "raylib/raylib.h"
#include "update.h"
#include "render.h"
#include "ball.h"

int main() {

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello, World!");

    SetTargetFPS(60);

    GameState gameState = {0};

    gameState.player1.position.x = SCREEN_WIDTH * PLAYER_OFFSET;
    gameState.player2.position.x = SCREEN_WIDTH * (1 - PLAYER_OFFSET) - PLAYER_WIDTH;

    gameState.player1.position.y = (SCREEN_HEIGHT + PLAYER_HEIGHT) / 2.0f;
    gameState.player2.position.y = gameState.player1.position.y;

    BallReset(&gameState);

    while (!WindowShouldClose()) {
        Update(&gameState);
        
        Render(&gameState);
    }

    CloseWindow();

    return 0;
}
