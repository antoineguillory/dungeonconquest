#ifndef CONSOMMABLE_H
#define CONSOMMABLE_H


class Consommable : public objet
{
    public:
        Consommable();
        virtual ~Consommable();
        double getDuree();
    protected:
    private:
        double duree;
};

#endif // CONSOMMABLE_H
