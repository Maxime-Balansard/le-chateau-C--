#ifndef ARME_H
#define ARME_H

#include <string>

using namespace std;

class Arme
{
    private:
        int degats;
        int degatsM;
        string type;
        int prix;
        float CoefCrit;

    public:
        Arme();
        Arme(int, int, string, int, float);
        virtual ~Arme();

        int getDegats();
        int getDegatsM();
        string getType();
        int getPrix();
        float getCoefCrit();

        void setDegats(int);
        void setDegatsM(int);
        void setType(string);
        void setPrix(int);
        void setCoefCrit(float);

};

#endif // ARME_H
