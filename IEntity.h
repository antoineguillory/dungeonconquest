#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Spell.h"

#include <string>

class IEntity
{
public:
	virtual void Move(void);
	virtual void Animation(void);
	virtual void UpdataAnimation(sf::Clock*  & Clock, const float & Seconds);
	~IEntity();
};

