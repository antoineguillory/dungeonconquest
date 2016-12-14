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
        ** m�thode permettant � l'ennemi de mourir
        */
        void mourir();
         /**
        ** m�thode permettant de r�cup�rer les revenus
        */
        unsigned getRevenus();
         /**
        ** m�thode permettant de donner les loot au personnage
        */
        unsigned giveLoot(Personnage & perso);
    protected:
         /**
        ** Donn�e membre revenus
        */
        unsigned revenus;
    private:
};

#endif // ENNEMIS_H
