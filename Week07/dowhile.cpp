#include <iostream>

using namespace std;

int main()
{
    int intHeight, intWidth, intLine;
    cout << "Please enter height: ";
    cin >> intHeight;

    intWidth = 0;
    do
    {
        intLine = intWidth;
        do
        {
            if (intLine > 0)
            {
                cout << " ";
            }
            intLine--;
        } while (intLine > 0);

        intLine = (intHeight * 2) - 1;
        do
        {
            if (intLine % 2 == 0)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
            intLine--;
        } while (intLine > 0);
        cout << endl;
        intWidth++;
        intHeight--;
    } while (intHeight > 0);

    return 0;
}