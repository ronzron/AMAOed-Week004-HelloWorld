#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //block for variable declaration
    string name, year_name, course;
    double rate, tution_fees, down_pay, balance;
    int year, no_units;
    //read the name
    cout << endl
         << "Enter the Student name";
    cin >> name;
    cout << endl
         << "Input the Program/Course details";
    cin >> course;

    //read the year level
    cout << endl
         << "Enter the Year level";
    cin >> year;
    //read the number of units
    cout << endl
         << "Enter the Number of Units";
    cin >> no_units;
    //block for year=1
    if (year == 1)
    {
        year_name = "Freshman";           //set the name of year
        tution_fees = no_units * 1500;    //compute the tution fees
        down_pay = tution_fees * 0.3;     //compute the down payment
        balance = tution_fees - down_pay; //compute the balance
    }
    else //block for year=2
        if (year == 2)
    {
        year_name = "Sophomore";          //set the name of year
        tution_fees = no_units * 1800;    //compute the tution fees
        down_pay = tution_fees * 0.3;     //compute the down payment
        balance = tution_fees - down_pay; //compute the balance
    }
    else //block for year=3
        if (year == 3)
    {
        year_name = "Junior";             //set the name of year
        tution_fees = no_units * 2000;    //compute the tution fees
        down_pay = tution_fees * 0.3;     //compute the down payment
        balance = tution_fees - down_pay; //compute the balance
    }
    else //block for year=4 or 5
        if (year == 4 || year == 5)
    {
        year_name = "Senior";             //set the name of year
        tution_fees = no_units * 2300;    //compute the tution fees
        down_pay = tution_fees * 0.3;     //compute the down payment
        balance = tution_fees - down_pay; //compute the balance
    }
    //display he details
    cout << endl
         << endl
         << "\t\tENROLLMENT SLIP";
    cout << endl
         << "Student name\t: " << name;
    cout << endl
         << "Program/Course\t: " << course;
    //cout<<endl<<"Year Level \t: "<<year;
    cout << endl
         << "Year Name\t: " << year_name;
    cout << endl
         << "No. of Units\t: " << no_units;
    cout << endl
         << "Tution Fee\t: " << setprecision(5) << tution_fees;
    cout << endl
         << "Down Payment\t: " << setprecision(5) << down_pay;
    cout << endl
         << "Balance\t\t: " << setprecision(5) << balance;
}