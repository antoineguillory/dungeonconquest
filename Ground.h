#pragma once
#include <SFML/Graphics.hpp>

class CGround
{
	sf::Texture* m_Texture;
	sf::Sprite m_Sprite;
  public:

	sf::Sprite getSprite();
	CGround();
	~CGround();
};

