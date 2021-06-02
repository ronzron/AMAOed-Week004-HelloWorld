#include <iostream>

using namespace std;

int main()
{
    int height;
    cout << "Enter height: ";
    cin >> height;

    // Right angle triangle
    // *
    // **
    // ***
    //The stars are increasing on each row
    int r = 1;
    while (r <= height)
    {
        // initialize stars from col 1
        int c = 1;
        // stars in a row are same as the row number
        while (c <= r)
        {
            cout << "*";
            c++;
        }
        cout << endl;
        r++;
    }
    cout << endl;
}