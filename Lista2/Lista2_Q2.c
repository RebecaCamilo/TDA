/*
Faça um programa que leia um número e diga se esse número é par ou não.
*/

#include <stdio.h>

int main () {

    int number;

    printf("Enter a integer and not null number that I'll tell you if it's even or odd: ");
    scanf("%d", &number);

    do{
        if (number % 2 == 0) {
            printf("The number is even.\n");
        } else
            printf("The number is odd.\n");
        printf("Type another number to try again or 0 to exit the program: ");
        scanf("%d", &number);
    } while (number != 0);

    printf("Thank you for your time!");

    return 0;
}
