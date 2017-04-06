#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
#include <iostream>
class Ennemy
{

	std::string m_Name;
	sf::Texture* m_Texture;
	sf::Sprite m_Sprite;
	enum Dir { Down, Left, Right, Up };
	sf::Vector2i Anim;
public:
	/*** Constructeur / Destructeur ***/
	Ennemy(const std::string & Name);
	Ennemy::Ennemy();
	~Ennemy();

	/*** Methodes ***/
	void MoveAuto(Player & p);
	void Animation(void);
	void UpdataAnimation(sf::Clock* & Clock);

	/*** Getters ***/
	sf::Sprite GetSprite(void) const;
	float getPosX(void);
	float getPosY(void);

	/*** Setters ***/
	void setPosX(const float & ValX);
	void setPosY(const float & ValY);
};

