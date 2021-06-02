#include <stdio.h>

// recursive function to print the number digit by digit

void printByDigit(short);

int main()

{

    printf("Enter the number : ");

    short n;

    scanf("%u", &n);

    printf("\n");

    printByDigit(n);

    return 0;
}

// recursive function to print the number digit by digit

void printByDigit(short n)

{

    if (n > 99)

        return;

    printf("%u ", n);

    // recursively call the function to print the other digits

    printByDigit(n + 1);
}