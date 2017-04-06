#pragma once
#include "Room.h"
#include <vector>
#include <SFML/Graphics.hpp>
#include <utility>
#include "Wall.h"
class CFloor
{
private:
	std::vector <std::vector <CRoom>>  m_Labyrinthe;
	unsigned m_X;
	unsigned m_Y;
	CRoom m_Enter;
	CRoom m_Exit;
	std::pair<std::pair<unsigned, unsigned>, unsigned short> m_CoordEnter;
	std::pair<std::pair<unsigned, unsigned>, unsigned short> m_CoordExit;
	CWall WallToDraw;
public:
	CFloor(const unsigned & y, const unsigned & x) noexcept;
	~CFloor();


	/*** METHODES ***/
	void AfficherDebug();
	void DrawLabyrinthe(sf::RenderWindow & Window, const unsigned & PosX, const unsigned & PosY) noexcept;
	void Solve();
	CRoom DrawRoom(const int & X, const int & Y);
	void IdChemin(const unsigned & info, const unsigned short & Direction, unsigned X, unsigned Y, CFloor* laby);
	void GenLaby() noexcept;
	std::pair<std::pair<unsigned, unsigned>, unsigned short> GetCoordEnter();
	std::pair<std::pair<unsigned, unsigned>, unsigned short> GetCoordExit();



	/*** GETTERS ***/
	CRoom GetEnter(void);
	CRoom GetExit(void);

	std::vector<std::vector<CRoom>> GetLabyrinthe() const;


};
