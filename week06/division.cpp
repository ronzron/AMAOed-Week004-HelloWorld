#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    float numerator, denominator;

    cout << "Please enter first number: ";
    cin >> numerator;

    cout << "Please enter second number: ";
    cin >> denominator;

    if (numerator == 0 || denominator == 0)
    {
        cout << "Invalid Input!";
    }
    else
    {
        cout << numerator / denominator;
    }
}
