#include "Room.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Floor.h"
#include <vector>
#include "WallForRoom.h"
using namespace std;

CRoom::CRoom(const unsigned & Id) noexcept  : IdGen(Id)
{
	m_Nord = nullptr;
	m_Sud = nullptr;
	m_Est = nullptr;
	m_Ouest = nullptr;
	
}

CRoom::CRoom() noexcept
{	


}
CRoom::~CRoom(void) noexcept
{}

/*** GETTERS ***/
CRoom *CRoom::GetOuest() const noexcept
{
	return m_Ouest;
}
CRoom *CRoom::GetEst() const noexcept
{
	return m_Est;
}
CRoom *CRoom::GetSud() const noexcept
{
	return m_Sud;
}
CRoom *CRoom::GetNord() const noexcept
{
	return m_Nord;
}
unsigned CRoom::GetId() const noexcept
{
	return IdGen;
}


/**** SETTERS ***/
void CRoom::setNord(const CRoom & Nord) noexcept
{
	m_Nord = new CRoom(Nord);

}
void CRoom::setSud(const CRoom & Sud) noexcept
{
	m_Sud = new CRoom(Sud);

}
void CRoom::setEst(const CRoom & Est) noexcept
{
	m_Est = new CRoom(Est);
}
void CRoom::setOuest(const CRoom & Ouest) noexcept
{
	m_Ouest = new CRoom(Ouest);

}
void CRoom::setNord() noexcept
{
	m_Nord = nullptr;

}
void CRoom::setSud() noexcept
{
	m_Sud = nullptr;

}
void CRoom::setEst() noexcept
{
	m_Est = nullptr;
}
void CRoom::setOuest() noexcept
{
	m_Ouest = nullptr;

}

void CRoom::setId(const unsigned & Id) noexcept
{
	IdGen = Id;

}
/*** METHODES ***/
void CRoom::DrawWalls(sf::RenderWindow & Window, const unsigned & PosX, const unsigned & PosY, CWallForRoom & walls, CDoorForRoom & doors) noexcept
{

	// Gestion de l'affichage des murs de la pièce

		// Mur nord
	Window.draw(walls.getWalls()[2].getSprite());
	if (m_Nord) {
		doors.setOpen(2, true);
		Window.draw(doors.getDoors()[2].getSprite());
	}
	else {
		doors.setOpen(2, false);
	}

		// Mur sud
	Window.draw(walls.getWalls()[3].getSprite());
	if (m_Sud) {
		doors.setOpen(3, true);
		Window.draw(doors.getDoors()[3].getSprite());
	}
	else {
		doors.setOpen(3, false);
	}

		// Mur est
	Window.draw(walls.getWalls()[0].getSprite());
	if (m_Est) {
		doors.setOpen(0, true);
		Window.draw(doors.getDoors()[0].getSprite());
	}
	else {
		doors.setOpen(0, false);
	}

		// Mur ouest
	Window.draw(walls.getWalls()[1].getSprite());
	if (m_Ouest) {
		doors.setOpen(1, true);
		Window.draw(doors.getDoors()[1].getSprite());
	}
	else {
		doors.setOpen(1, false);
	}

}



