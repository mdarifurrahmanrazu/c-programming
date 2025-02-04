#include<stdio.h>
void main()
{
    int i,sum;

    for(i=1,sum=0; i<=20; i+=1)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
