#include <iostream>

using namespace std;

int divide(int n1, int n2)
{
   return n1 / n2;
}

int main()
{
   int n, d;
   for (int i = 0; i < 6; ++i)
   {
      cout << "Enter numerator: ";
      cin >> n;
      cout << "Enter denominator: ";
      cin >> d;
      cout << n << "/" << d << " = " << divide(n, d) << endl
           << endl;
   }
   return 0;
}