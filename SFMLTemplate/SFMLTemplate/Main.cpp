#include <windows.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include "GameWorld.h"

int WINAPI WinMain(HINSTANCE instance, HINSTANCE prevInstance, LPSTR cmdLine, int cmdShow)
{
	auto window = new sf::RenderWindow(sf::VideoMode(1000u, 1000u), "Sanduhr");
	auto pos = window->getPosition();
	pos.y = 5;
	window->setPosition(pos);
	window->setVerticalSyncEnabled(true);

	GameWorld world(window);
	world.Run();

	delete window;

	return 0;
}