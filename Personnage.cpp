#include "Personnage.h"
 /**
** Constructeur
*/
Personnage::Personnage()
{
    //TODO impl�menter le constructeur
}
 /**
** Destructeur
*/
Personnage::~Personnage()
{
    //dtor
}
 /**
** m�thode permettant de r�cup�rer les cr�dits du personnage
*/
Personnage::unsigned getCredit()
{
    return this.credit;
}
 /**
** m�thode permettant d'ajouter des cr�dits au personnage
*/
Personnage::unsigned addCredit(unsigned bonus)
{
    this.credit += bonus;
}
 /**
** m�thode permettant de r�cup�rer la vie du personnage
*/
double getVie()
{
    return this.vie;
}
 /**
** m�thode permettant d'ajouter de la vie au personnage
*/
double addVie(unsigned bonus)
{
    this.vie += bonus;
}
 /**
** m�thode permettant de r�cup�rer l'attaque du personnage
*/
double getAttaque()
{
    return this.attaque;
}
 /**
** m�thode permettant d'ajouter de l'attaque au personnage
*/
double addAttaque(unsigned bonus)
{
    this.attaque += bonus;
}
