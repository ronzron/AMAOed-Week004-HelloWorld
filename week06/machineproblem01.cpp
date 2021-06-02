// Write a C++ program that will ask for the following input from the user:
// 	Student Name:
// Program/Course:
// 	Year Level: (should be integer type)
// 	Number of Units Enrolled: (should be double or float data type)
// Determine the corresponding year name of the student and rate per unit as follows:
// 	Year Level		Year Name		Rate Per Unit
// 		1		Freshman		1,500
// 		2		Sophomore		1,800
// 		3		Junior			2,000
// 	        4 or 5		Senior			2,300
// Compute the tuition fee as follows:
// 	Tuition fee = no. of units enrolled X rate per unit
// 	Down payment = 30% of the tuition fee
// 	Balance = tuition fee – down payment
// Assume that the user will not enter an invalid value.

// Sample Input:
// 	Student Name	: Maria Blanco
// 	Program/Course	: Bachelor of Science in Information Technology
// 	Year Level		: 4
// 	No. of Units		: 16
// 	--------------------------------------------------------------------------------------------

// Sample Output:
// 			ENROLLMENT SLIP
// 	Student Name	: Maria Blanco
// 	Program/Course	: Bachelor of Science in Information Technology
// 	Year Name		: Senior
// 	No. of Units		: 16
// 	Tuition Fee		: 36800
// 	Down Payment	: 11040
// 	Balance		: 25760
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

     // Declaring variables

     string name, year_name, course;
     double rate, tuition_payment, down_payment, balance;
     int year, no_units;

     // input user

     cout << "Student Name" << endl;
     cin >> name;

     cout << "Program/Course" << endl;
     cin >> course;

     cout << "Year Level" << endl;
     cin >> year;

     cout << "	No. of Units" << endl;
     cin >> no_units;

     // if-else statement

     //year1
     if (year == 1)
     {
          year_name = "Freshman";                   // year name
          tuition_payment = no_units * 1500;        // no of units
          down_payment = tuition_payment * 0.3;     // downpayment 30%
          balance = tuition_payment - down_payment; //balance paid
     }
     else if (year == 2)
     {
          year_name = "Sophomore";                  // year name
          tuition_payment = no_units * 1800;        // no of units
          down_payment = tuition_payment * 0.3;     // downpayment 30%
          balance = tuition_payment - down_payment; //balance paid
     }
     else if (year == 3)
     {
          year_name = "Junior";                     // year name
          tuition_payment = no_units * 2000;        // no of units
          down_payment = tuition_payment * 0.3;     // downpayment 30%
          balance = tuition_payment - down_payment; //balance paid
     }
     else if (year == 4 || year == 5)
     {
          year_name = "Senior";                     // year name
          tuition_payment = no_units * 2300;        // no of units
          down_payment = tuition_payment * 0.3;     // downpayment 30%
          balance = tuition_payment - down_payment; //balance paid
     }

     //displaying the details

     cout
         << "------------------------------------------------" << endl;
     cout << "Enrollment Slip" << endl;

     cout << "Student Name:\t \t " << name << endl;
     cout << "Program / Course: \t\t" << course << endl;
     cout << "Year Name: \t\t" << year_name << endl;
     cout << "No.of Units: \t\t" << no_units << endl;
     cout << "Tuition Fee: \t\t" << tuition_payment << endl;
     cout << "Down Payment: \t\t" << down_payment << endl;
     cout << "Balance: \t\t" << balance << endl;
}
