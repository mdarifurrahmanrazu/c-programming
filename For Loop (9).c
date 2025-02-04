#include<stdio.h>
void main()
{
    int y;
    for(y=1; y<=2022; y++)
    {
        if(y%4==0 && y%100!=0)
        {
            printf("%d\n",y);
        }
        else if(y%400==0)
        {
            printf("%d\n",y);
        }

    }
}
