#include<stdio.h>
void main()
{
    int n,i,first=0,second=1,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=0;i<=n;
    i++)
    {
        sum=first+second;
        first=second;
        second=sum;
        printf("%d\t",sum);
    }
}
