#include "Ennemie.h"

Ennemie::Ennemie() : Personnage(){

    cout<<"Ennemie"<<endl;
}

Ennemie::Ennemie(string n,int m, int p, int a, int ar, float b, float c, float e, int rm, int co, int cr) : Personnage(n,m,p,a,ar,b,c,e,rm,co,cr){}

void Ennemie::attaqueEnnemie(Personnage* cible) {

    cout<< getNom() << " attaque " << cible->getNom() << " !!!" << endl;

    float random1 = rand()%100;
    float random2 = rand()%100;
    float random3 = rand()%100;
    float random4 = rand()%7;
    float random5 = rand()%20;

    if(random1 <= (cible->getBlocage()*100)){
        cout << cible->getNom() << " pare l'attaque !" << endl << endl;
    }

    else if(random2 <= (cible->getEsquive()*100)) {
        cout << cible->getNom() << " esquive !" << endl << endl;
    }

    else if(random3 <= (getCritique()*100)) {

        cout<< "C'est une attaque demoniaque, Monseigneur !  " << getNom() << " inflige " << ((getAtk()*(1-(cible->getArmure()/100))*2) + random4 - 3) << " degats!"<< endl;
        cible->setPv((cible->getPv() - (getAtk())*(1-(cible->getArmure()/100))*2) + random4 - 3);
            if(random5 <= (getCorruption()*2){
                cible->setCorruption(cible->getCorruption + 1);
                cout << " Oh non! L'attaque noircie l'esprit de " << cible->getNom() << " ! Il subit 1 dégat de corruption et en compte maintenant " << cible->getCorruption << " !" << endl << endl;
        };

    }

    else {

        cout<< getNom() << " inflige " << ((getAtk()*(1-(cible->getArmure()/100))) + random4 - 3) << " degats!"<< endl;
        cible->setPv(cible->getPv() - (getAtk()*(1-(cible->getArmure()/100)))  + random4 - 3);
            if(random5 <= getCorruption()){
                cible->setCorruption(cible->getCorruption + 1);
                cout << " Oh non! L'attaque noircie l'esprit de " << cible->getNom() << " ! Il subit 1 dégat de corruption et en compte maintenant " << cible->getCorruption << " !" << endl << endl;
        }

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

}
