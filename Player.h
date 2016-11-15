#pragma once
#include "C:\SFML-2.4.0VS15\include\SFML\Graphics\Sprite.hpp"
#include <SFML/Graphics.hpp>
#include <vector>
#include "Spell.h"

#include <string>

class Player
{
	/*** Donnes membres ***/
	std::string m_Name;
	sf::Texture* m_Texture;
	sf::Sprite m_Sprite;
	enum Dir {Down, Left, Right, Up};
	sf::Vector2i Anim;
//	std::vector <Spell> VSpells;
public:

	/*** Constructeur / Destructeur ***/
	Player(const std::string & Name);
	~Player();

	/*** Methodes ***/
	void Move(void);
	void Animation();
	void UpdataAnimation(sf::Clock*  & Clock, const float & Seconds);
	void LearnSpell();

	/*** Getters ***/
	sf::Sprite GetSprite() const;

	/*** Setters ***/
	void setPosX(const float & VelX);
	void setPosY(const float & VelX);
};


