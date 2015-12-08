#include "Pacman.h"

Pacman::Pacman()
{
    //ctor
    speed = 0.05;
    rect = sf::RectangleShape({10,10});
    rect.setPosition(sf::Vector2f(20,20));
    rect.setFillColor(sf::Color::Red);
    direction = {0,0};
    rect.setOrigin(rect.getSize().x/2, rect.getSize().y/2);
}

Pacman::~Pacman()
{
    //dtor
}

void Pacman::update()
{

    sf::IntRect windowBounds(0,0,240,264);

    //Set the direction based on key press
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        direction = {0,1};
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        direction = {0,-1};
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        direction = {1,0};
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        direction = {-1,0};
    }

    //Change the delta into defined speed and directional vector

    delta = direction * speed;

    if(windowBounds.contains(rect.getPosition().x, rect.getPosition().y))
        position +=delta; //Increment position

    rect.setPosition(position);
}

void Pacman::draw(sf::RenderWindow &window)
{
    window.draw(rect);
}
