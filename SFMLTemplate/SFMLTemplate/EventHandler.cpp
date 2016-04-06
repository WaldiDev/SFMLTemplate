#include "EventHandler.h"

#include <assert.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include "ViewHandler.h"
#include "SceneHandler.h"

EventHandler::EventHandler(sf::RenderWindow* window, ViewHandler* viewHandler, SceneHandler* sceneHandler)
	: m_window(window)
	, m_viewHandler(viewHandler)
	, m_sceneHandler(sceneHandler)
{
	assert(m_window);
	assert(m_viewHandler);
	assert(m_sceneHandler);
}

void EventHandler::Update()
{
}

void EventHandler::OnKeyPressed(int key)
{
}
