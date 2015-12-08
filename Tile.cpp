#include "Tile.h"

Tile::Tile()
: size(8,8)
{
    isPassable = true;
    tileTex = sf::VertexArray(sf::Quads, 4);
}

Tile::~Tile()
{
    //dtor
}

void Tile::draw(sf::RenderWindow &window)
{
    window.draw(tileTexSprite);
}

void Tile::update()
{

}


sf::Vector2f Tile::getCenterCoords()
{

}
