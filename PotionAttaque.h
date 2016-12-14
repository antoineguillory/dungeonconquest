#ifndef POTIONATTAQUE_H
#define POTIONATTAQUE_H

 /**
 ** Classe PotionAttaque
*/
class PotionAttaque : public Consommable
{
    public:
         /**
        ** Constructeur
        */
        PotionAttaque();
         /**
        ** Destructeur virtuel
        */
        virtual ~PotionAttaque();
         /**
        ** m�thode permettant de r�cup�rer l'ID de l'objet
        */
        unsigned getID();
         /**
        ** m�thode permettant de r�cup�rer le Bnnus de vie
        */
        double getBonusVie();
         /**
        ** m�thode permettant de r�cup�rer le Bonus d'attaque
        */
        double getBonusAttaque();
         /**
        ** m�thode permettant de r�cup�rer le Bonus de vitesse
        */
        double getBonusVitesse();
         /**
        ** m�thode permettant de r�cup�rer le Bonus de Revenus
        */
        double getBonusRevenus();
         /**
        ** m�thode permettant d'activer l'objet
        */
        void activer(Personnage & perso);
    protected:
    private:
         /**
        ** Dur�e de la potion
        */
        const unsigned duree = 90;
         /**
        ** Co�ficient permettant de d�finir le bonus d'attaque
        */
        const float coefA = 1.2;
         /**
        ** Donn�e membre repr�sentant la base du bonus d'attaque
        */
        const double base = 60;
         /**
        ** Donn�e membre repr�sentant le bonus d'attaque
        */
        double bonusAttaque;
};

#endif // POTIONATTAQUE_H
