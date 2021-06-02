#include <iostream>
using namespace std;

int main()
{
    int x = 654321;

    int &ref = x;

    ref = 27946;
    cout << "x = " << x << endl;

    return 0;
}