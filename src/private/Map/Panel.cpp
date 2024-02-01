#include <filesystem>
#include "Map/Panel.hpp"
#include "raylib-cpp.hpp"

Panel::Panel(const std::string &spritesPath)
{
    loadSprites(spritesPath);
    std::cout << "Sprites loaded: " << sprites.size() << std::endl;
    visibleColumns = 3;
    visibleRows = static_cast<int>(sprites.size() / visibleColumns);
    std::cout << "Visible columns: " << visibleColumns << std::endl;
    std::cout << "Visible rows: " << visibleRows << std::endl;
}

void Panel::loadSprites(const std::string &spritesPath)
{

    for (const auto &entry : std::filesystem::recursive_directory_iterator(spritesPath))
    {
        if (entry.is_regular_file())
        {
            std::string fileName = entry.path().string();
            sprites.push_back(fileName);
        }
    }
}

void Panel::update()
{
    // Update logic goes here
    // You can add any necessary code to update the panel's state
}

void Panel::draw()
{

    for (int i = 0; i < visibleRows; i++)
    {
        for (int j = 0; j < visibleColumns; j++)
        {
            if (i * visibleColumns + j < sprites.size())
            {
                int index = i * visibleColumns + j;
                DrawTexturePro(
                    sprites[index],
                    raylib::Rectangle(0, 0, sprites[index].GetWidth(), sprites[index].GetHeight()),
                    raylib::Rectangle(j * 100, i * 100, 100, 100),
                    raylib::Vector2(0, 0),
                    0.0f,
                    WHITE);
            }
        }
    }
}
