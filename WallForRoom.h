#pragma once
#include <vector>
#include "Wall.h"
#include "IObstacle.h"
#include <iostream>
class CWallForRoom : public IObstacle
{
	std::vector<CWall> m_Walls;


  public:

	  /*** CONTRUCTEUR / DESTRUCTEUR ***/
	CWallForRoom();
	~CWallForRoom();

	/*** METHDODES ***/
	void AddWalls();
	void colide(Player & player);

	/*** GETTERS ***/
	std::vector<CWall> getWalls(void);
};

