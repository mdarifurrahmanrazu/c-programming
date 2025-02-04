#include<stdio.h>
void main()
{
    int marks[5];
    int i,sum=0,avg;
    for(i=0;i<5;i++)
    {
        printf("Enter your marks : ");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
        avg=sum/5;
    }
    printf("Total marks is : %d\n",sum);
    printf("Average marks is : %d",avg);
}
