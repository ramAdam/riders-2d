#include "raylib-cpp.hpp"
#include "Entity/Player.hpp"
#include "Map/Panel.hpp"

int main()
{
    int screenWidth = 1920;
    int screenHeight = 1080;

    raylib::Window window(screenWidth, screenHeight, "raylib-cpp - basic window");
    Panel panel("resources");
    // panel.loadSprites();

    // raylib::Texture logo("resources/raylib_logo.png");

    SetTargetFPS(60);

    while (!window.ShouldClose())
    {
        BeginDrawing();

        window.ClearBackground(RAYWHITE);
        // DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        panel.draw();

        // Object methods.
        // logo.Draw(
        //     screenWidth / 2 - logo.GetWidth() / 2,
        //     screenHeight / 2 - logo.GetHeight() / 2);

        EndDrawing();
    }

    // UnloadTexture() and CloseWindow() are called automatically.

    return 0;
}
