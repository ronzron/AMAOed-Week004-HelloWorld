#ifndef _PERSON
#define _PERSON
#include <string>
using namespace std;
class Person
{
    // Limit the access to our properties
    // Declare them as Private
private:
    string mName;
    string mAddress;
    string mGender;
    int mAge;
    string mOccupation;

    // public methods of our class
public:
    Person(string, string, string, int, string);
    string getName();
    string getAddress();
    string getGender();
    int getAge();
    string getOccupation();
};

Person::Person(string name, string address, string gender, int age, string occupation)
{
    // initialization of properties
    this->mName = name;
    this->mAddress = address;
    this->mGender = gender;
    this->mAge = age;
    this->mOccupation = occupation;
}

// accessors

string Person::getName()
{
    return this->mName;
}

string Person::getAddress()
{
    return this->mAddress;
}

string Person::getGender()
{
    return this->mGender;
}

int Person::getAge()
{
    return this->mAge;
}

string Person::getOccupation()
{
    return this->mOccupation;
}

// Purpose: To limit the change of our properties.
// Never allow the properties to be reassigned
// after we initialize our class.
#endif
