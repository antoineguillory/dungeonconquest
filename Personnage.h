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
        ** méthode permettant de marchander
        */
        void marchander();
        /**
        ** méthode permettant d'afficher l'inventaire du personnage
        */
        void afficherInventaire();
        /**
        ** méthode peremttant de récupérer la donnée membre crédit
        */
        unsigned getCredit();
        /**
        ** méthode peremettant d'ajouter des crédit
        */
        unsigned addCredit(unsigned bonus);
        /**
        ** méthode permettant de récupérer la vie du personnage
        */
        double getVie();
        /**
        ** méthode peremettant d'ajouter de la vie au personnage
        */
        double addVie(unsigned bonus);
        /**
        ** méthode permettant de récupérer l'attaque du personnage
        */
        double getAttaque();
        /**
        ** méthode permettant d'ajouter de l'attaque au personnage
        */
        double addAttaque(unsigned bonus);
    protected:
    private:
        /**
        ** donnée membre crédit
        */
        unsigned credit;
        /**
        ** donnée membre contenant la liste d'objet du personnage
        */
        vector<Objet> listeObjets;
};

#endif // PERSONNAGE_H
