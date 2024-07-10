#include "Cardioid.hpp"

Cardioid::Cardioid(float radius){
    mainCircle.setRadius(radius); 
    mainCircle.setOrigin(sf::Vector2f(radius, radius)); 
    mainCircle.setPosition(sf::Vector2f(0,0));
    mainCircle.setFillColor(sf::Color::Transparent);
    mainCircle.setOutlineThickness(2);
    mainCircle.setPointCount(100); 
    float arcLength = 2 * M_PI * radius / base; 
    float theta = M_PI;
    for(int i = 0; i < base; i++){
        float x = radius * cos(theta); 
        float y = radius * sin(theta); 
        points.push_back(sf::CircleShape());
        points[i].setRadius(5);
        points[i].setOrigin(sf::Vector2f(5,5));
        points[i].setPosition(sf::Vector2f(x, y));
        points[i].setFillColor(sf::Color::Red); 
        theta -= (arcLength / radius);
    }
}; 

Cardioid::~Cardioid(){

}