#include "Foutriquet_magicien.h"

Foutriquet_magicien::Foutriquet_magicien() : Personnage(){

    cout<<"Je suis un Foutriquet_magicien"<<endl;
}

Foutriquet_magicien::Foutriquet_magicien(string n,int m, int p, int a, int ar, float b, float c, float e, int rm, int co, int cr) : Personnage(n,m,p,a,ar,b,c,e,rm,co,cr){}
