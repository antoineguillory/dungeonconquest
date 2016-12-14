#ifndef ENTITE_H
#define ENTITE_H


public virtual class Entite
{
        /**
        ** constructeur
        */
        Entite();
        /**
        ** méthode permettant d'attaquer
        */
        virtual void attaquer();
        /**
        ** méthode permettant de se déplacer
        */
        virtual void seDeplacer();
        /**
        ** méthode permettant de mourir
        */
        virtual void mourrir();
        /**
        ** méthode permettant de mettre à jour les attributs
        */
        virtual void majAttributs();
        /**
        ** méthode permettant de récuperer la vie de l'entité
        */
        virtual double getVie();
        /**
        ** méthode permettant d'ajouter de la vie à une entité
        */
        virtual double addVie(unsigned bonus);
        /**
        ** méthode permettant de récupérer l'attaque d'une entité
        */
        virtual double getAttaque();
        /**
        ** méthode permettant d'ajouter de l'attaque à une entité
        */
        virtual double addAttaque(unsigned bonus);
        /**
        ** méthode permettant de récupérer la vitesse d'une entité
        */
        virtual double getViteese();
        /**
        ** méthode permettant d'ajouter de la vitesse à une entité
        */
        virtual double addVitesse(unsigned bonus);

    protected:
        /**
        ** donnée membre vie
        */
        double vie;
        /**
        ** donnée membre attaque
        */
        double attaque;
        /**
        ** donnée membre vitesse
        */
        double vitesse
        /**
        ** donnée membre ID
        */
        unsigned ID;
        /**
        ** donnée membre contenant la liste des compétences de l'entité
        */
        vector<Competences> listeCompetences;

    private:

};

#endif // ENTITE_H
