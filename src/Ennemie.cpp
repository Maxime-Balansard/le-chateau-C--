#include "Ennemie.h"

Ennemie() : Personnage(){

    cout<<"Ennemie"<<endl;
}

Ennemie::Ennemie(string n,int m, int p, int a, int ar, float b, float c, float e, int rm, int co, Croyance cr) : Personnage(n,m,p,a,ar,b,c,e,rm,co,cr){}
