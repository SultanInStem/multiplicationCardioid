#include <SFML/Graphics.hpp> 
#include "Cardioid.hpp"
#ifndef CANVAS_HPP 
#define CANVAS_HPP 
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