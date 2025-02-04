#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter n =");
    scanf("%d",&n);
    printf("1+2+3+4+5+.......+%d",n);
    for(i=1,sum=0; i<=n; i+=1)
    {
        sum+=i;
    }
    printf(" = %d\n",sum);
}
