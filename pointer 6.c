#include<stdio.h>
int addAndSubtract(int *a, int *b, int *sum, int *sub){
    *sum= *a+*b;
    *sub= *a-*b;
}
int main(){
    int a=4,b=5,sum,sub;
    addAndSubtract(&a,&b,&sum,&sub);
    printf("Sum=%d\n",sum);
    printf("Sub=%d",sub);
}
