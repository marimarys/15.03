#pragma once
#include <string>
#include "SFML/Graphics.hpp"

const float WINDOW_WIDTH{ 800.f };
const float WINDOW_HEIGHT{ 800.f };
const std::string WINDOW_TITLE{ "SFML SPACE SHOOTER" };
const size_t FPS{ 60 };

const std::string PLAYER_FILE_NAME ="images\\playerShip2_orange.png";
sf::Vector2f PLAYER_START_POS{ (WINDOW_WIDTH - PLAYER_WIDTH) / 2.f, WINDOW_HEIGHT - PLAYER_HEIGHT };
const float PLAYER_WIDTH = 150.f;
const float PLAYER_HEIGHT = 150.f;
float PLAYER_SPEED = 6.f;