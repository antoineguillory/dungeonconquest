#pragma once
#include "C:\SFML-2.4.0VS15\include\SFML\Graphics\RenderWindow.hpp"
#include <string>
#include <SFML/Graphics.hpp>

class Game : public sf::RenderWindow
{

	/*** Donnees membres ***/
	std::string m_Title;
	std::vector <sf::CircleShape> vcercle;
  public:

	/*** Constructeur / Destructeur ***/
	Game(const std::string & Title);
	~Game();

	/*** Methodes ***/
	void Draw(sf::CircleShape* rect);
};

