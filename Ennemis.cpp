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
** m�thode permettant de r�cup�rer le revenus de l'ennemi
*/
Ennemis::unsigned getRevenus()
{
    return this.revenus;
}
 /**
** m�thode permettant de donner le loot au personnage
*/
Ennemis::unsigned giveLoot(Personnage & perso)
{
    perso.addCredit(this.revenus); //possible? ou utiliser le get
}
 /**
** m�thode permettant r�cup�rer la vie de l'ennemi
*/
Ennemis::getVie()
{
    return this.vie;
}
 /**
** m�thode permettant � l"ennemi de mourir
*/
Ennemis::mourir(Personnage & perso)
{
    this.giveLoot(perso);
}
