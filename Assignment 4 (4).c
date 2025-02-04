#include <stdio.h>
void main()
{
    int Value[10];
    char letter[10];
    int i,count1=0,count2=0;
    printf("Enter 10 ASCII values of letters : ");
    for(i=0;i<10;i++)
        {
        scanf("%d",&Value[i]);
        letter[i]=(char)Value[i];
        }
    printf("Letters : ");
    for(i=0;i<10;i++)
    {
        printf("%c ",letter[i]);
        if(letter[i]>='A' && letter[i]<='Z')
        {
            count1++;
        }
        else if(letter[i]>='a' && letter[i]<='z')
        {
            count2++;
        }
    }
    printf("\n");
    printf("Capital Letters: %d\n", count1);
    printf("Small Letters: %d", count2);
}

