#include <SFML/Graphics.hpp>

#ifndef CARDIOID_HPP 
#define CARDIOID_HPP 
class Cardioid{
    private: 
        sf::CircleShape mainCircle;
        float factor = 2;
        int base = 10;
        std::vector<sf::CircleShape> points;
        std::vector<sf::VertexArray> lines;
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
        void setFactor(int newFactor){
            if(newFactor < 2) return; 
            factor = newFactor; 
        }
        void multiply(int num){
            if(num < 0 || num >= base || num > points.size()) return;  
            // points[num]
        }
};
#endif