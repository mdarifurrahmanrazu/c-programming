#include <stdio.h>
void main()
{
    char a[4][4];
    int i,j;
    int count1,Count2;
    printf("Enter 16 characters for the 4x4 array : ");
    for(i=0;i<4;i++)
        {
        for(j=0;j<4;j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    for(j=0;j<4;j++)
    {
        count1=0;
        Count2=0;
        for(i=0;i<4;i++)
        {
            if(a[i][j]>='A' && a[i][j]<='Z')
            {
                count1++;
            }
            else if(a[i][j]>='a' && a[i][j]<='z')
            {
                Count2++;
            }
        }
        printf("Column %d - Uppercase: %d Lowercase: %d\n",j + 1, count1, Count2);
    }
}
