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
    ~Ball();
    void update(sf::RenderWindow* window);

    void reset(sf::RenderWindow* window);
    void addVelocity(std::shared_ptr<Paddle> paddle);

private:
    int winner_;
    std::shared_ptr<Score> scorePlayer1_;
    std::shared_ptr<Score> scorePlayer2_;
    std::shared_ptr<Paddle> player1_;
    std::shared_ptr<Paddle> player2_;

    sf::SoundBuffer* buffer_;
    sf::Sound* sound_;

    sf::SoundBuffer* scoreBuffer_;
    sf::Sound* scoreSound_;
};
