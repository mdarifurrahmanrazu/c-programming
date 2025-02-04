#include<stdio.h>
void main()
{
    int i,start,end;
    printf("Enter the starting number : ");
    scanf("%d",&start);
    printf("Enter the ending number : ");
    scanf("%d",&end);
    for (i=start; i<=end; i++)
        {
        if (i%7==0 || i%11==0 || i%13==0)
        {
            continue;
        }
        if (i%17==0)
        {
           break;
        }
        printf("%d ",i);
    }
    printf("\n");
}

