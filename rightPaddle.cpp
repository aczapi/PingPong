#include "rightPaddle.hpp"

RightPaddle::RightPaddle() {
    this->load("../assets/graphics/p2.png");
}

void RightPaddle::update() {
    this->velocity_.y = (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down) -
                         sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up)) *
                        paddleSpeed;

    Entity::update();

    if (this->getPosition().y < 0) {
        this->move(0, paddleSpeed);
    }
    if (this->getPosition().y + this->getGlobalBounds().height > 800) {
        this->move(0, -paddleSpeed);
    }
}
