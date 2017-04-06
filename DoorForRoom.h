#pragma once
#include <vector>
#include "Door.h"
#include "stdlib.h"
#include "time.h"
#include "IObstacle.h"
#include "Player.h"
class CDoorForRoom

{
	std::vector<CDoor> m_Doors;


public:

	/*** CONTRUCTEUR / DESTRUCTEUR ***/
	CDoorForRoom();
	~CDoorForRoom();

	/*** METHDODES ***/
	void AddDoors();
	void Colide(Player & player);
	void setOpen(const int & position, bool open);
	int  PassTheDoor(Player & player);

	/*** GETTERS ***/
	std::vector<CDoor> getDoors(void);
};

