#ifndef CHEVALIER_DE_LA_ROSETTE_H
#define CHEVALIER_DE_LA_ROSETTE_H

#include "Personnage.h"


class chevalier_de_la_rosette: public Personnage
{
    public:
        chevalier_de_la_rosette();
        chevalier_de_la_rosette(string,int, int, int, int, float, float, float, int, int, int);

        void charge(Personnage* cible);

    protected:

    private:
};

#endif // GUERRIER_H
