#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Player.h"
#include "Spell.h"
#include "Floor.h"
#include <vector>
#include <iostream>
#include "DoorForRoom.h"
#include "Ground.h"
#include <SFGUI/SFGUI.hpp>
#include <SFGUI/Widgets.hpp>
#include "WindowsGUI.h"
#include "Ennemy.h"
#include <functional> // std::bind
#include "Buton.h"
#include <SFML/Audio.hpp>
using namespace std;



// Gestion du son
void playMusic(sf::SoundBuffer &buf, string file)
{
	sf::Music sound;

	// charge la musique dans le buffer
	if (!sound.openFromFile(file))
		return;
	// creer un Sound et le lie au buffer
	//ound.setBuffer(buf);

	// joue la musique en boucle
	sound.setLoop(true);
	sound.play();
}


/*** Gestion de l'affichage du jeu ***/
void Game()
{
	srand(time(NULL));
	// Fenetre
	sf::RenderWindow window;
//	WindowsGUI windGUI(window);
	window.create(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "Game", sf::Style::Default);
//	sfg::SFGUI* windowIHM = windGUI.getGUI();

	CButon bt;
	// Personnage principal
	Player player("dff");
	
	
	// Ennemi
	Ennemy ennemi("ennemi");

	// Etage
	int posX = 0;
	int posY = 0;
	CFloor floor (4,4);
	floor.GenLaby();
	floor.AfficherDebug();
	
	// Thread de l'animation
	sf::Clock* UpdateTime = new sf::Clock ();
	(*UpdateTime).restart();

	// Thread annimation de l'ennemi
	sf::Thread threadAnim(bind(&Ennemy::UpdataAnimation, &ennemi, UpdateTime));

	window.setFramerateLimit(2000);

	/// On crée les portes / murs ici pour éviter une génération massive de texture, et donc des lags qui rendent le jeu injouable
		// Mur des pièces
	CWallForRoom walls;

		// Portes des pièces
	CDoorForRoom doors;

	// Sol
	CGround ground;
	
	// Son
	sf::Music sound;

	// charge la musique dans le buffer
	if (!sound.openFromFile("Song/MainSong.ogg"))
		cout << "NOT FOUND" << endl;

	// joue la musique en boucle
	sound.setLoop(true);
	sound.play();
	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		walls.colide(player);
		doors.Colide(player);
		if (doors.PassTheDoor(player) == 0)
		{
			if (posX > 0)
				--posX;
			//player.setPosition(500, 500);
			player.setPosAfterPassDoor(0);

		}
		else if (doors.PassTheDoor(player) == 1)
		{
			++posX;
			//player.setPosition(500, 500);
			player.setPosAfterPassDoor(1);
		}
		else if (doors.PassTheDoor(player) == 2)
		{
			if (posY > 0)
				--posY;
			cout << posY << ' ';
			//player.setPosition(500, 500);
			player.setPosAfterPassDoor(2);
		}
		else if (doors.PassTheDoor(player) == 3)
		{
			++posY;
			cout << posY << ' ';
			//player.setPosition(500, 500);
			player.setPosAfterPassDoor(3);

		}
		//windowIHM->Display(window);


		window.clear();

		player.Move();
		ennemi.MoveAuto(player);

		threadAnim.launch();

		player.UpdataAnimation(UpdateTime);

		window.draw(ground.getSprite());
		floor.GetLabyrinthe()[posX][posY].DrawWalls(window, posX, posY, walls, doors);

		window.draw(player.GetSprite());
		window.draw(ennemi.GetSprite());
		window.draw(bt.getSprite());
		if (bt.clicListener()) window.close();

		window.display();
	}
	threadAnim.wait();


}


int main()
{

	Game();
	
}



