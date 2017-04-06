#include "Buton.h"

using namespace std;

bool CButon::clicListener()
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		if (sf::Mouse::getPosition().x > m_Sprite.getPosition().x && sf::Mouse::getPosition().x < m_Sprite.getPosition().x + m_Sprite.getLocalBounds().width && enabled)
			if (sf::Mouse::getPosition().y > m_Sprite.getPosition().y && sf::Mouse::getPosition().y < m_Sprite.getPosition().y + m_Sprite.getLocalBounds().height)
				return true;
		return false;
	}
}

void CButon::setPosition(const float & x, const float & y)
{
	m_Sprite.setPosition(x, y);
}

void CButon::setSprite(const std::string & path)
{
	enabled = true;
	sf::Texture TextureBoutton;

	// Affectation de l'image à la texture
	if (!TextureBoutton.loadFromFile(path))
	{
		std::cout << "Error loading " + path + ' ' << std::endl;
	}
	else
	{
		std::cout << "Error loading " + path + ' ' << std::endl;
	}

	// Utilisation d'un pointeur obligatoire afin de ne pas "perdre" la texture lors de l'affichage
	// ou la gestion du sprite
	m_Texture = new sf::Texture();
	*m_Texture = TextureBoutton;
	sf::Sprite Sprite;

	// Affectation de la texture au sprite (utilisation du pointeur donnée membre nécéssaire)
	Sprite.setTexture(*m_Texture);
	m_Sprite = Sprite;
}

void CButon::draw(sf::RenderWindow & window)
{
	window.draw(rect);
}

void CButon::activate(const bool & enabled)
{
	this->enabled = enabled;
}

CButon::CButon()
{
	enabled = true;

	sf::Texture TextureBoutton;

	// Affectation de l'image à la texture
	if (!TextureBoutton.loadFromFile("Sprites/button.png"))
	{
		std::cout << "Error loading button.png" << std::endl;
	}
	else
	{
		std::cout << "Loading button.png successful" << std::endl;
	}

	// Utilisation d'un pointeur obligatoire afin de ne pas "perdre" la texture lors de l'affichage
	// ou la gestion du sprite
	m_Texture = new sf::Texture();
	*m_Texture = TextureBoutton;
	sf::Sprite Sprite;

	// Affectation de la texture au sprite (utilisation du pointeur donnée membre nécéssaire)
	Sprite.setTexture(*m_Texture);
	m_Sprite = Sprite;

}



CButon::~CButon()
{
}

sf::Sprite CButon::getSprite()
{
	return m_Sprite;
}
