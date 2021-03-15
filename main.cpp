#include "Personnage.h"
#include "chevalier_de_la_rosette.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Personnage p1("Jean", 5, 5, 3, 0, 0.05, 0.05, 0.05, 10, 1, Mezoreth);
    chevalier_de_la_rosette p2;
    chevalier_de_la_rosette p3("Jean", 15, 5, 3, 0, 0.05, 0.05, 0.05, 10, 1, Mezoreth);
    p1.fiche();
    p2.fiche();
    p3.fiche();

    return 0;
}
