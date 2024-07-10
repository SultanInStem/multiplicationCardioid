#include <SFML/Graphics.hpp> 
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
        void handleEvents(); 
        void update(); 
        void render(); 
};
#endif  