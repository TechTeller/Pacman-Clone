#ifndef TILE_H
#define TILE_H
#include <SFML/Graphics.hpp>
#include <iostream>


class Tile
{
    public:
        Tile();
        virtual ~Tile();

        void draw(sf::RenderWindow &window);
        void update();

        sf::Vector2f getCenterCoords();
        sf::Sprite tileTexSprite;
    protected:
    private:
        sf::Vector2i size;
        bool isPassable;
        sf::VertexArray tileTex;

        //Holds a container of gameobject to see whether this tile contains food, etc
};

#endif // TILE_H
