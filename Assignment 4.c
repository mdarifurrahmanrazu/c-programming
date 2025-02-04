#include<stdio.h>
void main()
{
    float num[5];
    float n;
    int i,Count1=0,Count2=0;
    printf("Enter five float numbers : ");
    for(i=0;i<5;i++)
        {
        scanf("%f",&num[i]);
        }
    printf("Enter another number : ");
    scanf("%f",&n);
    for(i=0;i<5;i++)
    {
        if(num[i]>n)
            {
            Count1++;
            }
        else if(num[i]<n)
            {
            Count2++;
            }
    }
    printf("Numbers higher than %.1f: %d\n",n,Count1);
    printf("Numbers lower than %.1f: %d",n,Count2);
}
