#pragma once
#include <SFML/Graphics.hpp>
#include "headers.hpp"
#include "paddle.hpp"

class RightPaddle : public Paddle {
public:
    RightPaddle();
    void update();

    float moveUp();
    float moveDown();
    int getY();

private:
};
