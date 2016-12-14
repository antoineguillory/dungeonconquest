    #ifndef OBJET_H
#define OBJET_H

 /**
** Clasee Objet
*/
public virtual class Objet
{
    public:
         /**
        ** Constructeur
        */
        Objet();
         /**
        ** Destructeur virtuel
        */
        virtual ~Objet();
         /**
        ** m�thode permettant d'�quiper l'objet
        */
        virtual void equiper();
         /**
        ** m�thode permettant de r�cup�rer l'ID de l'objet
        */
        virtual unsigned getID();
         /**
        ** m�thode permettant de r�cup�rer le Bonnus de vie
        */
        virtual double getBonusVie();
         /**
        ** m�thode permettant de r�cup�rer le Bonnus d'attaque
        */
        virtual double getBonusAttaque();
         /**
        ** m�thode permettant de r�cup�rer le Bonnus de vitesse
        */
        virtual double getBonusVitesse();
         /**
        ** m�thode permettant de r�cup�rer le Bonnus de revenus
        */
        virtual double getBonusRevenus();
         /**
        ** m�thode permettant d'activer l'objet
        */
        virtual void activer(Personnage & perso);
    protected:
         /**
        ** Donn�e membre IDObjet
        */
        unsigned IDObjet;
         /**
        ** Donn�e membre bonusVie
        */
        double bonusVie;
         /**
        ** Donn�e membre bonusAttaque
        */
        double bonusAttaque;
         /**
        ** Donn�e membre bonusVitesse
        */
        double bonusVitesse;
         /**
        ** Donn�e membre bonusRevenus
        */
        double bonusRevenus;
    private:

};

#endif // OBJET_H
