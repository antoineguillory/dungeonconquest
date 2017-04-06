#include "Spell.h"
#include <string>
#include <iostream>
using namespace std;

/***  Constructeur / Destructeur ***/

Spell::Spell(const string & Name, const float & Cooldown, const float & Damages, const float & Range, const string & Texture) 
			: m_Name(Name), m_Cooldown(Cooldown), m_Damages (Damages), m_Range(Range)
{
	m_Launched = false;
	m_Texture = new sf::Texture();
	sf::Texture TextureSpell;
	if (!TextureSpell.loadFromFile(Texture))
	{
		std::cout << "Error loading spell's texture" << std::endl;
	}
	else
	{
		std::cout << "Loading spell's texture successful" << std::endl;
	}
	//m_Texture = &Texture;
	m_Texture = &TextureSpell;
	m_Sprite.setTexture(*m_Texture);

}


Spell::~Spell()
{
}

/*** Methodes ***/

void Spell::Launch ()
{
	/*int x = Play.GetSprite().getPosition().x;
	int y = Play.GetSprite().getPosition().y;
	m_Launched = true;
	cout << "Launched ! " << endl;*/
}

void Spell::Animate(const int & x, const int & y)
{
	if (m_Launched)
	{
		m_Sprite.move(1,1);
		if (m_Sprite.getPosition().x == 2 * x && m_Sprite.getPosition().y == 2 * y)
			m_Launched = false;
	}
}