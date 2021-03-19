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

    Personnage p1("Jean", 5, 5, -5, 51, 0.05, 0.05, 0.05, -10, 6, -1);
    chevalier_de_la_rosette p2;
    chevalier_de_la_rosette p3("Jeannette", 15, 5, 3, 0, 0.05, 0.05, 0.05, 10, 1, 0);
    p1.fiche();
    //p2.fiche();
    //p3.fiche();

    return 0;
}
