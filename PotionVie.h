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
        ** m�thode permettant de r�cup�rer le Bonus de vie
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
        ** m�thode permettant de r�cup�rer le Bonus de revenus
        */
        double getBonusRevenus();
         /**
        ** m�thode permettant d'activer l'objet
        */
        void activer(Personnage & perso);
    protected:
    private:
         /**
        ** Coeficient peremettant de d�finir le bonus de vie
        */
        const float coefV = 1.25;
         /**
        ** Donn�e membre repr�sentant le bonus de vie
        */
        double bonusVie;
         /**
        ** Base permettant de d�finir le bonus de vie
        */
        double base = 60;
};

#endif // POTIONVIE_H
