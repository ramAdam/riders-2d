#include <iostream>
#include <vector>
#include "raylib-cpp.hpp"

class Panel
{
private:
    std::vector<raylib::Texture> sprites;
    int visibleColumns;
    int visibleRows;
    int scrollX;
    int scrollY;

public:
    // Panel(int columns, int rows);
    // another constructor that just take string path
    Panel(const std::string &spritesPath);

    void loadSprites(const std::string &spritesPath);
    void update();
    void draw();
};

// int main()
// {
//     // Example usage
//     Panel panel(3, 4);

//     std::vector<std::vector<std::string>> spriteData = {
//         {"sprite1", "sprite2", "sprite3"},
//         {"sprite4", "sprite5", "sprite6"},
//         {"sprite7", "sprite8", "sprite9"},
//         {"sprite10", "sprite11", "sprite12"}};

//     panel.loadSprites(spriteData);
//     panel.draw();

//     return 0;
// }