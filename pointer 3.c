#include<stdio.h>
void cal_avg(float *array, float *size, float *avg)
{
    float sum=0;int i;
    for(i=0;i<*size;i++)
    {
        sum+=*(array+i);
    }
    *avg = sum/ *size;
}
int main(){
    float array[5],size=5,avg;
    for (int i=0;i<5;i++)
    {
        scanf("%f",&array[i]);
    }
    cal_avg(array,&size,&avg);
    printf("%f",avg);
}
