#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <iostream>
class CWall 
{
	sf::Texture* m_Texture;
	sf::Sprite m_Sprite;
	int VERTICAL_LEFT = 0;
	int VERTICAL_RIGHT = 1;
	int HORIZONTAL_TOP = 2;
	int HORIZONTAL_BOTTOM = 3;
	int m_Direction;
	std::vector <CWall> ROOM_WALLS;


public:
	/*** METHODES ***/
	void LoadImage();
	void InitWalls(void);
	void setPosition(const int & x, const int & y);
	/*** CONSTRUCTEUR / DESTRUCTEUR ***/  
	CWall();
	~CWall();

	/*** GETTERS ***/
	sf::Sprite getSprite();
	std::vector<CWall> getRoomWalls();
	int getDirection();
	/*** SETTERS ***/
	void setDirection(const int & Direction);
};

