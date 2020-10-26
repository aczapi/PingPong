#pragma once

#include <SFML/Graphics.hpp>
#include <memory>
#include <string>
#include "headers.hpp"

class Entity : public sf::Sprite {
public:
    Entity() {
        texture_ = std::make_shared<sf::Texture>();
    }

    void load(std::string filename) {
        texture_->loadFromFile(filename);
        this->setTexture(*this->texture_);
        }

    void virtual update() {
        this->move(this->velocity_);
    }

    bool checkCollision(std::shared_ptr<Entity> entity) {
        if (this->getGlobalBounds().intersects(entity->getGlobalBounds())) {
            return true;
        } else {
            return false;
        }
    }
    ~Entity() {
    }

    sf::Vector2f velocity_;

private:
    std::shared_ptr<sf::Texture> texture_;
};