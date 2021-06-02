#include <string>
#include <sstream>

using namespace std;

class Person
{
public:
    string Name, Address, Gender, Occupation;
    short Age;
    Person(string name, string address, string gender, string occupation, short age);
    string getInformation();

}; // creating class first

Person::Person(string name, string address, string gender, string occupation, short age)
{
    Name = name;
    Address = address;
    Gender = gender;
    Occupation = occupation;
    Age = age;
}

string Person::getInformation()
{
    ostringstream c;
    c << "Name: " << Name << endl;
    c << "Address: " << Address << endl;
    c << "Gender: " << Gender << endl;
    c << "Occupation: " << Occupation << endl;
    c << "Age: " << Age << endl;
    return c.str();
}
