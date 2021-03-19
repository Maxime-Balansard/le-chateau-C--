#ifndef COUREUSE_DE_REMPART_H
#define COUREUSE_DE_REMPART_H

#include <Personnage.h>


class Coureuse_de_rempart : public Personnage
{
    public:
        Coureuse_de_rempart();
        Coureuse_de_rempart(string,int, int, int, int, float, float, float, int, int, int);
        void showInfoCoureuse_de_rempart ();
    protected:

    private:
};

#endif // COUREUSE _DE _REMPART_H
