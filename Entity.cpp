#include "Entity.h"

Entity::Entity()
{
    //ctor
}

Entity::~Entity()
{
    //dtor
}

const sf::Vector2f Entity::getPosition()
{
    return position;
}
