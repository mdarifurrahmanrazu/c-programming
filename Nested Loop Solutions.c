//Nested Loop Solution 1 is given in the slide.

#include<stdio.h>

//Nested Loop Solution 2
/*
int main()
{
    for (int i=1; i<=5;i++)
    {
        for (int j=1; j<=i;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}*/

//Nested Loop Solution 3
/*
int main()
{
    int sum=0, fact;
    for (int i=1; i<=7; i++)
    {
        fact=1;
        for (int j=1; j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    printf("%d", sum);
}*/

//Nested Loop Solution 4
/*
int main()
{
    float sum=0, fact;
    for (int i=1; i<=7; i++)
    {
        fact=1;
        for (int j=1; j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+(1/fact);
    }
    printf("%f", sum);
}*/

//Nested Loop Solution 5
/*
int main()
{
    int sum, fact;
    for (int i=10; i<=1000; i++)
    {
        sum=0;
        for (int j=1; j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i)
        {
            printf("%d\n", i);
        }
    }
}*/

//Nested Loop Solution 6
/*
int main()
{
    int sum, fact,j,i;
    for (int i=100; i<=200; i++)
    {
        for ( j=2; j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d\n", i);
        }
    }
}*/

//Nested Loop Solution 7
/*
int main()
{
    int sum=0, fact;
    for (int i=1; i<=7; i++)
    {
        fact=1;
        for (int j=1; j<=i;j++)
        {
            fact=fact*j;
        }
        printf("%d\n", fact);
    }
}
*/


//Nested Loop Solution 8
/*
int main()
{
    int sum=0, fact;
    for (int i=1; i<=4; i++)
    {
        fact=1;
        for (int j=4; j>i;j--)
        {
            printf(" ");
        }

        if(i!=1)
        {
            printf("*");
            for (int j=1; j<2*i-2;j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        else{
            printf("*\n");
        }
    }
}
*/

//Nested Loop Solution 9
/*
int main()
{
    int sum=0,num3, num2, num, total_digits=0,digit;
    scanf("%d",&num);
    num3=num2=num;
    while(num2!=0)
    {
        total_digits++;
        num2/=10;
    }
    for (num3; num3!=0; num3/=10)
    {
        int fact=1;
        digit=num3%10;
        for (int j=1; j<=total_digits;j++)
        {
            fact=fact*digit;
        }
        sum+=fact;
    }
    if(num==sum)
    {
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }
}*/


//Nested Loop Solution 10
/*int main()
{
    int sum=0, fact;
    for (int i=1; i<=5; i++)
    {
        for (int j=0; j<=5-i;j++)
        {
            printf("%c",65+j);
        }

        if(i!=1){
            for (int j=1; j<2*i-2;j++)
            {
                printf(" ");
            }
            for (int j=5-i; j>=0; j--)
            {
                printf("%c",65+j);
            }
            printf("\n");
        }
        else
        {
            for (int j=3; j>=0; j--)
            {
                printf("%c",65+j);
            }
            printf("\n");
        }
    }
}*/




