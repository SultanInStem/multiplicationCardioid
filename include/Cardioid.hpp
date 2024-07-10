#include <SFML/Graphics.hpp>

#ifndef CARDIOID_HPP 
#define CARDIOID_HPP 
class Cardioid{
    private: 
        sf::CircleShape mainCircle;
        float factor = 2;
    public: 
        Cardioid(float radius);
        ~Cardioid();
};
#endif