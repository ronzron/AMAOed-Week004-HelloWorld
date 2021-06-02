#include <cstdlib>
#include <iostream>
#include <string>
#include "payslip.h"

int main()
{

    string Name;
    float Salary, Hours;
    bool x, y;

    cout << "Enter Employee Name\t: ";
    getline(cin, Name);
    do
    {
        cout << "Enter Salary\t: ";
        cin >> Salary;

        if (Salary < 10000)
        {
            cout << "Invalid Amount. Should not be less 10,000\n";
        }
        else
            break;
    } while (x = true);

    do
    {
        cout << "Enter OT Hours\t: ";
        cin >> Hours;
        if (Hours < 1)
        {
            cout << "Invalid Amount. Should not be less than 1 Hour.\n";
        }
        else
            break;
        /* code */
    } while (y = true);

    payslip employee;
    employee.setPayslip(Name, Salary, Hours);
    employee.DeterminePayGradeandTaxRate();
    employee.ComputePay();

    cout << "--------------------------" << endl;
    cout << "Employee Name\t:" << employee.getName() << endl;
    cout << "Basic Salary\t: Php" << employee.getBasicSalary() << endl;
    cout << "Pay Grade\t:" << employee.getPayGrade() << endl;
    cout << "No. of OT Hours\t:" << employee.getOTHours() << endl;
    cout << "OT Pay\t\t:" << employee.getOTPay() << endl;
    cout << "Gross Pay\t:" << employee.getGross() << endl;
    cout << "Witholding Tax\t: Php " << employee.getWithholdingTax() << endl;
    cout << "Net Pay\t: Php " << employee.getNetPay() << endl;
    return 0;
}
