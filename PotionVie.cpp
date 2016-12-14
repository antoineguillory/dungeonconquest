#include "PotionVie.h"
 /**
** Constructeur
*/
PotionVie::PotionVie()
{
    this.bonusVie = this.coefV * this.base * Systeme.getEtage();
}
 /**
** Destructeur
*/
PotionVie::~PotionVie()
{

}
 /**
** méthode permettant de récupérer l'ID de l'objet
*/
PotionAttaque::unsigned getID()
{
    return this.IDObjet;
}
 /**
** méthode permettant de récupérer le Bonus de vie
*/
PotionAttaque::double getBonusVie()
{
    return this.BonusVie;
}
 /**
** méthode permettant de récupérer le Bonus d'attaque
*/
PotionAttaque::double getBonusAttaque()
{
    return this.BonnusAttaque;
}
 /**
** méthode permettant de récupérer le Bonus de vitesse
*/
PotionAttaque::double getBonusVitesse()
{
    return this.BonusVitesse;
}
 /**
** méthode permettant de récupérer le Bonus de revenus
*/
PotionAttaque::double getBonusRevenus()
{
    return this.BonusRevenus;
}
 /**
** méthode permettant d'activer l'objet
*/
PotionAttaque::void activer(Personnage & perso)
{
    perso.addVie(this.bonusVie);
}
