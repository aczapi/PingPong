#pragma once
#include <SFML/Graphics.hpp>

class Score : public sf::Text {
public:
    Score(sf::Font& font, unsigned int size);
    void incrementScore();
    void update();

private:
    int value;
};