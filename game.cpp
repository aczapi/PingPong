#include "game.hpp"
#include "mainMenu.hpp"

void Game::initialize(sf::RenderWindow* window) {
    this->background_ = std::make_shared<Background>("../assets/graphics/background_game.jpg");
    this->background_->setScale(0.34, 0.34);
    //background_->setSize(sf::Vector2f(windowWidth, windowHeight));
    this->leftPaddle_ = std::make_shared<LeftPaddle>();
    this->rightPaddle_ = std::make_shared<RightPaddle>();

    this->leftPaddle_->setPosition(0, window->getSize().y / 3 + this->leftPaddle_->getGlobalBounds().height / 2);
    this->rightPaddle_->setPosition(window->getSize().x - this->rightPaddle_->getGlobalBounds().width,
                                    window->getSize().y / 3 + this->rightPaddle_->getGlobalBounds().height / 2);

    this->scoreFont_ = new sf::Font();
    this->scoreFont_->loadFromFile("../assets/fonts/SpaceSuperstars.ttf");

    this->pausedFont_->loadFromFile("../assets/fonts/SpaceSuperstars.ttf");

    this->pausedText_ = new sf::Text("       Paused\nPress Escape to Quit", *pausedFont_, 30U);
    this->pausedText_->setFillColor(sf::Color(193, 184, 193));
    this->pausedText_->setOrigin(this->pausedText_->getGlobalBounds().width / 2, this->pausedText_->getGlobalBounds().height / 2);
    this->pausedText_->setPosition(window->getSize().x / 2, window->getSize().y / 2);

    this->scorePlayer1_ = std::make_shared<Score>(*scoreFont_, 30U);
    this->scorePlayer1_->setFillColor(sf::Color(139, 0, 0));
    this->scorePlayer1_->setPosition(20, 20);
    this->scorePlayer2_ = std::make_shared<Score>(*scoreFont_, 30U);
    this->scorePlayer2_->setFillColor(sf::Color(139, 0, 0));
    this->scorePlayer2_->setPosition(windowWidth - 200, 20);

    this->ball_ = std::make_shared<Ball>(this->leftPaddle_, this->rightPaddle_, this->scorePlayer1_, this->scorePlayer2_);
    this->ball_->reset(window);

    this->paused_ = false;
    this->enterKey_ = false;

    // window->draw(*this->background_);
    // window->draw(*this->leftPaddle_);
    // window->draw(*this->rightPaddle_);
    // window->draw(*this->scorePlayer1_);
    // window->draw(*this->scorePlayer2_);
    // window->draw(*this->ball_);

    // window->display();
}

void Game::update(sf::RenderWindow* window) {
    if (this->startElapsed_.asMilliseconds() > 1400) {
        if (this->paused_) {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Return) && !this->enterKey_) {
                this->paused_ = false;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) {
                GameState& gameState = GameState::instance();
                std::shared_ptr<MainMenu> menu(new MainMenu());
                gameState.setState(menu);
            }
        } else {
            this->ball_->update(window);
            this->leftPaddle_->update();
            this->rightPaddle_->update();
            this->scorePlayer1_->update();
            this->scorePlayer2_->update();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Return) && !this->enterKey_) {
                this->paused_ = true;
                this->pausedText_->setString("       Paused\nPress Escape to Quit");
                this->pausedText_->setOrigin(this->pausedText_->getGlobalBounds().width / 2, this->pausedText_->getGlobalBounds().height / 2);
                this->pausedText_->setPosition(600, 400);
            }
        }
        this->enterKey_ = sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Return);
    } else {
        if ((int)this->startElapsed_.asSeconds() == 1) {
            this->startDigits_->setString("Go!");
            this->startDigits_->setFillColor(sf::Color(211, 14, 204));
        }
        this->startDigits_->setOrigin(this->startDigits_->getGlobalBounds().width / 2, this->startDigits_->getGlobalBounds().height / 2);
        this->startDigits_->setPosition(600, this->startDigits_->getGlobalBounds().height / 2);
    }
    this->enterKey_ = sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Return);
}

void Game::render(sf::RenderWindow* window) {
    window->draw(*this->background_);
    window->draw(*this->leftPaddle_);
    window->draw(*this->rightPaddle_);
    window->draw(*this->scorePlayer1_);
    window->draw(*this->scorePlayer2_);
    window->draw(*this->ball_);
    this->startElapsed_ = this->startTimer_.getElapsedTime();
    if (this->startElapsed_.asMilliseconds() < 1400) {
        window->draw(*this->startDigits_);
    }
    if (this->paused_) {
        window->draw(*this->pausedText_);
    }
}

void Game::destroy(sf::RenderWindow* window) {
    delete this->pausedFont_;
    delete this->scoreFont_;
    delete this->pausedText_;
    delete this->startDigits_;
}