#include "SceneHandler.h"

#include <assert.h>
#include <SFML/Graphics/RenderWindow.hpp>

SceneHandler::SceneHandler(sf::RenderWindow* window)
	: m_window(window)
{
	assert(m_window);
}

SceneHandler::~SceneHandler()
{
}

void SceneHandler::Update(float delta)
{
}

void SceneHandler::Render()
{
}
