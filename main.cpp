#include "Personnage.h"
#include "chevalier_de_la_rosette.h"
#include <random>
#include <ctime>
using namespace std;

//vector<string>  tabCroyance = {"Mezoreth","Luminark","Shadark","Pyriis"};

int main()
{
    srand(time(NULL));
    cout << "Hello world!" << endl;

    Personnage p1("Jean", 5, 5, 10, 10, 0.05, 0, 0.05, -10, 0, 1);
    Personnage p4("JacquesHenri", 8, 8, 5, 0, 0.15, 0.05, 0.05, -10, 2, 1);
    chevalier_de_la_rosette p2("Jeannette", 15, 5, 10, 50, 0.15, 0.05, 0.0, 10, 1, 0);
    p1.fiche();
    p2.fiche();
    p4.fiche();
    p1.attaque(&p4);
    cout << endl;
    p1.attaque(&p2);
    cout << endl <<"Pv de jackar = " <<p4.getPv() << endl <<  endl;
    cout << "Pv de Jeannette = "<< p2.getPv() << endl << endl;
    //chevalier_de_la_rosette p3("Jeannettier", 15, 5, 3, 0, 0.05, 0.05, 0.05, 10, 1, 0);

    //p2.fiche();
    //p3.fiche();

    return 0;
}
