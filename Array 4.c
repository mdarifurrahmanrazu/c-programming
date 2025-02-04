#include<stdio.h>
void main()
{
    int num[10];
    int i,count1=0,count2=0,count3=0;
    for(i=0;i<10;i++)
    {
        printf("Enter your value : ");
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++)
    {
        if(num[i]>0)
        {
            count1++;
        }
        else if(num[i]<0)
        {
            count2++;
        }
        else if(num[i]==0)
        {
            count3++;
        }
    }
    if(count1>0)
    {
        printf("\n\nPositive number is : %d\n",count1);
    }
    else
        printf("Zero");
    if(count2>0)
    {
        printf("Negative number is : %d\n",count2);
    }
    else
        printf("zero");
     if(count3>0)
    {
        printf("Number Zero is : %d\n",count3);
    }
    else
        printf("zero");
}
