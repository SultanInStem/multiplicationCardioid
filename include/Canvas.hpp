#ifndef CANVAS_HPP 
#define CANVAS_HPP 
#include "Cardioid.hpp"
#include <SFML/Graphics.hpp> 
class Canvas{ 
    public: 
        Canvas(int width, int height);
        ~Canvas(); 
        void run(); 
    private:
        sf::RenderWindow window; 
        sf::View view; 
        Cardioid cardioid;
        void handleEvents(); 
        void update(); 
        void render(); 
};
#endif  