#include <string>
#include <sstream>

using namespace std;

class Mammal
{
private:
    string stringName, stringFur;
    short shortLegs;
    bool boolTail;

public:
    Mammal(string name, string fur, short legs, bool hasTail)
    {
        stringName = name;
        stringFur = fur;
        shortLegs = legs;
        boolTail = hasTail;
    }

    string getMammal()
    {
        ostringstream c;
        c << "Name: " << stringName << endl;
        c << "Fur: " << stringFur << endl;
        c << "Legs: " << shortLegs << endl;
        c << "Has Tail: " << boolTail << endl;
        return c.str();
    }
};