#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[5];
    cout << "Enter 5 integers: " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "\n5 integers are: ";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}