#include<stdio.h>
int main(){
    float array[5];
    for (int i=0;i<5;i++)
    {
        scanf("%f",&array[i]);
    }
    float *p,temp;
    p=array;
    for (int i=0;i<5/2;i++)
    {
         temp = *(p+i);
         *(p+i) = *(p+4-i);
         *(p+4-i) = temp;
    }
    for (int i=0;i<5;i++)
    {
        printf("%.1f ",array[i]);
    }
}
