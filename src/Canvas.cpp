#include "Canvas.hpp"
#include <SFML/Graphics.hpp>

Canvas::Canvas(int width, int height){
    sf::ContextSettings settings; 
    settings.antialiasingLevel = 15; 
    window.create(sf::VideoMode(width, height), "Carioid", sf::Style::Titlebar | sf::Style::Close, settings);
    window.setFramerateLimit(60);  
}

Canvas::~Canvas(){};