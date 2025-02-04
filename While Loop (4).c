#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n>0)
    {
        fact = fact * n;
        n-=1;
    }
    printf("Factorial is %d",fact);
}
