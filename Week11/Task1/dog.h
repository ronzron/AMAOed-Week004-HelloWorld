#pragma once
#include "leggedmammal.h"
using namespace std;
class dog
    : public leggedmammal
{
    // Limit the access to our properties
    // Declare them as Private
private:
    string breed;
    double size;
    bool isRegistered;

    // public methods of our class.
public:
    dog() = default;
    dog(string, double, bool, int, string, bool);
    string getBreed();
    double getSize();
    bool getIsRegistered();
    void setBreed(string);
    void setSize(double);
    void setIsRegistered(bool);
    ~dog() = default;
};

// Note: This is for readability purposes.
// Define the body outside of our class.

dog::dog(string breed, double size, bool isRegistered, int legs, string fur, bool tail) : leggedmammal(legs, fur, tail)
{
    this->breed = breed;
    this->size = size;
    this->isRegistered = isRegistered;
}

// accessors
string dog::getBreed()
{
    return breed;
}

double dog::getSize()
{
    return size;
}

bool dog::getIsRegistered()
{
    return isRegistered;
}

// mutators
void dog::setBreed(string breed)
{
    this->breed = breed;
}

void dog::setSize(double size)
{
    this->size = size;
}

void dog::setIsRegistered(bool isRegistered)
{
    this->isRegistered = isRegistered;
}
