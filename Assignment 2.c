#include<stdio.h>
void main()
{
    int a,b;
    int sum5=0,sum7=0,sum13=0;
    printf("Enter starting value : ");
    scanf("%d",&a);
    printf("Enter ending value : ");
    scanf("%d",&b);
    int i=a;
    while(i<=b)
    {
        if(i%5==0)
        {
            sum5+=i;
        }
        else if(i%7==0)
        {
            sum7+=i;
        }
        else if(i%13==0)
        {
            sum13+=i;
        }
        i++;
    }
    printf("\nSum of numbers divisible by 5: %d\n",sum5);
    printf("Sum of numbers divisible by 7: %d\n",sum7);
    printf("Sum of numbers divisible by 13: %d\n",sum13);
}
