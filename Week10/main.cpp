#include <cstdlib>
#include <iostream>
#include "Mammal.h"

using namespace std;

int main()
{
    Mammal animal("Dog", "fluffy", 4, true);

    cout << "Legged Mammal Details \n"
         << animal.getMammal() << endl;

    cout << endl;
    return EXIT_SUCCESS;
}