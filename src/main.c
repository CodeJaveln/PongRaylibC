#include "raylib/raylib.h"
#include "update.h"
#include "render.h"

int main() {
    const int screenWidth = 1920, screenHeight = 1080;

    InitWindow(screenWidth, screenHeight, "Hello, World!");

    SetTargetFPS(60);

    GameState gameState = {0};

    while (!WindowShouldClose()) {
        Update(&gameState);
        
        Render(&gameState);
    }

    CloseWindow();

    return 0;
}
