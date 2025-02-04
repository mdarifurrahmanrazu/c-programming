#include<stdio.h>
void main()
{
    float a[5],sum=0;
    float *p;
    p=a;
    for (int i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
        sum+=*(p+i);
    }
    printf("sum=%.2f",sum);
    getch();
}
