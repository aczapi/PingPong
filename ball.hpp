#pragma once
#include <memory>
#include "entity.hpp"
#include "leftPaddle.hpp"
#include "rightPaddle.hpp"

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "score.hpp"

class Ball : public Entity {
public:
    Ball(std::shared_ptr<Paddle> player1_, std::shared_ptr<Paddle> player2_, std::shared_ptr<Score> scorePlayer1_, std::shared_ptr<Score> scorePlayer2_);

    void update(sf::RenderWindow* window);

    void move();
    int getX();
    int getY();
    int getLeft();
    int getRight();
    int getTop();
    int getBottom();
    float getVelocityX();
    float getVelocityY();
    void setVelocityX(float xSpeed);
    void setVelocityY(float ySpeed);
    void reverseVelocityX();
    void reverseVelocityY();
    const sf::CircleShape& getShape();
    int getWinner() { return winner_; };
    void reset(sf::RenderWindow* window);
    void addVelocity(std::shared_ptr<Paddle> paddle);

private:
    int winner_;
    std::shared_ptr<Score> scorePlayer1_;
    std::shared_ptr<Score> scorePlayer2_;
    std::shared_ptr<Paddle> player1_;
    std::shared_ptr<Paddle> player2_;
    //sf::CircleShape ball_;
    sf::Texture ballTexture_;
    sf::SoundBuffer ballCollision_;
    sf::Sound sound_;

    //sf::Vector2f velocity_{5.0f, -5.0f};
    //sf::Vector2f velocity_{ballSpeed, -ballSpeed};
};
