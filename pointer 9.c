#include<stdio.h>
int main(){
    float array[5];
    for (int i=0;i<5;i++)
    {
        scanf("%f",&array[i]);
    }
    float *p,temp;
    p=array;

    float max=*p, min=*p;
    for (int i=1;i<5;i++)
    {
        if(max<*(p+i))
        {
            max=*(p+i);
        }
        if(min>*(p+i))
        {
            min=*(p+i);
        }

    }
    printf("Max=%f Min=%f",max,min);
}

