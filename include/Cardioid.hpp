#include <SFML/Graphics.hpp>

#ifndef CARDIOID_HPP 
#define CARDIOID_HPP 
class Cardioid{
    private: 
        sf::CircleShape mainCircle;
        float factor = 2;
        int base = 10;
    public: 
        Cardioid(float radius);
        ~Cardioid();
        void show(sf::RenderWindow& window){
            window.draw(mainCircle); 
        }
};
#endif