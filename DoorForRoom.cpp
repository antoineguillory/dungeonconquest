#include "DoorForRoom.h"
#include "stdlib.h"

using namespace std;

CDoorForRoom::CDoorForRoom()
{
	AddDoors();
}


CDoorForRoom::~CDoorForRoom()
{
}

void CDoorForRoom::Colide(Player & player) {

	for (CDoor d : m_Doors) {
		// Colision porte sud
		if (d.getDirection() == 3 && d.isOpen())
			if (player.GetSprite().getPosition().y > sf::VideoMode::getDesktopMode().height - d.getSprite().getLocalBounds().height * 3
				&& d.getSprite().getPosition().x - player.GetSprite().getLocalBounds().width / 3 < player.GetSprite().getPosition().x
				&&  player.GetSprite().getPosition().x < d.getSprite().getPosition().x + d.getSprite().getLocalBounds().width - player.GetSprite().getLocalBounds().width / 2)
			{
				player.setMovable(true, 3);
			}

		// Colision porte nord
		if (d.getDirection() == 2 && d.isOpen())
			if (player.GetSprite().getPosition().y < d.getSprite().getLocalBounds().height
				&& d.getSprite().getPosition().x - player.GetSprite().getLocalBounds().width / 3 < player.GetSprite().getPosition().x
				&&  player.GetSprite().getPosition().x < d.getSprite().getPosition().x + d.getSprite().getLocalBounds().width - player.GetSprite().getLocalBounds().width / 2)
			{
				player.setMovable(true, 2);
			}
		
		// Colision porte est
		if (d.getDirection() == 1 && d.isOpen())
			if (player.GetSprite().getPosition().x > sf::VideoMode::getDesktopMode().width - d.getSprite().getLocalBounds().width * 2
				&& d.getSprite().getPosition().y - player.GetSprite().getLocalBounds().height / 3 < player.GetSprite().getPosition().y
				&& player.GetSprite().getPosition().y < d.getSprite().getPosition().y + d.getSprite().getLocalBounds().height - player.GetSprite().getLocalBounds().height / 2)
			{
				player.setMovable(true, 1);
			}
		
		// Colision porte ouest
		if (d.getDirection() == 0 && d.isOpen())
			if (player.GetSprite().getPosition().x < d.getSprite().getLocalBounds().width
				&& d.getSprite().getPosition().y - player.GetSprite().getLocalBounds().height / 3 < player.GetSprite().getPosition().y
				&& player.GetSprite().getPosition().y < d.getSprite().getPosition().y + d.getSprite().getLocalBounds().height - player.GetSprite().getLocalBounds().height / 2)
			{
				player.setMovable(true, 0);
			}
	}
}

void CDoorForRoom::setOpen(const int & position, bool open)
{
	if (position > 3) return;
	m_Doors[position].setOpen(open);
}

int CDoorForRoom::PassTheDoor(Player & player)
{
		
	if (player.GetSprite().getPosition().x < 0)
	{
		return 0;
	}
	if (player.GetSprite().getPosition().x > sf::VideoMode::getDesktopMode().width)
	{
		return 1;
	}
	if (player.GetSprite().getPosition().y < 0)
	{
		return 2;
	}
	if (player.GetSprite().getPosition().y > sf::VideoMode::getDesktopMode().height)
	{
		return 3;
	}

	return -1;
	
}

void CDoorForRoom::AddDoors()
{
	int randomPos;

	CDoor Door;
	int limite;

	// Ajout porte est
	Door.setDirection(1);
	Door.LoadImage();
	limite = sf::VideoMode::getDesktopMode().height - Door.getSprite().getLocalBounds().height;
	randomPos = (rand() % limite) + 1;
	Door.setPosition(sf::VideoMode::getDesktopMode().width - Door.getSprite().getLocalBounds().width, randomPos);
	m_Doors.push_back(Door);


	// Ajout porte ouest
	Door.setDirection(0);
	Door.LoadImage();
	limite = sf::VideoMode::getDesktopMode().height - Door.getSprite().getLocalBounds().height;
	randomPos = (rand() % limite) + 1;
	Door.setPosition(0, randomPos);
	m_Doors.push_back(Door);

	// Ajout porte nord 
	Door.setDirection(2);
	Door.LoadImage();
	limite = sf::VideoMode::getDesktopMode().width - Door.getSprite().getLocalBounds().width;
	randomPos = (rand() % limite) + 1;
	Door.setPosition(randomPos, 0);
	m_Doors.push_back(Door);

	// Ajout porte sud
	Door.setDirection(3);
	Door.LoadImage();
	randomPos = (rand() % limite) + 1;
	Door.setPosition(randomPos, sf::VideoMode::getDesktopMode().height - Door.getSprite().getLocalBounds().height);
	m_Doors.push_back(Door);
}

std::vector<CDoor> CDoorForRoom::getDoors(void)
{
	return m_Doors;
}
