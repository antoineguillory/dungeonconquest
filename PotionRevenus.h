#ifndef POTIONREVENUS_H
#define POTIONREVENUS_H


class PotionRevenus : public Consommable
{
    public:
        PotionRevenus();
        virtual ~PotionRevenus();
        double getBonusVie();
        double getBonusAttaque();
        double getBonusVitesse();
        double getBonusRevenus();
    protected:
    private:
        const unsigned duree = 120;
        const float coefR = 1.15;
        //TODO bonus revenus si temps ok
};

#endif // POTIONREVENUS_H
