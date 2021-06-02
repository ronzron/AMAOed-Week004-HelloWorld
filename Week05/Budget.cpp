#include <iostream>
using namespace std;

int main()
{
    string product = "";
    int amount = 0;

    cout << "Enter the name of the product:" << endl;
    cin >> product;
    cout << "Enter the amount:" << endl;
    cin >> amount;
    cout << product << " Daily Budget: " << amount << endl;
    return 0;
}