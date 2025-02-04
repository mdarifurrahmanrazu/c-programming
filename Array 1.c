#include<stdio.h>
void main()
{
    int marks[]={10,20,30,40,50};
    int i,sum=0,avg;
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
        avg=sum/5;
    }
    printf("Total marks is %d\n",sum);
    printf("Average marks is %d",avg);
}
