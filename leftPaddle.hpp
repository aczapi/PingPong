#pragma once
#include <SFML/Graphics.hpp>
#include "headers.hpp"
#include "paddle.hpp"

class LeftPaddle : public Paddle {
public:
    LeftPaddle();
    void update();

    float moveUp();
    float moveDown();
    int getY();

private:
};