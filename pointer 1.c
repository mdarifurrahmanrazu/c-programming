#include<stdio.h>
void swapping(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void main()
{
    int a=10,b=30;

    printf("Before swapping: %d %d\n",a,b);
    swapping(&a,&b);
    printf("After swapping: %d %d",a,b);
    getch();

}

