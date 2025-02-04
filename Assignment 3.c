#include<stdio.h>
int main()
{
    int n,digit=0;
    do
    {
        printf("Enter a number :");
        scanf("%d",&n);
        if(n>=0)
        {
        digit = digit*10+n;
        printf("%d\n",digit);
        }
        else
        {
            printf("Program is ended.\n");

        }
    }
    while(1);
}

