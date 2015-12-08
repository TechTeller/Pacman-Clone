#include "Map.h"

Map::Map()
{
    //ctor
    mapSize = sf::Vector2i(240,264);
    tileSize = 8;

    mapView.reset(sf::FloatRect(0, 0, mapSize.x, mapSize.y));
}

Map::~Map()
{
    //dtor
}

void Map::loadMap()
{
    mapTexture.loadFromFile("./Resources/Levels/map.png");

    for(unsigned int i=0;i<mapSize.x/tileSize; i++)
    {
        for(unsigned int j=0;j<mapSize.y/tileSize;j++)
        {
            std::cout<<j*mapSize.x/tileSize + i <<std::endl;
            Tile tile;
            tile.tileTexSprite.setTexture(mapTexture);
            sf::Vector2f pos(i*tileSize, j*tileSize);
            tile.tileTexSprite.setTextureRect(sf::IntRect(pos.x, pos.y, tileSize, tileSize));
            tile.tileTexSprite.setPosition(i*tileSize, j*tileSize);
            tiles.emplace_back(tile);
            std::cout<<"Buffer size: "<<tiles.size() - 1<<std::endl;
        }
    }
}

void Map::draw(sf::RenderWindow& window)
{
    for(unsigned int i=0; i < tiles.size(); i++)
    {
        tiles[i].draw(window);
    }
    window.setView(mapView);
}

unsigned int Map::getTileFromPosition(sf::Vector2i mousePos)
{
    unsigned int x = std::floor(mousePos.x/tileSize);
    unsigned int y = std::floor(mousePos.y/tileSize);

    return y*mapSize.x/tileSize + x;
}
