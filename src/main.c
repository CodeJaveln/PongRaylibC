#include "raylib/raylib.h"
#include "update.h"

int main() {
    const int screenWidth = 800, screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Hello, World!");

    SetTargetFPS(60);

    GameState gameState;

    while (!WindowShouldClose()) {
        Update(&gameState);
        
        //Render(&gameState);
    }

    CloseWindow();

    return 0;
}
