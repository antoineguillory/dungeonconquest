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
			if (!TexturePlayer.loadFromFile("Sprites/leftdoor.png"))
				cout << "Error loading leftdoor.png" << endl;
			else
				cout << "Loading leftdoor.png successful" << endl;

		}
		if (m_Direction == VERTICAL_RIGHT)
		{
			if (!TexturePlayer.loadFromFile("Sprites/rightdoor.png"))
				cout << "Error loading rightdoor.png" << endl;
			else
				cout << "Loading rightdoor.png successful" << endl;

		}
		if (m_Direction == HORIZONTAL_TOP)
		{
			if (!TexturePlayer.loadFromFile("Sprites/topdoor.png"))
				cout << "Error loading topdoor.png" << endl;
			else
				cout << "Loading topdoor.png successful" << endl;

		}
		if (m_Direction == HORIZONTAL_BOTTOM)
		{
			if (!TexturePlayer.loadFromFile("Sprites/bottomdoor.png"))
				cout << "Error loading bottomdoor.png" << endl;
			else
				cout << "Loading bottomdoor.png successful" << endl;
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
