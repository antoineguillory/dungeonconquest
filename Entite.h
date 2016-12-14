#ifndef ENTITE_H
#define ENTITE_H


public virtual class Entite
{
        /**
        ** constructeur
        */
        Entite();
        /**
        ** m�thode permettant d'attaquer
        */
        virtual void attaquer();
        /**
        ** m�thode permettant de se d�placer
        */
        virtual void seDeplacer();
        /**
        ** m�thode permettant de mourir
        */
        virtual void mourrir();
        /**
        ** m�thode permettant de mettre � jour les attributs
        */
        virtual void majAttributs();
        /**
        ** m�thode permettant de r�cuperer la vie de l'entit�
        */
        virtual double getVie();
        /**
        ** m�thode permettant d'ajouter de la vie � une entit�
        */
        virtual double addVie(unsigned bonus);
        /**
        ** m�thode permettant de r�cup�rer l'attaque d'une entit�
        */
        virtual double getAttaque();
        /**
        ** m�thode permettant d'ajouter de l'attaque � une entit�
        */
        virtual double addAttaque(unsigned bonus);
        /**
        ** m�thode permettant de r�cup�rer la vitesse d'une entit�
        */
        virtual double getViteese();
        /**
        ** m�thode permettant d'ajouter de la vitesse � une entit�
        */
        virtual double addVitesse(unsigned bonus);

    protected:
        /**
        ** donn�e membre vie
        */
        double vie;
        /**
        ** donn�e membre attaque
        */
        double attaque;
        /**
        ** donn�e membre vitesse
        */
        double vitesse
        /**
        ** donn�e membre ID
        */
        unsigned ID;
        /**
        ** donn�e membre contenant la liste des comp�tences de l'entit�
        */
        vector<Competences> listeCompetences;

    private:

};

#endif // ENTITE_H
