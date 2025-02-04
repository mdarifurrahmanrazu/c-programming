#include<stdio.h>
void main()
{
    int n,i,j,k,fact,sum;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1,fact=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("%d\n",fact);
    {


    if(n%2==0)
    {
        for(j=n,sum=0;j<=fact;j+=2)
    {
        sum=sum+j;
    }

    }
    else
    {
        for(k=n+1,sum=0;k<=fact;k+=2)
        {
            sum=sum+k;
        }
    }
    }

    printf("%d\n",sum);

}
