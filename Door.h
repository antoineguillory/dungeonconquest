#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <iostream>
class CDoor
{
	sf::Texture* m_Texture;
	sf::Sprite m_Sprite;
	int VERTICAL_LEFT = 0;
	int VERTICAL_RIGHT = 1;
	int HORIZONTAL_TOP = 2;
	int HORIZONTAL_BOTTOM = 3;
	int m_Direction;
	std::vector <CDoor> ROOM_WALLS;
	bool m_Open;


public:
	/*** METHODES ***/
	void LoadImage();
	void setPosition(const int & x, const int & y);
	/*** CONSTRUCTEUR / DESTRUCTEUR ***/
	CDoor();
	~CDoor();

	/*** GETTERS ***/
	sf::Sprite getSprite();
	int getDirection();
	bool isOpen();
	/*** SETTERS ***/
	void setDirection(const int & Direction);
	void setOpen(const bool & open);
};

