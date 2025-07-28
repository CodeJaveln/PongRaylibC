#include "raylib/raylib.h"
#include "update.h"
#include "render.h"

int main() {
    const int screenWidth = 800, screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Hello, World!");

    SetTargetFPS(60);

    GameState gameState = {0};

    gameState.player1.position.x = screenWidth * PLAYER_OFFSET;
    gameState.player2.position.x = screenWidth * (1 - PLAYER_OFFSET);

    gameState.player1.position.y = (screenHeight + PLAYER_HEIGHT) / 2.0f;
    gameState.player2.position.y = gameState.player1.position.y;

    gameState.ball.position.y = (screenHeight + BALL_SIZE) / 2.0f;
    gameState.ball.position.x = (screenWidth + BALL_SIZE) / 2.0f;
    gameState.ball.velocity = (Vector2){
        .x = -BALL_SPEED,
        .y = BALL_SPEED
    };

    while (!WindowShouldClose()) {
        Update(&gameState);
        
        Render(&gameState);
    }

    CloseWindow();

    return 0;
}
