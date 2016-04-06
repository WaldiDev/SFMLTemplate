#include "GameWorld.h"

#include <assert.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include "ViewHandler.h"
#include "SceneHandler.h"
#include "EventHandler.h"
#include <SFML/System/Clock.hpp>

GameWorld::GameWorld(sf::RenderWindow* window)
	: m_window(window)
	, m_viewHandler(new ViewHandler(m_window))
	, m_sceneHandler(new SceneHandler(m_window))
	, m_eventHandler(new EventHandler(m_window, m_viewHandler, m_sceneHandler))
{
}

GameWorld::~GameWorld()
{
	delete m_viewHandler;
	delete m_sceneHandler;
	delete m_eventHandler;
}

void GameWorld::Run()
{
	sf::Clock clock;
	while (m_window->isOpen())
	{
		auto delta = clock.restart().asSeconds();
		Update(delta);
		Render();
	}
}

void GameWorld::Update(float delta)
{
	m_eventHandler->Update();
	m_sceneHandler->Update(delta);
}

void GameWorld::Render()
{
	m_window->clear();
	m_sceneHandler->Render();
	m_viewHandler->Render();
	m_window->display();
}
