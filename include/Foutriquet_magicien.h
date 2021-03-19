#ifndef FOUTRIQUET_MAGICIEN_H
#define FOUTRIQUET_MAGICIEN_H

#include <Personnage.h>


class Foutriquet_magicien : public Personnage
{
    public:
        Foutriquet_magicien();
        Foutriquet_magicien(string,int, int, int, int, float, float, float, int, int, int);
        void showInfoFoutriquet_magicien ();

    protected:

    private:
};

#endif // FOUTRIQUET_MAGICIEN_H
