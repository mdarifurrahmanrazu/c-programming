#include<stdio.h>
int main()
{
    float n,i,sum;
    printf("Enter n = ");
    scanf("%f",&n);

    for(i=3,sum=0; i<=n; i+=2)
    {
        sum=sum+((i/2)*(i/2));
    }
    printf("%.1f\n",sum);
}


