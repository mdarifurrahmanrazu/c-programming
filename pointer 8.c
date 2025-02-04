#include<stdio.h>
int main(){
    float array[5];
    for (int i=0;i<5;i++)
    {
        scanf("%f",&array[i]);
    }
    float *p,temp;
    p=array;

    for (int i=0;i<5;i++)
    {
        printf("Value=%.1f  Index=%d  Address=%d\n",*(p+i),i,(p+i));
    }
}
