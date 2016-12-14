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
        ** m�thode permettant d'afficher les stats du joueur en fin de partie
        */
        static void afficherStat();
        /**
        ** m�thode permettant de r�cup�rer l'instance du singleton
        */
        static Systeme getInstance();
        /**
        ** m�thode permettant de d�finir le num�ro de l'�tage
        */
        static void setEtage(unsigned numero);
        /**
        ** m�thode permettant de r�cup�rer le num�ro de l'�tage
        */
        static unsigned getEtage();

    protected:
    private:
        /**
        ** Instance unique du singleton
        */
        static Systeme InstanceSysteme;
        /**
        ** donn�e membre repr�sentant l'�tage dans lequel le joueur �volu
        */
        static unsigned etage:
        /**
        ** donn�e membre permettant de connaitre le nombre d'ennemis tu�s par le joueur
        */
        static unsigned ennemisTues;// faire en sorte d'incr�menter cet attribut quand un ennemi est tu�
        //TODO Ajouter une temps qui s'incr�mentera durant la partie

};

#endif // SYSTEME_H
