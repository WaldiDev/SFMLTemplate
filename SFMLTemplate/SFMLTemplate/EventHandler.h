#pragma once

class SceneHandler;
class ViewHandler;

namespace sf
{
	class RenderWindow;
}

class EventHandler
{
public:
	EventHandler(sf::RenderWindow* window, ViewHandler* viewHandler, SceneHandler* sceneHandler);
	
	void Update();

private:
	void OnKeyPressed(int key);

private:
	sf::RenderWindow* m_window;
	ViewHandler* m_viewHandler;
	SceneHandler* m_sceneHandler;
};

