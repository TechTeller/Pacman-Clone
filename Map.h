#ifndef MAP_H
#define MAP_H

#include <iostream>

#include "Tile.h"



class Map
{
    public:
        Map();
        virtual ~Map();
        void loadMap();

        void draw(sf::RenderWindow &window);

        unsigned int getTileFromPosition(sf::Vector2i mousePos);

    protected:
    private:
        sf::Vector2i mapSize;
        std::vector<Tile> tiles;
        unsigned int tileSize;

        sf::Texture mapTexture;
        sf::View mapView;

};

#endif // MAP_H
