#include "person.h"
class Student : public Person
{
private:
    // additional attributes of Student class
    string acdemicProgram;
    string yearInCollege;
    string university;

public:
    Student(string name, string address, string gender, int age, string occupation, string acedimc, string year_in_college, string university)
        : Person(name, address, gender, age, occupation)
    {
        this->acdemicProgram = acedimc;
        this->yearInCollege = year_in_college;
        this->university = university;
    }
    // accessors
    string getAcdemicProgram()
    {
        return this->acdemicProgram;
    }
    string getYearInCollege()
    {
        return this->yearInCollege;
    }
    string getUniversity()
    {
        return this->university;
    }
    // mutators
    void setAcdemicProgram(string acdemic)
    {
        this->acdemicProgram = acdemic;
    }
    void setYearInCollege(string year)
    {
        this->yearInCollege = year;
    }
    void setUniversity(string university)
    {
        this->university = university;
    }
};