#include<stdio.h>
int search_number(float *array, float *size, float *num)
{
    float sum=0;
    int i,count=0;
    for(i=0;i<*size;i++)
    {
        if(*(array+i)==*num)
        {
            count++;
        }
    }
    return count;
}
int main(){
    float array[5],size=5,num;
    for (int i=0;i<5;i++)
    {
        scanf("%f",&array[i]);
    }
    scanf("%f",&num);
    int count=search_number(array,&size,&num);
    printf("%d",count);
}

