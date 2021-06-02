#include "person.h"
#include "student.cpp"
#include <iostream>
int main()
{
    Student s("Ronnel Gambong", "Davao, Philippines", "Male", 21, "Student", "BSCS", "First", "AmaOed");
    cout << "==================Studen Info===========================\n";
    cout << "Name: " << s.getName() << endl;
    cout << "Address: " << s.getAddress() << endl;
    cout << "Gender: " << s.getGender() << endl;
    cout << "Age: " << s.getAge() << endl;
    cout << "Occupation: " << s.getOccupation() << endl;
    cout << "Acdemic program: " << s.getAcdemicProgram() << endl;
    cout << "Year: " << s.getYearInCollege() << endl;
    cout << "University: " << s.getUniversity() << endl;
    return 0;
}