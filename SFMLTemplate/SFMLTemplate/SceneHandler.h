#pragma once

namespace sf
{
	class RenderWindow;
}

class SceneHandler
{
public:
	explicit SceneHandler(sf::RenderWindow* window);
	~SceneHandler();

	void Update(float delta);
	void Render();

private:
	sf::RenderWindow* m_window;
};

