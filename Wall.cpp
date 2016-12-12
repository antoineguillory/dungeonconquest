#include "Wall.h"
#include <iostream>

using namespace std;

void CWall::LoadImage()
{
	{
		sf::Texture TexturePlayer;

		// Affectation de l'image à la texture tout en testant l'orrientation du mur
		// A noter que si on rentre de la merde en paramètre, la fonction ne fait rien donc possibilité d'erreur :')
		if (m_Direction == VERTICAL_LEFT || m_Direction == VERTICAL_RIGHT)
		{
			if (!TexturePlayer.loadFromFile("Sprites/VerticalWall.png"))
				cout << "Error loading VerticalWall.png" << endl;
			else
				cout << "Loading VerticalWall.png successful" << endl;

		}
		if (m_Direction == HORIZONTAL_TOP || m_Direction == HORIZONTAL_BOTTOM)
		{
			if (!TexturePlayer.loadFromFile("Sprites/HorizontalWall.png"))
				cout << "Error loading HorizontalWall.png" << endl;
			else
				cout << "Loading HorizontalWall.png successful" << endl;

		}
		// Utilisation d'un pointeur obligatoire afin de ne pas "perdre" la texture lors de l'affichage
		// ou la gestion du sprite
		m_Texture = new sf::Texture();
		*m_Texture = TexturePlayer;
		sf::Sprite Sprite;

		// Affectation de la texture au sprite (utilisation du pointeur donnée membre nécéssaire)
		Sprite.setTexture(*m_Texture);
		m_Sprite = Sprite;
	}
}

void CWall::InitWalls(void)
{
	if (ROOM_WALLS.size() == 0)
	{
		//MUR NORD
		CWall WallToDraw;
		WallToDraw.setDirection(2);
		WallToDraw.LoadImage();
		ROOM_WALLS.push_back(WallToDraw);

		//MUR SUD
		WallToDraw.setDirection(3);
		WallToDraw.LoadImage();
		ROOM_WALLS.push_back(WallToDraw);

		//MUR EST
		WallToDraw.setDirection(1);
		WallToDraw.LoadImage();
		ROOM_WALLS.push_back(WallToDraw);

		//MUR OUEST
		WallToDraw.setDirection(0);
		WallToDraw.LoadImage();
		ROOM_WALLS.push_back(WallToDraw);
	}
}
void CWall::setPosition(const int & x, const int & y) {
	m_Sprite.setPosition(x, y);
}

/*** CONSTRUCTEUR / DESTRUCTEUR ***/
CWall::CWall()
{

}


CWall::~CWall()
{
}

/*** GETTERS ***/
sf::Sprite CWall::getSprite()
{
	return m_Sprite;
}

vector<CWall> CWall::getRoomWalls()
{
	return ROOM_WALLS;
}
int CWall::getDirection() {
	return m_Direction;
}
/*** SETTERS ***/
void CWall::setDirection(const int & Direction)
{
	m_Direction = Direction;
}
