#pragma once

class ViewHandler;
class SceneHandler;
class EventHandler;

namespace sf
{
	class RenderWindow;
}

class GameWorld
{
public:
	explicit GameWorld(sf::RenderWindow* window);
	~GameWorld();

	void Run();

private:
	void Update(float delta);
	void Render();

private:
	sf::RenderWindow* m_window;
	ViewHandler* m_viewHandler;
	SceneHandler* m_sceneHandler;
	EventHandler* m_eventHandler;
};

