#include <stdio.h>
void ArraySum(int *a1, int *a2, int *a3, int size)
{
    for (int i=0; i<size; i++)
    {
        *(a3 + i) = *(a1 + i) + *(a2 + i);
    }
}

int main()
{
    int a1[5] = {5, 1, 2, 3, 6};
    int a2[5] = {2, 7, 1, 9, 0};
    int a3[5];
    int size = 5;
    ArraySum(a1,a2,a3,size);
    printf("Array 3: ");
    for (int i=0; i<size; i++)
    {
        printf("%d ", a3[i]);
    }
}

