#pragma once
#include "settings.h"

class Player {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	float speedx;


public:
	Player() {
		texture.loadFromFile(PLAYER_FILE_NAME);
		sprite.setTexture(texture);
		sprite.setPosition(PLAYER_START_POS);
		speedx = 0.f;
	}

	void update() {
		//sf::Vector2f speed = sf::Vector2f(0.f, 0.f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) ||
			sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			speedx = -PLAYER_SPEED;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) ||
			sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			speedx =PLAYER_SPEED;
		}
		sprite.move(speedx, 0.f);
		sf::Vector2f curr_pos = sprite.getPosition();
		if (curr_pos.x <= 0) {
			curr_pos.x = 0;
		}
		if (curr_pos.x >= WINDOW_WIDTH - PLAYER_WIDTH) {
			curr_pos.x = WINDOW_WIDTH - PLAYER_WIDTH();
		}
		sprite.setPosition(curr_pos);
	}

	void draw(sf::RenderWindow& window) {

	}
};
