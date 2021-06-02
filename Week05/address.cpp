#include <iostream>
using namespace std;

int main()
{
    string user = "";
    string password = "";
    string address = "";

    cout << "Enter user's name: " << endl;
    cin >> user;

    cout << "Enter user password: " << endl;
    cin >> password;

    cout << "Enter address: " << endl;
    cin >> address;

    cout << "Hi, I am " << user << " I live at " << address << "." << endl;

    return 0;
}