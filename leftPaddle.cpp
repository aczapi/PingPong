#include "leftPaddle.hpp"

LeftPaddle::LeftPaddle() {
    this->load("../assets/graphics/p1.png");
}

void LeftPaddle::update() {
    this->velocity_.y = (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) -
                         sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) *
                        paddleSpeed;

    Entity::update();

    if (this->getPosition().y < 0) {
        this->move(0, paddleSpeed);
    }
    if (this->getPosition().y + this->getGlobalBounds().height > 720) {
        this->move(0, -paddleSpeed);
    }
}
