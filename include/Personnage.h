#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <iostream>
#include "Arme.h"
using namespace std;

enum Croyance{Materialiste,Mage,Lumiere,};

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
        Croyance croyance = Materialiste;
        Arme* arme;

    public:
        //Constructeur
        Personnage();
        Personnage(string, int, int, int, float, float, float, int, int, Croyance);


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

        Croyance getCroyance();
        void setCroyance(Croyance);

    //fonctions
    void fiche();
    void attack(Personnage &cible);
};



#endif // PERSONNAGE_H
