#include <stdio.h>
int Prime(int num)
{
    if(num<=1)
        {
        return 0;
        }
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
return 1;
}
void main()
{
    int n[10];
    int i;
    printf("Enter 10 integer values : ");
    for(i=0;i<10;i++)
        {
        scanf("%d",&n[i]);
        }
    printf("Prime numbers in the array : ");
    for(i=0;i<10;i++)
    {
        if (Prime(n[i]))
        {
            printf("%d ",n[i]);
        }
    }
}

