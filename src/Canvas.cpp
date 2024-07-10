#include "Canvas.hpp"
#include <SFML/Graphics.hpp>


int COUNT = 0;

Canvas::Canvas(int width, int height) : cardioid(150){
    sf::ContextSettings settings; 
    settings.antialiasingLevel = 20; 
    window.create(sf::VideoMode(width, height), "Carioid", sf::Style::Titlebar | sf::Style::Close, settings);
    window.setFramerateLimit(60);  
    view.setSize(sf::Vector2f(window.getSize().x, window.getSize().y));
    view.setCenter(sf::Vector2f(0,0));
    window.setView(view); 
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
    // carioid.multiply();
}

void Canvas::render(){
    window.clear(); 
    cardioid.show(window);
    window.display();
}

void Canvas::run(){
    while(window.isOpen()){
        handleEvents(); 
        update(); 
        render();
    }
};