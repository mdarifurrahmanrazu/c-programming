#include <stdio.h>
int digitSum(int n)
{
    int sum=0;
    while (n>0)
    {
        sum=sum+n % 10;
        n=n/10;
    }
    return sum;
}

void main()
{
    int n;
    printf("Enter a numbers : ");
    scanf("%d",&n);
    printf("The sum of the digits is: %d\n",digitSum(n));
}

