#include<stdio.h>
void main()
{
    int i,fact;
    printf("Enter a number : ");
    scanf("%d",&i);

    for(fact=1;i>0;i-=1)
    {
        fact=fact*i;
    }
    printf("Factorial is %d",fact);
}
