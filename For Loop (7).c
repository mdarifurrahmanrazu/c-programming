#include<stdio.h>
void main()
{
    int n1,n2,mul;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);

    for(mul=1;n2>0;n2-=1)
    {
        mul=mul*n1;
    }
    printf("%d",mul);
}
