#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter n =");
    scanf("%d",&n);
    printf("4+7+10+.......+%d",n);
    for(i=4,sum=0; i<=n; i+=3)
    {
        sum+=i;
    }
    printf(" = %d\n",sum);
}
