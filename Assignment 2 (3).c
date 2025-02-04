#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    printf("Enter value of c : ");
    scanf("%d",&c);
    printf("Enter value of d : ");
    scanf("%d",&d);
    float mul=1;
    while(b>0)
    {
        mul=mul*a;
        b-=1;
    }
    float div=mul/c;
    float result=1;
    while(d>0)
    {
        result=result*div;
        d-=1;
    }
    printf("%The result is %.2f ",result);
}
