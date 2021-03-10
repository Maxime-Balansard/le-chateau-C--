#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <iostream>
using namespace std;

class Personnage
{
    private:
        //caractéristiques de base
        string nom = "PeonPremierduNom";
        int pv = 10;
        int atk = 1;
        int armure = 0;
        float blocage = 0;
        float critique = 0.05;
        float esquive = 0.05;
        int resistancemagique = 0;
        int corruption = 0;
        string croyance = "Materialiste";

    public:
        //Constructeur
        Personnage();
        Personnage(string, int, int, int, float, float, float, int, int, string);


        //Destructeur
        ~Personnage();

        //getter setter
        string getNom();
        void setNom(string);

        int getPv();
        void setPv(int);

        int getAtk();
        void setAtk(int);

        int getArmure();
        void setArmure(int);

        float getBlocage();
        void setBlocage(float);

        float getCritique();
        void setCritique(float);

        float getEsquive();
        void setEsquive(float);

        int getResistancemagique();
        void setResistancemagique(int);

        int getCorruption();
        void setCorruption(int);

        string getCroyance();
        void setCroyance(string);

    //fonctions
    void fiche();
};



#endif // PERSONNAGE_H
