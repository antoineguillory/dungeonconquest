#include "Door.h"
#include <iostream>


using namespace std;

void CDoor::LoadImage()
{
	{
		sf::Texture TexturePlayer;

		// Affectation de l'image à la texture tout en testant l'orrientation du mur
		// A noter que si on rentre de la merde en paramètre, la fonction ne fait rien donc possibilité d'erreur :')
		if (m_Direction == VERTICAL_LEFT)
		{
			if (!TexturePlayer.loadFromFile("Sprites/leftdoor.jpg"))
				cout << "Error loading leftdoor.jpg" << endl;
			else
				cout << "Loading leftdoor.jpg successful" << endl;

		}
		if (m_Direction == VERTICAL_RIGHT)
		{
			if (!TexturePlayer.loadFromFile("Sprites/rightdoor.jpg"))
				cout << "Error loading rightdoor.jpg" << endl;
			else
				cout << "Loading rightdoor.jpg successful" << endl;

		}
		if (m_Direction == HORIZONTAL_TOP)
		{
			if (!TexturePlayer.loadFromFile("Sprites/topdoor.jpg"))
				cout << "Error loading topdoor.jpg" << endl;
			else
				cout << "Loading topdoor.jpg successful" << endl;

		}
		if (m_Direction == HORIZONTAL_BOTTOM)
		{
			if (!TexturePlayer.loadFromFile("Sprites/bottomdoor.jpg"))
				cout << "Error loading bottomdoor.jpg" << endl;
			else
				cout << "Loading bottomdoor.jpg successful" << endl;
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


void CDoor::setPosition(const int & x, const int & y) {
	m_Sprite.setPosition(x, y);
}

/*** CONSTRUCTEUR / DESTRUCTEUR ***/
CDoor::CDoor()
{

}


CDoor::~CDoor()
{
}

/*** GETTERS ***/
sf::Sprite CDoor::getSprite()
{
	return m_Sprite;
}

int CDoor::getDirection()
{
	return m_Direction;
}

bool CDoor::isOpen()
{
	return m_Open;
}



/*** SETTERS ***/
void CDoor::setDirection(const int & Direction)
{
	m_Direction = Direction;
}

void CDoor::setOpen(const bool & open)
{
	m_Open = open;
}
