#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Player.h"
#include "Spell.h"
#include <vector>
#include <iostream>
using namespace std;




/*** Gestion de la fenetre du jeu ***/
void Game()
{
	// Class game à envisager
	sf::RenderWindow  window;
	window.create(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "Game");
	sf::CircleShape shape(10.f);
	Player player("dff");
	shape.setFillColor(sf::Color::Green);

	sf::Clock* UpdateTime = new sf::Clock ();
	(*UpdateTime).restart();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		player.Move();
		
		player.UpdataAnimation(UpdateTime,0.2);
		window.draw(player.GetSprite());
		window.display();
	}
}


int main()
{

	Game();
	
}



