#include <string.h>

#include <stdio.h>

void main(){

char country[]="Bangladesh";

char *capital = "Dhaka";

int len;

len = strlen (country);

printf ("Length of %s is %d\n", country, len);

len = strlen (capital);

printf ("Length of %s is %d\n", capital, len);

len = strlen ("Bangla");

printf ("Length of %s is %d\n", "Bangla", len);

}
