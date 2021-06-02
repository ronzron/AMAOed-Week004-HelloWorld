#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int input;
    cout << "Please enter number: ";
    cin >> input;
    if (input == 0)
    {
        cout << "Hello World" << endl;
    }
    else if (input == 1)
    {
        cout << "I am Groot" << endl;
    }
    else if (input == 2)
    {
        cout << "To the Top" << endl;
    }
    else if (input == 3)
    {
        cout << "Where is the Horizon" << endl;
    }
    else if (input == 4)
    {
        cout << "I do not know" << endl;
    }
    else
    {
        cout << "Yeah, I will." << endl;
    }

    return (EXIT_SUCCESS);
    return 0;
}