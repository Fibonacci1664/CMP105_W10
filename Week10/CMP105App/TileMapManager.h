#pragma once

#include"Framework/TileMap.h"
#include <SFML\Graphics\RenderWindow.hpp>
#include <iostream>

class TileMapManager
{
public:
	TileMapManager();
	~TileMapManager();

	void render(sf::RenderWindow* window);

private:
	void initTexture();
	void createTileSet();
	void createMap();

	TileMap tileMap;
	GameObject tile;
	std::vector<GameObject> tiles;
};