#ifndef ENNEMIE_H
#define ENNEMIE_H

#include <Personnage.h>


class Ennemie : public Personnage
{
    public:
        Ennemie();
        Ennemie(string,int, int, int, int, float, float, float, int, int, int);

        void attaqueEnnemie(Personnage* cible);

    protected:

    private:
};

#endif // ENNEMIE_H
