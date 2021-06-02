#include <iostream>
#include "dog.h"
using namespace std;

int main()
{
    dog A("Husky", 10, true, 4, "Fluffy", true);

    cout << "Breed: " << A.getBreed() << endl;
    cout << "Registered? (1= True, 0= false): " << A.getIsRegistered() << endl;
    cout << "Fur: " << A.getKindofFur() << endl;
    cout << "Number of legs: " << A.getNumberofLegs() << endl;
    cout << "Tail: " << A.getPresenceofTail() << endl;
    cout << "Size: " << A.getSize() << endl
         << endl;

    return 0;
}