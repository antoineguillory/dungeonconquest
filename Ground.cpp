#include "Ground.h"
#include <iostream>

using namespace std;


sf::Sprite CGround::getSprite()
{
	return m_Sprite;
}

CGround::CGround()
{
	sf::Texture TexturePlayer;

	// Affectation de l'image à la texture
	if (!TexturePlayer.loadFromFile("Sprites/ground.jpg"))
	{
		std::cout << "Error loading ground.png" << std::endl;
	}
	else
	{
		std::cout << "Loading ground.png successful" << std::endl;
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


CGround::~CGround()
{
}
