#include <SFML/Graphics.hpp>

#ifndef CARDIOID_HPP 
#define CARDIOID_HPP 
class Cardioid{
    private: 
        sf::CircleShape mainCircle;
        float factor = 2;
        int base = 10;
        std::vector<sf::CircleShape> points;
    public: 
        Cardioid(float radius);
        ~Cardioid();
        void show(sf::RenderWindow& window){
            window.draw(mainCircle); 
            for(int i = 0; i < points.size(); i++){
                window.draw(points[i]);
            }
        }
        void setBase(int newBase){
            if(newBase < 2) return; 
            base = newBase; 
        }
};
#endif