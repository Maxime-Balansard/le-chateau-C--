#include "Arme.h"
Arme::Arme()
{
    setDegats(10);
    setDegatsM(0);
    setType("normal");
    setCoefCrit(0);
    setPrix(0);
}

Arme::Arme(int d,int dm,string t,int pr,float cc){
    setDegats(d);
    setDegatsM(dm);
    setType(t);
    setPrix(pr);
    setCoefCrit(cc);
}

Arme::~Arme()
{
    //dtor
}

int Arme::getDegats(){
    return degats;
}

int Arme::getDegatsM(){
    return degatsM;
}

string Arme::getType(){
    return type;
}


float Arme::getCoefCrit(){
    return CoefCrit;
}

int Arme::getPrix(){
    return prix;
}

void Arme::setDegats(int d){
    degats = d;
}

void Arme::setDegatsM(int dm){
    degatsM = dm;
}

void Arme::setType(string t){
    type = t;
}

void Arme::setCoefCrit(float cc){
    CoefCrit = cc;
}

void Arme::setPrix(int p){
    prix = p;
}
