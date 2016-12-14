#include "Personnage.h"
 /**
** Constructeur
*/
Personnage::Personnage()
{
    //TODO implémenter le constructeur
}
 /**
** Destructeur
*/
Personnage::~Personnage()
{
    //dtor
}
 /**
** méthode permettant de récupérer les crédits du personnage
*/
Personnage::unsigned getCredit()
{
    return this.credit;
}
 /**
** méthode permettant d'ajouter des crédits au personnage
*/
Personnage::unsigned addCredit(unsigned bonus)
{
    this.credit += bonus;
}
 /**
** méthode permettant de récupérer la vie du personnage
*/
double getVie()
{
    return this.vie;
}
 /**
** méthode permettant d'ajouter de la vie au personnage
*/
double addVie(unsigned bonus)
{
    this.vie += bonus;
}
 /**
** méthode permettant de récupérer l'attaque du personnage
*/
double getAttaque()
{
    return this.attaque;
}
 /**
** méthode permettant d'ajouter de l'attaque au personnage
*/
double addAttaque(unsigned bonus)
{
    this.attaque += bonus;
}
