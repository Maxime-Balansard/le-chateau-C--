#ifndef ARME_H
#define ARME_H

#include <string>

using namespace std;

class Arme
{
    private:
        int degats;
        int dm;
        string type;
        int prix;
        float coefCrit;

    public:
        Arme();
        Arme( int, int,string,int, float);
        virtual ~Arme();

        int getDegats();
        int getDm();
        string getType();
        int getPrix();
        float get coefCrit();

        void setDegats(int);
        void setDm(int);
        void setType(string);
        void setPrix(int);
        void setcoefCrit(float);

};

#endif // ARME_H
