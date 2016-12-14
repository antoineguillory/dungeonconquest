#ifndef POTIONVIE_H
#define POTIONVIE_H
/**
** Classe PotionVie
*/
class PotionVie : public Objet
{
    public:
        /**
        ** Constructeur
        */
        PotionVie();
        /**
        ** Destructeur virtuel
        */
        virtual ~PotionVie();
        /**
        ** méthode permettant de récupérer le Bonus de vie
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
        ** méthode permettant de récupérer le Bonus de revenus
        */
        double getBonusRevenus();
         /**
        ** méthode permettant d'activer l'objet
        */
        void activer(Personnage & perso);
    protected:
    private:
         /**
        ** Coeficient peremettant de définir le bonus de vie
        */
        const float coefV = 1.25;
         /**
        ** Donnée membre représentant le bonus de vie
        */
        double bonusVie;
         /**
        ** Base permettant de définir le bonus de vie
        */
        double base = 60;
};

#endif // POTIONVIE_H
