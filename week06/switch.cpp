#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int input;
    cout << "Please enter number: ";
    cin >> input;
    switch (input)
    {
    case 0:
        cout << "Hello World" << endl;
        break;
    case 1:
        cout << "I am good" << endl;
        break;
    case 2:
        cout << "To the Top" << endl;
        break;
    case 3:
        cout << "Where is the Horizon" << endl;
        break;
    case 4:
        cout << "I do not know" << endl;
        break;
    default:
        cout << "Yeah, I will." << endl;
        break;
    }
    return (EXIT_SUCCESS);
    return 0;
}
