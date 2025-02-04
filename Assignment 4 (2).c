#include<stdio.h>
void main()
{
    int a1[5],a2[5];
    int i,max,min,max_A,min_A;
    printf("Enter 5 integer values for the 1st array : ");
    for(i=0;i<5;i++)
        {
        scanf("%d",&a1[i]);
        }
    printf("Enter 5 integer values for the 2nd array : ");
    for(i=0;i<5;i++)
        {
        scanf("%d",&a2[i]);
        }
    max=a1[0];
    min=a1[0];
    max_A=1;
    min_A=1;
    for(i=1;i<5;i++)
        {
        if(a1[i]>max)
            {
            max=a1[i];
            max_A=1;
            }
        if(a1[i]<min)
            {
            min=a1[i];
            min_A=1;
            }
        }
    for(i=0;i<5;i++)
        {
        if(a2[i]>max)
            {
            max=a2[i];
            max_A=2;
            }
        if(a2[i]<min)
            {
            min=a2[i];
            min_A=2;
            }
        }
    printf("Maximum: %d Array Number: %d\n",max,max_A);
    printf("Minimum: %d Array Number: %d\n",min,min_A);
}

