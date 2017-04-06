#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class CButon
{
	sf::RectangleShape rect;
	sf::Texture* m_Texture;
	sf::Sprite m_Sprite;
	bool enabled;				// par défaut à true

public:

	/*** METHODES ***/
	bool clicListener();
	void setPosition(const float & x, const float & y);
	void setSprite(const std::string & path);
	void draw(sf::RenderWindow & window);
	void activate(const bool & enabled);
	CButon();
	~CButon();

	/*** GETTERS ***/
	sf::Sprite getSprite();
};

