#include "PotionVitesse.h"

PotionVitesse::PotionVitesse()
{
    //ctor
}

PotionVitesse::~PotionVitesse()
{
    //dtor
}
PotionAttaque::unsigned getID()
{
    return this.IDObjet;
}
PotionAttaque::double getBonusVie()
{
    return this.BonusVie;
}
PotionAttaque::double getBonusAttaque()
{
    return this.BonnusAttaque;
}
PotionAttaque::double getBonusVitesse()
{
    return this.BonusVitesse;
}
PotionAttaque::double getBonusRevenus()
{
    return this.BonusRevenus;
}
PotionAttaque::void activer(Personnage & perso)
{

}
