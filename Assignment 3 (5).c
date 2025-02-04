#include <stdio.h>
int is_prime(int n)
 {
    if (n <= 1)
    return 0;
    int i;
    for (i=2; i*i<=n; i++)
    {
        if (n%i==0)
        return 0;
    }
    return 1;
}
int is_odd(int n)
{
    return n%2!=0;
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if (is_odd(num))
        {
        if (is_prime(num))
        {
            printf("Odd and prime number.\n");
        } else
        {
            printf("Odd number.\n");
        }
    }
    else
    {
        printf("Not an odd number.\n");
    }

    return 0;
}

