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
** méthode permettant d'afficher les stats du joueur en fin de partie
*/
Systeme::afficherStat()
{
    //TODO
}
 /**
** méthode permettant de récupérer l'instance du singleton
*/
Systeme::Systeme getInstance()
{
    return this.InstanceSysteme;
}
 /**
** méthode permettant de définir le numéro de l'étage
*/
Systeme::void setEtage(unsigned numero)
{
    this.etage = numero;
}
 /**
** méthode permettant de récupérer le numéro de l'étage*/
Systeme::unsigned getEtage()
{
    return this.etage;
}
