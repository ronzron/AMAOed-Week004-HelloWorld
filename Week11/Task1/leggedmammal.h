#ifndef _LEGGEDMAMMAL
#define _LEGGEDMAMMAL
#include <string>

using namespace std;

class leggedmammal
{
    // Limit the access to our properties
    // Declare them as Private
private:
    int mNumberOfLegs;
    string mKindOfFur;
    bool mPresenceOfTail;
    // public methods of our class
public:
    leggedmammal(int, string, bool);
    int getNumberofLegs();
    string getKindofFur();
    bool getPresenceofTail();
    void setNumberofLegs(int);
    void setKindofFur(string);
    void setPresenceofTail(bool);
    // Note: This is for readability purposes.
    // Define the body outside of our class.
};

leggedmammal::leggedmammal(int legs, string fur, bool tail)
{
    // initialization of properties
    this->mNumberOfLegs = legs;
    this->mKindOfFur = fur;
    this->mPresenceOfTail = tail;
}

// accessors
int leggedmammal::getNumberofLegs()
{
    return this->mNumberOfLegs;
}

string leggedmammal::getKindofFur()
{
    return this->mKindOfFur;
}

bool leggedmammal::getPresenceofTail()
{
    return this->mPresenceOfTail;
}

// mutators
void leggedmammal::setNumberofLegs(int legs)
{
    this->mNumberOfLegs = legs;
}

void leggedmammal::setKindofFur(string fur)
{
    this->mKindOfFur = fur;
}

void leggedmammal::setPresenceofTail(bool tail)
{
    this->mPresenceOfTail = tail;
}
#endif