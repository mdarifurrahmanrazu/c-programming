#include <stdio.h>
int main()
{
    float radius, PI, diameter, perimeter, area;

    radius = 7.5;
    PI = 3.1416;

    diameter = 2 * radius;
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Diameter %.2f\n", diameter);
    printf("Perimeter %.2f\n", perimeter);
    printf("Area %.2f", area);
}
