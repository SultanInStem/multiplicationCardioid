#ifndef CARDIOID_HPP 
#define CARDIOID_HPP 
#include <SFML/Graphics.hpp>
class Cardioid{
    private: 
        sf::CircleShape mainCircle;
        sf::Color pointsColor = sf::Color::Red;
        sf::Color originColor = sf::Color::Green; 
        sf::Color lineColor = sf::Color::Red;
        int factor = 2;
        int base = 10;
        float originAngle = (-3* M_PI) / 2;
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
            for(int i = 0; i < lines.size(); i++){
                window.draw(lines[i]);
            }
        }
        void setBase(int newBase){
            if(newBase < 2) return; 
            base = newBase; 
            setPoints();
        }
        void setPoints(){
            points.clear();
            lines.clear();
            float radius = mainCircle.getRadius(); 
            float arcLength = 2 * M_PI * radius / base; 
            float theta = originAngle; 
            for(int i = 0; i < base; i++){
                float x = radius * cos(theta); 
                float y = radius * sin(theta); 
                points.push_back(sf::CircleShape());
                points[i].setRadius(1);
                points[i].setOrigin(sf::Vector2f(points[i].getRadius(), points[i].getRadius()));
                points[i].setPosition(sf::Vector2f(x, y));
                points[i].setFillColor(pointsColor); 
                theta += (arcLength / radius);
            };
            points[0].setFillColor(originColor);
        }
        int getBase(){
            return base; 
        }
        void setFactor(int newFactor){
            if(newFactor < 2) return; 
            factor = newFactor; 
        }
        void multiply(int num){
            if(num <= 0 || num >= base || num > points.size()) return;  
            sf::VertexArray line(sf::Lines, 2);
            line[0].position = points[num].getPosition();
            line[0].color = lineColor;
            int index = (num * factor) % base; 
            line[1].position = points[index].getPosition();
            line[1].color = lineColor;
            lines.push_back(line);
        }
};
#endif