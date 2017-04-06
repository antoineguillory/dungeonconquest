#include "WallForRoom.h"


using namespace std;
CWallForRoom::CWallForRoom()
{
	AddWalls();
}


CWallForRoom::~CWallForRoom()
{
}
void CWallForRoom::colide(Player & player) {

	for (CWall w : m_Walls) {
		// Colision du mur sud
		if (w.getDirection() == 3)
			if (player.GetSprite().getPosition().y > sf::VideoMode::getDesktopMode().height - w.getSprite().getLocalBounds().height * 3)
				player.setMovable(false, 3);
			else 
				player.setMovable(true, 3);

		// Colision du mur nord
		if (w.getDirection() == 2)
			if (player.GetSprite().getPosition().y < w.getSprite().getLocalBounds().height)
				player.setMovable(false, 2); 
			else
				player.setMovable(true, 2);

		// Colision du mur est
		if (w.getDirection() == 1)
			if (player.GetSprite().getPosition().x >   sf::VideoMode::getDesktopMode().width - w.getSprite().getLocalBounds().width * 2)
				player.setMovable(false, 1);
			else
				player.setMovable(true, 1);

		// Colision du mur ouest
		if (w.getDirection() == 0)
			if (player.GetSprite().getPosition().x < w.getSprite().getLocalBounds().width)
				player.setMovable(false,0);
			else
				player.setMovable(true, 0);

	}
}


void CWallForRoom::AddWalls()
{

	



	// Ajout du mur est
	CWall wallEast;
	wallEast.setDirection(1);
	wallEast.LoadImage();
	wallEast.setPosition(sf::VideoMode::getDesktopMode().width - wallEast.getSprite().getLocalBounds().width, 0);
	m_Walls.push_back(wallEast);


	// Ajout du mur ouest
	CWall wallWest;
	wallWest.setDirection(0);
	wallWest.LoadImage();
	wallWest.setPosition(0, 0);
	m_Walls.push_back(wallWest);

	// Ajout du mur nord 
	CWall wallNorth;
	wallNorth.setDirection(2);
	wallNorth.LoadImage();
	wallNorth.setPosition(0, 0);
	m_Walls.push_back(wallNorth);

	// Ajout du mur sud
	CWall wallSouth;
	wallSouth.setDirection(3);
	wallSouth.LoadImage();
	wallSouth.setPosition(0, sf::VideoMode::getDesktopMode().height - wallSouth.getSprite().getLocalBounds().height);
	m_Walls.push_back(wallSouth);

	
}

std::vector<CWall> CWallForRoom::getWalls(void)
{
	return m_Walls;
}
