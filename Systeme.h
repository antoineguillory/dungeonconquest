#ifndef SYSTEME_H
#define SYSTEME_H

/**
** Singleton Systeme
*/
class Systeme
{
    public:
        /**
        ** Constructeur
        */
        Systeme();
        /**
        ** Destructeur virtuel
        */
        virtual ~Systeme();
        /**
        ** méthode permettant d'afficher les stats du joueur en fin de partie
        */
        static void afficherStat();
        /**
        ** méthode permettant de récupérer l'instance du singleton
        */
        static Systeme getInstance();
        /**
        ** méthode permettant de définir le numéro de l'étage
        */
        static void setEtage(unsigned numero);
        /**
        ** méthode permettant de récupérer le numéro de l'étage
        */
        static unsigned getEtage();

    protected:
    private:
        /**
        ** Instance unique du singleton
        */
        static Systeme InstanceSysteme;
        /**
        ** donnée membre représentant l'étage dans lequel le joueur évolu
        */
        static unsigned etage:
        /**
        ** donnée membre permettant de connaitre le nombre d'ennemis tués par le joueur
        */
        static unsigned ennemisTues;// faire en sorte d'incrémenter cet attribut quand un ennemi est tué
        //TODO Ajouter une temps qui s'incrémentera durant la partie

};

#endif // SYSTEME_H
