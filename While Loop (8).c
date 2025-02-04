#include<stdio.h>
void main()
{
    int n,i=0,first=0,second=1,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=first+second;
        first=second;
        second=sum;
        i++;
        printf("%d\t",sum);
    }
}
