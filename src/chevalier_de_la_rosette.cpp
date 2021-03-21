#include "chevalier_de_la_rosette.h"


chevalier_de_la_rosette::chevalier_de_la_rosette() : Personnage(){

    cout<<"Je suis un guerrier"<<endl;
}

chevalier_de_la_rosette::chevalier_de_la_rosette(string n,int m, int p, int a, int ar, float b, float c, float e, int rm, int co, int cr) : Personnage(n,m,p,a,ar,b,c,e,rm,co,cr){}

void chevalier_de_la_rosette::charge(Personnage* cible){

    cout<< getNom() << " charge de tout son poids " << cible->getNom() << " !!!" << endl;

    float random2 = rand()%100;
    float random3 = rand()%100;
    float random4 = rand()%7;

    if(random2 <= (cible->getEsquive()*100) + 15) {
        cout << cible->getNom() << " esquive la charge !" << endl << endl;
    }

    else if(random3 <= (getCritique()*100)) {

        cout<< "La charge est dévastatrice ! " << getNom() << " inflige " << ((getAtk() /*+ arme.getDegats()*/ - (getCorruption()*3) + (getArmure()/2))*(1-(cible->getArmure()/100))*2 + random4 - 3) << " degats!"<< endl;
        cible->setPv (cible->getPv() - ((getAtk() /*+ arme.getDegats()*/ - (getCorruption()*3) + (getArmure()/2))*(1-(cible->getArmure()/100))*2) + random4 - 3);

    }

    else {

        cout<< getNom() << " inflige " << ((getAtk() /*+ arme.getDegats()*/ - (getCorruption()*3) + (getArmure()/2))*(1-(cible->getArmure()/100)) + random4 - 3) << " degats!"<< endl;
        cible->setPv (cible->getPv() - ((getAtk() /*+ arme.getDegats()*/ - (getCorruption()*3) + (getArmure()/2))*(1-(cible->getArmure()/100))) + random4 - 3);

    }

    //montant de degats totaux = (atk + degat - corruption) * (1-(armure/100))

    /*armure =10

    1 - 10/100 = 1- 0.1 = 0.9
    atk+degat-corruption * 0.9

    1- 50/100 = 1 - 0.5 = 0.5
    atk+degat-corruption * 0.5*/


    //perte de PV = ((Atk + dégat) * armure )/100
    /*if(cible -> pv==0){
        cible->~Personnage();
    }*/
}
