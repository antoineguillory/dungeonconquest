#ifndef MARCHAND_H
#define MARCHAND_H
#include <vector>

class Marchand : public Ennemis
{
    public:
        Marchand();
        virtual ~Marchand();

    protected:
    private:
        unsigned valeurDrop;
        vector<Objet> listeObjetM;
};

#endif // MARCHAND_H
