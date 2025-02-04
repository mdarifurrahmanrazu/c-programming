
/* Do-while 1 is given in the slide.*/

/* Do-while 2
#include<stdio.h>
int main()
{
    int x,sum=0;
    do{
        printf("Enter number: ");
        scanf("%d",&x);
        sum+=x;
        printf("sum=%d\n",sum);
    }while(x!=0);
}*/

/* Do-while 4
#include<stdio.h>
int main()
{
    float x, n1, n2;
    char op;
    do{
        printf("Enter 1st number: ");
        scanf("%f",&n1);
        printf("Enter 2nd number: ");
        scanf("%f",&n2);
        printf("Enter operator:");
        scanf(" %c",&op);

        if(op=='+')
            printf("sum=%f\n",n1+n2);
        else if(op=='-')
            printf("Substraction=%f\n",n1-n2);
        else if(op=='*')
            printf("Mupltiplication=%f\n",n1*n2);
        else if(op=='/')
            printf("Division=%f\n",n1/n2);
        else if(op=='#')
            printf("Program Ended\n");
        else
            printf("Invalid Operator\n");

    }while(op!='#');
}*/
