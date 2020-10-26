#include "score.hpp"
#include <iostream>
#include "headers.hpp"

Score::Score(sf::Font& font, unsigned int size)
    : sf::Text("Score 0", font, size) {
    this->value = 0;
}

void Score::incrementScore() {
    this->value += 1;
}

void Score::update() {
    this->setString("SCORE " + std::to_string(this->value));
}
