
#include<stdio.h>

/* Break-1
int main()
{
    int i;
    for (i=1;i<=10;i++)
    {
        if(i>5)
        {
            break;
        }
        printf("%d\n",i);
    }
}
*/

/* Break-2

int main()
{
    int i, n, f=0;
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if (f==1 || n==1)
    {
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}*/

/* Continue-1

int main()
{
    int i;
    for (i=1;i<=10;i++)
    {
        if(i%2==0)
        {
           continue;
        }
        printf("%d\n",i);
    }
}*/

/* Continue-2
int main()
{
    int i;
    for (i=1;i<=50;i++)
    {
        if(i%3==0)
        {
           continue;
        }
        printf("%d\n",i);
    }
}*/
