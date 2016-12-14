#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <.h>
#include <vector>

class Personnage : public Entite
{
    public:
        /**
        ** constructeur
        */
        Personnage();
        /**
        ** destructeur
        */
        ~Personnage();
        /**
        ** m�thode permettant de marchander
        */
        void marchander();
        /**
        ** m�thode permettant d'afficher l'inventaire du personnage
        */
        void afficherInventaire();
        /**
        ** m�thode peremttant de r�cup�rer la donn�e membre cr�dit
        */
        unsigned getCredit();
        /**
        ** m�thode peremettant d'ajouter des cr�dit
        */
        unsigned addCredit(unsigned bonus);
        /**
        ** m�thode permettant de r�cup�rer la vie du personnage
        */
        double getVie();
        /**
        ** m�thode peremettant d'ajouter de la vie au personnage
        */
        double addVie(unsigned bonus);
        /**
        ** m�thode permettant de r�cup�rer l'attaque du personnage
        */
        double getAttaque();
        /**
        ** m�thode permettant d'ajouter de l'attaque au personnage
        */
        double addAttaque(unsigned bonus);
    protected:
    private:
        /**
        ** donn�e membre cr�dit
        */
        unsigned credit;
        /**
        ** donn�e membre contenant la liste d'objet du personnage
        */
        vector<Objet> listeObjets;
};

#endif // PERSONNAGE_H
