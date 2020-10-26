#pragma once
#include <cstddef>
#include <iostream>

constexpr size_t windowWidth = 1280;
constexpr size_t windowHeight = 720;
const std::string windowName = "PingPong";
//constexpr size_t border = 0.5;
constexpr size_t topAndBottomBoundries = 0;
//constexpr size_t sidesBoundries = 0;

constexpr size_t sidesBoundries = windowWidth * 0.001;
constexpr size_t topBoundry = windowHeight * 0.03;

constexpr float paddleSpeed{10.f};
constexpr float ballSpeed{5.f};
constexpr int ballRadius{15};

constexpr int menuItems = 2;

constexpr size_t startMenu = 0;
constexpr size_t exitMenu = 1;

constexpr size_t buttonWidth = 180;
constexpr size_t buttonHeight = 60;
