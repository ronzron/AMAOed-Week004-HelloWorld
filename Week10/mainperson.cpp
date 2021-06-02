#include <iostream>
#include <cstdlib>
#include "Person.h"
using namespace std;

int main()
{

    Person info("Ronnel Gambong", "Iwha Village, Davao City", "Male", "N/A", 21);
    cout << "Person: Details \n " << info.getInformation() << endl;

    return EXIT_SUCCESS;
}