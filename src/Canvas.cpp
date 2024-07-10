#include "Canvas.hpp"
#include <SFML/Graphics.hpp>

Canvas::Canvas(int width, int height){
    sf::ContextSettings settings; 
    settings.antialiasingLevel = 15; 
    window.create(sf::VideoMode(width, height), "Carioid", sf::Style::Titlebar | sf::Style::Close, settings);
    window.setFramerateLimit(60);  
}

Canvas::~Canvas(){};

void Canvas::handleEvents(){
    sf::Event event; 
    while(window.pollEvent(event)){
        if(event.type == sf::Event::Closed){
            window.close(); 
        }
    }
}
void Canvas::update(){

}

void Canvas::render(){
    window.clear(); 
    window.display();
}

void Canvas::run(){
    while(window.isOpen()){
        handleEvents(); 
        update(); 
        render();
    }
};