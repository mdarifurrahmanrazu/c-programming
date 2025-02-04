#include<stdio.h>
void main()
{
    int length, width, perimeter, area;

    length = 20;
    width = 10;

    perimeter = 2 * (length + width);
    area = length * width;

    printf("The value of perimeter %d\n", perimeter);
    printf("The value of area %d", area);
}
