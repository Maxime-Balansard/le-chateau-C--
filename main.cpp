#include "Personnage.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Personnage p1("Jean", 10, 3, 0, 0.05, 0.05, 0.05, 10, 1, Materialiste);
    p1.fiche();

    return 0;
}
