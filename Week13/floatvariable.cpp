#include <stdio.h>
union u
{
    float a;
    float b;
};
union u x;
int main()
{

    x.b = 4;
    printf("address of two variable");
    printf("\n %p %p\n", &x.a, &x.b);
    printf("\nvalue of the two variable");
    printf("\n %f %f\n", x.a, x.b);
    return 0;
}