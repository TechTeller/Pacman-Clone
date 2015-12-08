#include <iostream>
#include <SFML/Graphics.hpp>
#include "Map.h"
#include "Pacman.h"

using namespace std;

int main()
{
    unsigned int resFactor = 2;
    sf::Vector2f windowSize(240 * resFactor, 264 * resFactor);
    sf::RenderWindow window(sf::VideoMode(windowSize.x, windowSize.y), "Pacman - Clone", sf::Style::Default);

    Map gameMap;
    gameMap.loadMap();

    //Declare pacman
    Pacman pacman;

    while(window.isOpen())
    {
        sf::Event event;

        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
            if(event.type == sf::Event::KeyPressed)
            {
                if(event.key.code == sf::Keyboard::Escape)
                    window.close();
            }
            if(event.type == sf::Event::MouseButtonPressed)
            {
                std::cout<<gameMap.getTileFromPosition(sf::Vector2i(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))<<std::endl;
            }
        }
        //Updating code here

        pacman.update();

        window.clear(sf::Color::Black);


        //Drawing code here

        gameMap.draw(window);
        pacman.draw(window);

        window.display();
    }

    return 0;
}
