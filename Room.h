#pragma once
#include <vector>
#include "Wall.h"
#include "WallForRoom.h"
#include "DoorForRoom.h"
class CRoom  /*** Correspon à une pièce de l'étage ***/
{
private:
	CRoom* m_Nord;
	CRoom* m_Sud;
	CRoom* m_Est;
	CRoom* m_Ouest;
	unsigned IdGen;
  public:
	CRoom(const unsigned & Id) noexcept;
	CRoom() noexcept;
	~CRoom(void) noexcept;

	//Methodes
	void DrawWalls(sf::RenderWindow & Window, const unsigned & PosX, const unsigned & PosY, CWallForRoom & walls, CDoorForRoom & doors) noexcept;

	//Getters

	CRoom* GetOuest() const noexcept;
	CRoom* GetEst()   const noexcept;
	CRoom* GetSud()   const noexcept;
	CRoom* GetNord()  const noexcept;


	unsigned GetId()  const noexcept;


	//Setters

	void setNord(const CRoom &  Nord) noexcept;
	void setSud(const CRoom &   Sud)  noexcept;
	void setEst(const CRoom &  Est)  noexcept;
	void setOuest(const CRoom  & Ouest)noexcept;
	void setId(const unsigned & Id)noexcept;


	void setNord() noexcept;
	void setSud()  noexcept;
	void setEst()  noexcept;
	void setOuest()noexcept;

};



