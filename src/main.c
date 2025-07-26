#include "raylib/raylib.h"

// Litet test för att se så allt fungerar:

int main() {
    const int screenWidth = 800, screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Hello, World!");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Wow, this is a great window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
