#include "Coureuse _de _rempart.h"

Coureuse_de_rempart::Coureuse_de_rempart() : Personnage(){

    cout<<"Je suis la Coureuse _de _rempart"<<endl;
}

Coureuse_de_rempart::Coureuse_de_rempart(string n,int m, int p, int a, int ar, float b, float c, float e, int rm, int co, int cr) : Personnage(n,m,p,a,ar,b,c,e,rm,co,cr){}


void Coureuse_de_rempart::fourberie(Personnage* cible){

    cout<< getNom() << " attaque avec fourberie " << cible->getNom() << " !!!" << endl;

    float random1 = rand()%100;
    float random2 = rand()%100;
    float random3 = rand()%100;
    float random4 = rand()%7;

    if(random1 <= (cible->getBlocage()*100)){
        cout << cible->getNom() << " pare l'attaque !" << endl << endl;
    }

    else if(random2 <= (cible->getEsquive()*100)) {
        cout << cible->getNom() << " esquive !" << endl << endl;
    }

    else if(random3 <= (getCritique()*100)) {

        cout<< "C'est un coup des plus traitres !  " << getNom() << " inflige " << (((getAtk() /*+ arme.getDegats()*/ - (getCorruption()*3))*(1-(cible->getArmure()/100))*2) + (getEsquive() * 50) + random4 - 3) << " degats!"<< endl;
        cible->setPv ((cible->getPv() - ((getAtk() /*+ arme.getDegats()*/ - (getCorruption()*3))*(1-(cible->getArmure()/100))*2)) + (getEsquive() * 50) + random4 - 3);

    }

    else {

        cout<< getNom() << " inflige " << (((getAtk() /*+ arme.getDegats()*/ - (getCorruption()*3))*(1-(cible->getArmure()/100))) + (getEsquive() * 50) + random4 - 3) << " degats!"<< endl;
        cible->setPv (cible->getPv() - ((getAtk() /*+ arme.getDegats()*/ - (getCorruption()*3))*(1-(cible->getArmure()/100))) + (getEsquive() * 50)  + random4 - 3);

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
