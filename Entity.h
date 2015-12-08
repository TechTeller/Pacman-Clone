#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>
#include <iostream>


class Entity
{
    public:
        Entity();
        virtual ~Entity();

        virtual void update()=0;
        virtual void draw(sf::RenderWindow &window)=0;

        const sf::Vector2f getPosition();
    protected:
        sf::Vector2f position;
        sf::Vector2f delta;
        sf::Vector2f direction;
        float speed;
        sf::Sprite sprite;
        sf::RectangleShape rect;
    private:
};

#endif // ENTITY_H
