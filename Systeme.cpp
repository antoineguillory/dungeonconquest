#include "Systeme.h"

 /**
** Constructeur
*/
Systeme::Systeme()
{
    //ctor
}
 /**
** Destructeur
*/
Systeme::~Systeme()
{
    //dtor
}
 /**
** m�thode permettant d'afficher les stats du joueur en fin de partie
*/
Systeme::afficherStat()
{
    //TODO
}
 /**
** m�thode permettant de r�cup�rer l'instance du singleton
*/
Systeme::Systeme getInstance()
{
    return this.InstanceSysteme;
}
 /**
** m�thode permettant de d�finir le num�ro de l'�tage
*/
Systeme::void setEtage(unsigned numero)
{
    this.etage = numero;
}
 /**
** m�thode permettant de r�cup�rer le num�ro de l'�tage*/
Systeme::unsigned getEtage()
{
    return this.etage;
}
