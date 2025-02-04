#include<stdio.h>
//2D array Problem 1

/*int main()
{
    int arr1[20][20],arr2[20][20],arr3[20][20];

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }


    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    printf("\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}*/

//2D array Problem 2
/*int main() {

    int arr1[20][20],arr2[20][20],arr3[20][20];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr3[i][j] = 0;
        }
    }


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("\nResultant Matrix after Multiplication:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}*/

//2D array Additional Problem
/*Write a program to add the diagonals of matrices and store them in separate 1D arrays.*/
/*
int main()
{
    int arr1[20][20],arr2[20][20];
    int right_to_left[20], left_to_right[20];

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }


    for(int i=0;i<4;i++)
    {
        left_to_right[i]=arr1[i][i]+arr2[i][i];
    }
    for(int i=3;i>=0;i--)
    {
        right_to_left[3-i]=arr1[i][i]+arr2[i][i];
    }

    printf("\nPrint the sum of the left-to-right diagonals of two matrices:\n");
    for(int i=0;i<4;i++)
    {
        printf("%d ", left_to_right[i]);
    }

    printf("\nPrint the sum of the right-to-left diagonals of two matrices:\n");
    for(int i=0;i<4;i++)
    {
        printf("%d ", right_to_left[i]);
    }
}*/
