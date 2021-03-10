#include "Personnage.h"

Personnage::Personnage()
{
        nom = "PeonPremierduNom";
        pv = 10;
        atk = 1;
        armure = 0;
        blocage = 0;
        critique = 5;
        esquive = 5;
        resistancemagique = 0;
        corruption = 0;
        croyance = "Materialiste";
}

Personnage::Personnage(string n, int p, int a, int ar, float b, float c, float e, int rm, int co, string cr)
{
    setNom(n);
    setPv(p);
    setAtk(a);
    setArmure(ar);
    setBlocage(b);
    setCritique(c);
    setEsquive(e);
    setResistancemagique(rm);
    setCorruption(co);
    setCroyance(cr);
}

Personnage::~Personnage()
{
    cout<< getNom()<< " nous a quitte. Paix a son ame..." <<endl <<endl;
}

string Personnage::getNom(){
    return nom;
}

int Personnage::getPv(){
    return pv;
}

int Personnage::getAtk(){
    return atk;
}

int Personnage::getArmure(){
    return armure;
}

float Personnage::getBlocage(){
    return blocage;
}

float Personnage::getCritique(){
    return critique;
}

float Personnage::getEsquive(){
    return esquive;
}

int Personnage::getResistancemagique(){
    return resistancemagique;
}

int Personnage::getCorruption(){
    return corruption;
}

string Personnage::getCroyance(){
    return croyance;
}

