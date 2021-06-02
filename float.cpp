#include <iostream>
int main()
{
    float a[20];
    int i = 0;
    std::cout << "Enter the elements of the array" << std::endl;
    for (i = 0; i < 20; i++)
    {
        std::cin >> a[i];
    }
    for (i = 0; i < 20; i++)
    {
        std::cout << a[i] << std::ends;
    }
    std::cout << std::endl;
    std::cout << a;
    return 0;
}