#include<stdio.h>
void cal_area_perimeter (int r, float *a, float *p)
{
*a = 3.14*r*r;
*p = 2*3.14*r;
}

void main()
{
int radius = 10;
float area, perimeter;
cal_area_perimeter(radius, &area, &perimeter);
printf("Area = %f \nPerimeter = %f \n", area, perimeter);
}
