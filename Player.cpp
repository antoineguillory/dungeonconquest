#include "Player.h"
#include "Spell.h"
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

Player::Player(const string & Name ) : m_Name(Name)
{

	// On active la possibilité de déplacement
	m_MovableTop = true;
	m_MovableBottom = true;
	m_MovableRight = true;
	m_MovableLeft = true;

	Anim = sf::Vector2i(1, Down);
	sf::Texture TexturePlayer;

	// Affectation de l'image à la texture
	if (!TexturePlayer.loadFromFile("Sprites/perso2.png"))
	{
		std::cout << "Error loading player.png" << std::endl;
	}
	else
	{
		std::cout << "Loading player.png successful" << std::endl;
	}

	// Utilisation d'un pointeur obligatoire afin de ne pas "perdre" la texture lors de l'affichage
	// ou la gestion du sprite
	m_Texture = new sf::Texture();
	*m_Texture = TexturePlayer;
	sf::Sprite Sprite;

	// Affectation de la texture au sprite (utilisation du pointeur donnée membre nécéssaire)
	Sprite.setTexture(*m_Texture);
	m_Sprite = Sprite;
	m_Sprite.setPosition(500, 500);
	m_Sprite.setTextureRect(sf::IntRect(0, 0, (*m_Texture).getSize().x / 3, (*m_Texture).getSize().y / 4));




}


Player::~Player()
{
	delete m_Texture;
}

/*** Methodes ***/

void Player::Move()
{
	
	// Methode permettant le déplacement du sprite du personnage
	//	  Il est important d'utiliser des if et non pas des else if afin de 
	//    pouvoir gérer le déplacement en diagonale (tUP+Left pressées par ex)

	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Z) && m_MovableTop)
	{
		Anim.y = Up;
		setPosY(-1.5);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) && m_MovableBottom)
	{
		Anim.y = Down;
		setPosY(1.5);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D) && m_MovableLeft)
	{
		Anim.y = Right;
		setPosX(1.5);

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q) && m_MovableRight)
	{
		Anim.y = Left;
		setPosX(-1.5);
	}
	
	
}
	
void Player::Animation()
{

		Anim.x++;
		if (Anim.x == 3) Anim.x = 0;
		if (Anim.x * ((*m_Texture).getSize().x / 3) + 1 >= (*m_Texture).getSize().x)
			Anim.x = 0;

		m_Sprite.setTextureRect(sf::IntRect(Anim.x * ((*m_Texture).getSize().x / 3), Anim.y * ((*m_Texture).getSize().y / 4),
													 (*m_Texture).getSize().x / 3, 
											         (*m_Texture).getSize().y / 4));
}

void Player::UpdataAnimation(sf::Clock* & Clock, const float & Time)
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Z) ||
		sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) ||
		sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q) ||
		sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{ 
		if ((*Clock).getElapsedTime().asMilliseconds() >= Time)
		{
			cout << (*Clock).getElapsedTime().asMilliseconds() << endl;
			Animation();
			(*Clock).restart();
		}
	}
}

void Player::LearnSpell()
{
	//m_Spells.push_back(SpellToTeach);
}
void Player::setPosAfterPassDoor(const int & posDoor)
{

	/** SERT DE DEBUGGAGE **/
		//--> FAIRE CLASSE AUTOMOOVER
	if (posDoor == 2)
		setPosition(sf::VideoMode::getDesktopMode().width / 2, sf::VideoMode::getDesktopMode().height - 50);
	if (posDoor == 3)
		setPosition(sf::VideoMode::getDesktopMode().width / 2 - 20, 30);
	if (posDoor == 1)
		setPosition(30, sf::VideoMode::getDesktopMode().height / 2);
	if (posDoor == 0)
		setPosition(sf::VideoMode::getDesktopMode().width - 30, sf::VideoMode::getDesktopMode().height / 2 - 20);


}
void Player::setMovable(const bool & movable, const int & direction)
{
	// Bloqué au nord
	if (direction == 2)
		m_MovableTop = movable;
	// Bloqué au sud
	if (direction == 3)
		m_MovableBottom = movable;
	// Bloqué a l'est
	if (direction == 1)
		m_MovableLeft = movable;
	// Bloqué à l'ouest
	if (direction == 0)
		m_MovableRight = movable;
}
/*** Setters ***/
void Player::setPosX(const float & VelX)
{

	// Applique le déplacement en X sur le sprite du personnage
	m_Sprite.move(VelX, 0);


}


void Player::setPosY(const float & VelY)
{

	// Applique le déplacement en Y sur le sprite du personnage
	m_Sprite.move(0, VelY);

}

void Player::setPosition(const int & x, const int & y)
{
	m_Sprite.setPosition(x, y);
}

sf::Sprite Player::GetSprite() const { return m_Sprite; }