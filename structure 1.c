#include <stdio.h>
struct book {
    char name[100];
    char author[100];
    float price;
    int pages;
};

int main() {

    struct book book1, book2;


    printf("Enter information for the first book:\n");
    printf("Book Name: ");
    scanf("%s", book1.name);
    printf("Author Name: ");
    scanf("%s", book1.author);

    printf("Price: ");
    scanf("%f", &book1.price);

    printf("Number of Pages: ");
    scanf("%d", &book1.pages);


    printf("\nEnter information for the second book:\n");
    printf("Book Name: ");
    scanf("%s", book2.name);

    printf("Author Name: ");
    scanf("%s", book2.author);

    printf("Price: ");
    scanf("%f", &book2.price);

    printf("Number of Pages: ");
    scanf("%d", &book2.pages);


    float totalPrice = book1.price + book2.price;
    printf("\nTotal price of the two books: %.2f\n", totalPrice);

    return 0;
}

