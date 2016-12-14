#include "PotionAttaque.h"
 /**
** Constructeur
*/
PotionAttaque::PotionAttaque()
{
    this.bonusAttaque = this.base * this.coefA * Systeme.getEtage() ;
}
 /**
** Destructeur
*/
PotionAttaque::~PotionAttaque()
{
    //dtor
}
 /**
** m�thode permettant de r�cup�rer l'ID de l'objet
*/
PotionAttaque::unsigned getID()
{
    return this.IDObjet;
}
 /**
** m�thode permettant de r�cup�rer le Bonus de vie
*/
PotionAttaque::double getBonusVie()
{
    return this.BonusVie;
}
 /**
** m�thode permettant de r�cup�rer le Bonus d'attaque*/
PotionAttaque::double getBonusAttaque()
{
    return this.BonnusAttaque;
}
 /**
** m�thode permettant de r�cup�rer le Bonus de vitesse
*/
PotionAttaque::double getBonusVitesse()
{
    return this.BonusVitesse;
}
 /**
** m�thode permettant de r�cup�rer le Bonus de revenus
*/
PotionAttaque::double getBonusRevenus()
{
    return this.BonusRevenus;
}
 /**
** m�thode permettant d'activer l'objet
*/
PotionAttaque::void activer(Personnage & perso)
{
    perso.addAttaque(this.bonusAttaque);
}
