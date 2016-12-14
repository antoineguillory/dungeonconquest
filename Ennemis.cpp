#include "Ennemis.h"
 /**
** Constructeur
*/
Ennemis::Ennemis()
{
    //ctor
}
 /**
** Destructeur
*/
Ennemis::~Ennemis()
{
    //dtor
}
 /**
** méthode permettant de récupérer le revenus de l'ennemi
*/
Ennemis::unsigned getRevenus()
{
    return this.revenus;
}
 /**
** méthode permettant de donner le loot au personnage
*/
Ennemis::unsigned giveLoot(Personnage & perso)
{
    perso.addCredit(this.revenus); //possible? ou utiliser le get
}
 /**
** méthode permettant récupérer la vie de l'ennemi
*/
Ennemis::getVie()
{
    return this.vie;
}
 /**
** méthode permettant à l"ennemi de mourir
*/
Ennemis::mourir(Personnage & perso)
{
    this.giveLoot(perso);
}
