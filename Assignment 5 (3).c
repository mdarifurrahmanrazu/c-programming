#include <stdio.h>
void MaxMinArray(int *arr, int size, int *max, int *min) {
    *max = arr;
    *min = arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max) {
            *max = arr + i;
        }
        if (*(arr + i) < *min) {
            *min = arr + i;
        }
    }
}

int main() {
    int arr[4] = {4, 3, 2, 0};
    int size = 4;
    int *max = 0, *min = 0;
    MaxMinArray(arr, size, &max, &min);
    printf("Max: %d Min: %d\n", *max, *min);
    printf("Max_Mem_Address: %u Min_Mem_Address: %u\n", &min ,&max);
}
