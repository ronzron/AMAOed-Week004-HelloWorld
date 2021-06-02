#include <iostream>
using namespace std;

int main()
{
    int height;
    cout << "Enter the height: ";
    cin >> height;
    char arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
    for (int i = 0; i < height; i++)
    {
        for (int j = height - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}