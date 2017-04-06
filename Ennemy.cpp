#include "Ennemy.h"

using namespace std;


/*** CONSTRUCTEUR / DESTRUCTEURS ***/
Ennemy::Ennemy()
{
	
}
Ennemy::Ennemy(const string & Name) : m_Name(Name)
{

	Anim = sf::Vector2i(1, Down);

	sf::Texture TextureEnnemy;

	// Affectation de l'image à la texture
	if (!TextureEnnemy.loadFromFile("Sprites/Ennemi.png"))
	{
		std::cout << "Error loading Ennemi.png" << std::endl;
	}
	else
	{
		std::cout << "Loading Ennemi.png successful" << std::endl;
	}

	// Utilisation d'un pointeur obligatoire afin de ne pas "perdre" la texture lors de l'affichage
	// ou la gestion du sprite
	m_Texture = new sf::Texture();
	*m_Texture = TextureEnnemy;
	sf::Sprite Sprite;

	// Affectation de la texture au sprite (utilisation du pointeur donnée membre nécéssaire)
	Sprite.setTexture(*m_Texture);
	m_Sprite = Sprite;
	m_Sprite.setPosition(sf::Vector2f(342, 10));
	m_Sprite.setTextureRect(sf::IntRect(0, 0, (*m_Texture).getSize().x / 3, (*m_Texture).getSize().y / 4));
}

Ennemy::~Ennemy()
{
	delete m_Texture;
}

/*** METHODES ***/

void Ennemy::Animation()
{

	Anim.x++;
	if (Anim.x == 3) Anim.x = 0;
	if (Anim.x * ((*m_Texture).getSize().x / 3) + 1 >= (*m_Texture).getSize().x)
		Anim.x = 0;

	m_Sprite.setTextureRect(sf::IntRect(Anim.x * ((*m_Texture).getSize().x / 3), Anim.y * ((*m_Texture).getSize().y / 4),
		(*m_Texture).getSize().x / 3,
		(*m_Texture).getSize().y / 4));
}
void Ennemy::UpdataAnimation(sf::Clock* & Clock)
{
	const double Time = 60;
	if ((*Clock).getElapsedTime().asMilliseconds() >= Time)
	{

	//	cout << (*Clock).getElapsedTime().asSeconds() << endl;
		Animation();

		(*Clock).restart();
	}
}
void Ennemy::MoveAuto(Player & p)
{

	if (p.getPosY() <= getPosY() + p.GetSprite().getLocalBounds().height / 1.5)
	{
		Anim.y = Up;
		setPosY(-1);

	}
	if (p.getPosY() >= getPosY() + p.GetSprite().getLocalBounds().height / 1.5)
	{
		Anim.y = Down;
		setPosY(1);
	}
	if (p.getPosX() <= getPosX())
	{
		Anim.y = Left;
		setPosX(-1);

	}
	if (p.getPosX() >= getPosX())
	{
		Anim.y = Right;
		setPosX(1);
	}
}

/*** Setters ***/
void Ennemy::setPosX(const float & ValX)
{

	// Applique le déplacement en X sur le sprite du personnage
	m_Sprite.move(ValX, 0);
}

void Ennemy::setPosY(const float & ValY)
{

	// Applique le déplacement en Y sur le sprite du personnage
	m_Sprite.move(0, ValY);

}
sf::Sprite Ennemy::GetSprite() const
{ 
	return m_Sprite; 
}

float Ennemy::getPosX() {
	return m_Sprite.getPosition().x;
}
float Ennemy::getPosY() {
	return m_Sprite.getPosition().y;
}
