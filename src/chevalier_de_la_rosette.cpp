#include "chevalier_de_la_rosette.h"


chevalier_de_la_rosette::chevalier_de_la_rosette() : Personnage(){

    cout<<"Je suis un guerrier"<<endl;
}

chevalier_de_la_rosette::chevalier_de_la_rosette(string n,int m, int p, int a, int ar, float b, float c, float e, int rm, int co, Croyance cr) : Personnage(n,m,p,a,ar,b,c,e,rm,co,cr){}
