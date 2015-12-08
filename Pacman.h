#ifndef PACMAN_H
#define PACMAN_H

#include "Entity.h"


class Pacman : public Entity
{
    public:
        Pacman();
        virtual ~Pacman();

        void update();
        void draw(sf::RenderWindow &window);
    protected:
    private:
};

#endif // PACMAN_H
