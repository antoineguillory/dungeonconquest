#ifndef POTIONVITESSE_H
#define POTIONVITESSE_H

/**
**
*/
class PotionVitesse : public Consommable
{
    public:
        PotionVitesse();
        virtual ~PotionVitesse();
        double getBonusVie();
        double getBonusAttaque();
        double getBonusVitesse();
        double getBonusRevenus();
    protected:
    private:
        //TODO bonus vitesse et duree si temps ok
};

#endif // POTIONVITESSE_H
