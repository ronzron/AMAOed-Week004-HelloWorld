#include <iostream>

using namespace std;

int main()
{
    int height;
    int r = 1;
    cout << "Enter height: ";
    cin >> height;
    for (r = 1; r <= height; r++)
    {

        for (int spaces = 1; spaces <= (height - r); spaces++)
        {
            cout << " ";
        }
        for (int stars = 1; stars <= r; stars++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}