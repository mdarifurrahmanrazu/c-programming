#include <stdio.h>
void main()
{
    int a[4][4];
    int i,j;
    int max,min;
    int col_Sum[4]={0};
    printf("Enter 16 integers for the 4x4 array : ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        max=a[i][0];
        min=a[i][0];
        for(j=1;j<4;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
            if(a[i][j]<min)
            {
                min = a[i][j];
            }
        }
        printf("Row %d - Maximum: %d Minimum: %d\n",i + 1,max,min);
    }
    for(j=0;j<4;j++)
    {
        for(i=0;i<4;i++)
        {
            col_Sum[j]+=a[i][j];
        }
    }
    printf("Sum of each column : ");
    for(j=0;j<4;j++)
    {
        printf("%d\n",col_Sum[j]);
    }
}
