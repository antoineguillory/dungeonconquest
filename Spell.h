#pragma once
#include <string>
#include "Player.h"
#include <SFML/Graphics.hpp>

class Spell
{
	/*** Donnees Membres ***/
	std::string m_Name;
	float m_Cooldown;
	float m_Damages;
	float m_Range;
	sf::Texture* m_Texture;
	sf::Sprite m_Sprite;
	bool m_Launched;
  public:

	/*** Constructeur / Destructeur ***/
	Spell(const std::string & Name, const float & Cooldown, const float & Damages, const float & Range, const std::string & Texture);
	~Spell();
	
	/*** Methodes ***/
	void Launch();
	void Animate(const int & x, const int & y);
};

