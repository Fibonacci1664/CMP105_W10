#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "TileMapManager.h"
#include <string>
#include <iostream>
#include "Player.h"


class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();
	void initPlayer();
	void initTextures();
	void checkTileCollisions();
	void initTextBox();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;

	TileMapManager tmm;
	sf::Texture player_texture;
	Player player;
	sf::RectangleShape colBox;
	sf::RectangleShape OriginBox;
	sf::RectangleShape playerPosBox;
	sf::RectangleShape textBox;
	sf::Text text;
	sf::Font font;
};