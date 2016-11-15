#include "Player.h"
#include "Spell.h"
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

Player::Player(const string & Name ) : m_Name(Name)
{

	Anim = sf::Vector2i(1, Down);
	sf::Texture TexturePlayer;

	// Affectation de l'image à la texture
	if (!TexturePlayer.loadFromFile("Sprites/perso.png"))
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
	m_Sprite.setTextureRect(sf::IntRect(0, 0, (*m_Texture).getSize().x / 3, (*m_Texture).getSize().y / 4));

	// Apprentissage du sort de base
	//Spell Sp("Cut", 0.1, 10, 4, "dsdsds/dsqdsq.png");
//	LearnSpell(Sp);


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

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Z))
	{
		Anim.y = Up;
		setPosY(-0.65);

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		Anim.y = Down;
		setPosY(0.65);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		Anim.y = Right;
		setPosX(0.65);

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q))
	{
		Anim.y = Left;
		setPosX(-0.65);
	}
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		//m_Spells[0].Launch(this);
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

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A) ||
		sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) ||
		sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q) ||
		sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{ 
		if ((*Clock).getElapsedTime().asSeconds() >= Time)
		{

			cout << (*Clock).getElapsedTime().asSeconds() << endl;
			Animation();

			(*Clock).restart();
		}
	}
	else
	{
		m_Sprite.setTextureRect(sf::IntRect(0, Anim.y * ((*m_Texture).getSize().y / 4),
			(*m_Texture).getSize().x / 3,
			(*m_Texture).getSize().y / 4));
	}
}

void Player::LearnSpell()
{
	//m_Spells.push_back(SpellToTeach);
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

sf::Sprite Player::GetSprite() const { return m_Sprite; }