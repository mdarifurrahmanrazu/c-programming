#include<stdio.h>
void main()
{
    int n1,n2,mul=1;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    while(n2>0)
    {
        mul = mul * n1;
        n2-=1;
    }
    printf("%d",mul);

}
