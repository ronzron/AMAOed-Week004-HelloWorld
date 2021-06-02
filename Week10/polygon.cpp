#include <iostream>
#include <cstdlib>
#include "polygon.h"

using namespace std;

int main()
{
    Polygon info("Square", "Red", 4);
    cout << "Polygon info: " << info.getInformation() << endl;

    return EXIT_SUCCESS;
}