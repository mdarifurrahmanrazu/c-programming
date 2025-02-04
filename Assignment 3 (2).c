#include<stdio.h>
void main()
{
    int n,sum_even=0,sum_odd=0;
    do
    {
        printf("Enter a number : ");
        scanf("%d",&n);
        if(n==0)
        {
            printf("0 is not Even or Odd.Program is ended.\n");
            break;
        }
        else if(n%2==0)
        {
            sum_even=sum_even+n;
        }
        else
        {
            sum_odd=sum_odd+n;
        }

        printf("Output:\nSum of even numbers:%d\n",sum_even);
        printf("Sum of odd numbers:%d\n\n",sum_odd);

    }
    while(1);
}

