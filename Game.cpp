#include "Game.h"
#include <string>
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
using namespace std;


/*** Constructeur / Destructeur ***/

Game::Game(const string & Title ) : m_Title(Title)
{
	
	create(sf::VideoMode (sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), Title);
	setFramerateLimit(60);	
	

}


Game::~Game()
{
}

/*** Methodes ***/



void Game::Draw(sf::CircleShape*  rect)
{
	vcercle.push_back(*rect);
	cout << "Draw OK" << endl;
	for (int i = 0; i < vcercle.size(); ++i)
		this->draw(*rect);
}

