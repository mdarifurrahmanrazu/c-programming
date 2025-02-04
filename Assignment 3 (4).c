#include <stdio.h>
int factorial(int n)
{
    int i,fact=1;
    for(i=1; i<=n; i++)
    {
        fact= fact*i;
    }
    return fact;
}
int main()
{
    int i;
    for (i=1; i<=10; i++)
    {
        printf("Factorial of %d is: %d\n", i, factorial(i));
    }

    return 0;
}

