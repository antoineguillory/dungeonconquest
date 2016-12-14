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
        ** méthode permettant de récupérer l'ID de l'objet
        */
        unsigned getID();
         /**
        ** méthode permettant de récupérer le Bnnus de vie
        */
        double getBonusVie();
         /**
        ** méthode permettant de récupérer le Bonus d'attaque
        */
        double getBonusAttaque();
         /**
        ** méthode permettant de récupérer le Bonus de vitesse
        */
        double getBonusVitesse();
         /**
        ** méthode permettant de récupérer le Bonus de Revenus
        */
        double getBonusRevenus();
         /**
        ** méthode permettant d'activer l'objet
        */
        void activer(Personnage & perso);
    protected:
    private:
         /**
        ** Durée de la potion
        */
        const unsigned duree = 90;
         /**
        ** Coéficient permettant de définir le bonus d'attaque
        */
        const float coefA = 1.2;
         /**
        ** Donnée membre représentant la base du bonus d'attaque
        */
        const double base = 60;
         /**
        ** Donnée membre représentant le bonus d'attaque
        */
        double bonusAttaque;
};

#endif // POTIONATTAQUE_H
