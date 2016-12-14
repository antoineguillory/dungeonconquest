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
        ** méthode permettant d'équiper l'objet
        */
        virtual void equiper();
         /**
        ** méthode permettant de récupérer l'ID de l'objet
        */
        virtual unsigned getID();
         /**
        ** méthode permettant de récupérer le Bonnus de vie
        */
        virtual double getBonusVie();
         /**
        ** méthode permettant de récupérer le Bonnus d'attaque
        */
        virtual double getBonusAttaque();
         /**
        ** méthode permettant de récupérer le Bonnus de vitesse
        */
        virtual double getBonusVitesse();
         /**
        ** méthode permettant de récupérer le Bonnus de revenus
        */
        virtual double getBonusRevenus();
         /**
        ** méthode permettant d'activer l'objet
        */
        virtual void activer(Personnage & perso);
    protected:
         /**
        ** Donnée membre IDObjet
        */
        unsigned IDObjet;
         /**
        ** Donnée membre bonusVie
        */
        double bonusVie;
         /**
        ** Donnée membre bonusAttaque
        */
        double bonusAttaque;
         /**
        ** Donnée membre bonusVitesse
        */
        double bonusVitesse;
         /**
        ** Donnée membre bonusRevenus
        */
        double bonusRevenus;
    private:

};

#endif // OBJET_H
