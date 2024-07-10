#include "Cardioid.hpp"

Cardioid::Cardioid(float radius){
    mainCircle.setRadius(radius); 
    mainCircle.setOrigin(sf::Vector2f(radius, radius)); 
    mainCircle.setPosition(sf::Vector2f(0,0));
    mainCircle.setFillColor(sf::Color::Transparent);
    mainCircle.setOutlineThickness(2);
    mainCircle.setPointCount(100); 
    originAngle = (-3 * M_PI) / 2; 
    setPoints();
}; 

Cardioid::~Cardioid(){};