#include<stdio.h>
int main(){
    float array[5], array2[5];
    for (int i=0;i<5;i++)
    {
        scanf("%f",&array[i]);
    }
    float *p,*q;
    p=array;
    q=array2;
    for (int i=0;i<5;i++)
    {
        *(q+i)=*(p+i);
    }
    for (int i=0;i<5;i++)
    {
        printf("%.1f  ", array2[i]);
    }
}
