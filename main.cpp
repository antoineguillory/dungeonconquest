#include "Player.h"
#include "Ennemy.h"
#include <vector>
#include <iostream>
#include <functional> // std::bind
using namespace std;

/* Essayer de faire un sf clock our tous avec ajout de la diff stocke dans sf time*/

/*** Gestion de la fenetre du jeu ***/
void Game()
{
	// Class game à envisager
	sf::RenderWindow  window;
	window.create(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "Game");
	Player player("player");
	vector<Ennemy> ennemis;//Pb lors d'ajout dans ennemi
	Ennemy ennemi("ennemi");

	sf::Clock* UpdateTime = new sf::Clock();
	(*UpdateTime).restart();
	
	sf::Thread threadAnim(bind(&Ennemy::UpdataAnimation, &ennemi,UpdateTime));
	
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
		
		ennemi.MoveAuto(player);
		
		threadAnim.launch();
		player.UpdataAnimation(UpdateTime);
		ennemi.UpdataAnimation(UpdateTime);
		window.draw(player.GetSprite());
		window.draw(ennemi.GetSprite());
		window.display();
	}
	threadAnim.wait();
}


int main()
{

	Game();

}



