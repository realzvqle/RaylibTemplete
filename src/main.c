#include <raylib.h>

int main() {
    InitWindow(1200, 800, "Example");

    while (!WindowShouldClose()) {
        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
