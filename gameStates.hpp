
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>

class State {
public:
    State() {}
    virtual void initialize(sf::RenderWindow* window) {}
    virtual void update(sf::RenderWindow* window) {}
    virtual void render(sf::RenderWindow* window) {}
    virtual void destroy(sf::RenderWindow* window) {}

private:
};

class GameState {
public:
    void setWindow(sf::RenderWindow* window) {
        this->window = window;
    }
    void setState(std::shared_ptr<State> state) {
        if (this->state != NULL) {
            this->state->destroy(this->window);
        }
        this->state = state;
        if (this->state != NULL) {
            this->state->initialize(this->window);
        }
    }
    void update() {
        if (this->state != NULL) {
            this->state->update(this->window);
        }
    }
    void render() {
        if (this->state != NULL) {
            this->state->render(this->window);
        }
    }

    static GameState& instance() {
        static GameState instance;
        return instance;
    }

private:
    GameState(GameState const&) = delete;
    GameState& operator=(GameState const&) = delete;
    GameState() {
        this->state = NULL;
    }
    ~GameState() {
        if (this->state != NULL) {
            this->state->destroy(this->window);
        }
    }
    sf::RenderWindow* window;
    std::shared_ptr<State> state;
};

extern bool quitGame;
