#include "ball.hpp"
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include "gameStates.hpp"
#include "headers.hpp"
#include "mainMenu.hpp"

Ball::Ball(std::shared_ptr<Paddle> player1, std::shared_ptr<Paddle> player2, std::shared_ptr<Score> scorePlayer1, std::shared_ptr<Score> scorePlayer2) {
    this->player1_ = player1;
    this->player2_ = player2;
    this->scorePlayer1_ = scorePlayer1;
    this->scorePlayer2_ = scorePlayer2;

    this->load("../assets/graphics/ball2.png");

    this->buffer_ = new sf::SoundBuffer();
    this->buffer_->loadFromFile("../assets/sounds/bounce.wav");
    this->sound_ = new sf::Sound(*this->buffer_);

    this->scoreBuffer_ = new sf::SoundBuffer();
    this->scoreBuffer_->loadFromFile("../assets/sounds/glass.wav");
    this->scoreSound_ = new sf::Sound(*this->scoreBuffer_);
    this->scoreSound_->setVolume(50);
}

void Ball::addVelocity(std::shared_ptr<Paddle> paddle) {
    if (this->velocity_.y > 0) {
        if (paddle->velocity_.y > 0) {
            this->velocity_.y *= 1.30f;
        } else if (paddle->velocity_.y < 0 && this->velocity_.y != 5.5f) {
            this->velocity_.y = 5.5f;
        }
    } else if (this->velocity_.y < 0) {
        if (paddle->velocity_.y < 0) {
            this->velocity_.y *= 1.30f;
        } else if (paddle->velocity_.y > 0 && this->velocity_.y != -5.5f) {
            this->velocity_.y = -5.5f;
        }
    }
}

void Ball::update(sf::RenderWindow* window) {
    if (this->checkCollision(this->player1_)) {
        this->velocity_.x *= -1;
        addVelocity(player1_);
        this->sound_->play();
    }
    if (this->checkCollision(this->player2_)) {
        this->velocity_.x *= -1;
        addVelocity(player2_);
        this->sound_->play();
    }
    if (this->getPosition().y < 0 || this->getPosition().y + this->getGlobalBounds().height > window->getSize().y) {
        this->velocity_.y *= -1;
        this->sound_->play();
    }
    if (this->getPosition().x < this->player1_->getGlobalBounds().width - 5) {
        this->scoreSound_->play();
        this->scorePlayer2_->incrementScore();
        this->reset(window);
    }
    if (this->getPosition().x > window->getSize().x - this->player2_->getGlobalBounds().width + 5) {
        this->scoreSound_->play();
        this->scorePlayer1_->incrementScore();
        this->reset(window);
    }
    Entity::update();
}

void Ball::reset(sf::RenderWindow* window) {
    this->velocity_.x = ((rand() % 2) == 0) ? 6.5f : -6.5f;
    this->velocity_.y = ((rand() % 2) == 0) ? 6.5f : -6.5f;
    this->setPosition(window->getSize().x / 2 - 14, window->getSize().y / 2 - 10);
}

Ball::~Ball() {
    delete (this->scoreSound_);
    delete (this->scoreBuffer_);
    delete (this->buffer_);
    delete (this->sound_);
}