#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Spell.h"
#include "IEntity.h"
#include <string>

class Player 
{
	/*** Donnes membres ***/
	std::string m_Name;
	sf::Texture* m_Texture;
	sf::Sprite m_Sprite;
	enum Dir {Down, Left, Right, Up};
	sf::Vector2i Anim;
	bool m_MovableTop;
	bool m_MovableBottom;
	bool m_MovableLeft;
	bool m_MovableRight;
	bool isAttacking;
	bool cooldownAttack;
//	std::vector <Spell> VSpells;
public:

	/*** Constructeur / Destructeur ***/
	Player(const std::string & Name);
	~Player();

	/*** Methodes ***/
	void Move(void);
	void Animation();
	void UpdataAnimation(sf::Clock*  & Clock);
	void LearnSpell();
	void setPosAfterPassDoor(const int & posDoor);
	void attack();

	/*** Getters ***/
	sf::Sprite GetSprite() const;
	float getPosX(void);
	float getPosY(void);

	/*** Setters ***/
	void setMovable(const bool & movable, const int & direction);
	void setPosX(const float & VelX);
	void setPosY(const float & VelX);
	void setPosition(const int & x, const int & y);
};


