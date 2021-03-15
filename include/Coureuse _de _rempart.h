#ifndef COUREUSE _DE _REMPART_H
#define COUREUSE _DE _REMPART_H

#include <Personnage.h>


class Coureuse _de _rempart : public Personnage
{
    public:
        Coureuse _de _rempart();
        Coureuse _de _rempart(string,int, int, int, int, float, float, float, int, int, Croyance);
        void showInfoCoureuse _de _rempart ();
    protected:

    private:
};

#endif // COUREUSE _DE _REMPART_H
