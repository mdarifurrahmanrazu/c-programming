#include "stdio.h"

void main()
{

	char mcq_choice;
	int student_number;
	float book_price;
	double dist_to_sun = 147700000;

	mcq_choice = 'C';
	student_number = 28;
	book_price = 4816.75;
	dist_to_sun = 147700000;

	printf("\nsize of mcq_choice variable: %d bytes", sizeof(mcq_choice));
	printf("\n");

    printf("size of student_number variable: %d bytes", sizeof(student_number));
	printf("\n");

    printf("size of book_price variable: %d bytes", sizeof(book_price));
	printf("\n");

	printf("size of dist_to_sun variable: %d bytes", sizeof(dist_to_sun));
	printf("\n");
}

