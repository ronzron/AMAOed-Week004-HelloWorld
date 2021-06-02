#include <iostream>

using namespace std;

int main()

{

    int i, j, tmp;

    int A[6];

    cout << "Enter 6 elements" << endl;

    for (i = 0; i < 6; i++)

        cin >> A[i];

    //BUBBLE SORT

    for (i = 0; i < 5; i++)

        for (j = 0; j < 5 - i; j++)

            if (A[j] > A[j + 1])

            {

                tmp = A[j];

                A[j] = A[j + 1];

                A[j + 1] = tmp;
            }

    cout << "Sorted numbers" << endl;

    for (i = 0; i < 6; i++)

        cout << A[i] << " ";

    return 0;
}