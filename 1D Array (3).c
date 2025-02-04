#include<stdio.h>
void main()
{
    int num[5];
    int n,i,count=0;
    for(i=0;i<5;i++)
    {
        printf("Enter your number : ");
        scanf("%d",&num[i]);
    }
    printf("Enter your choice : ");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(num[i]==n)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("%d",count);
    }
    else
    {
        printf("Not found");
    }
}
