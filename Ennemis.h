#ifndef ENNEMIS_H
#define ENNEMIS_H

 /**
** Classe Ennemis
*/
abstract class Ennemis : public Entite
{
    public:
         /**
        ** Constructeur
        */
        Ennemis();
         /**
        ** Destructeur virtuel
        */
        virtual ~Ennemis();
         /**
        ** méthode permettant à l'ennemi de mourir
        */
        void mourir();
         /**
        ** méthode permettant de récupérer les revenus
        */
        unsigned getRevenus();
         /**
        ** méthode permettant de donner les loot au personnage
        */
        unsigned giveLoot(Personnage & perso);
    protected:
         /**
        ** Donnée membre revenus
        */
        unsigned revenus;
    private:
};

#endif // ENNEMIS_H
