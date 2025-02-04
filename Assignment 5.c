#include <stdio.h>
void Swap_Array(int *a1, int *a2, int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = *(a1 + i);
        *(a1 + i) = *(a2 + i);
        *(a2 + i) = temp;
    }
}

int main() {
    int a1[] = {5, 1, 2, 3, 6};
    int a2[] = {3, 7, 1, 9, 0};
    int size = sizeof(a1) / sizeof(a1[0]);
    printf("Input : \n");
    printf("Array 1 : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\nArray 2 : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a2[i]);
    }
    Swap_Array(a1, a2, size);
    printf("\nOutput : \n");
    printf("Array 1 : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\nArray 2 : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a2[i]);
    }
}
