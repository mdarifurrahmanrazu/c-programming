#include<stdio.h>
void main()
{
    float Celsius, Fahrenheit;

    Fahrenheit = 98.6;

    Celsius = (5* Fahrenheit - 160)/9;

    printf("The value of Celsius %.2f", Celsius);
}
