/*
Elabore um programa em linguagem C que receba um ano (num�rico inteiro) e informe se o ano � bissexto ou n�o
(anos bissextos s�o m�ltiplos de 4, portanto, se a divis�o do ano por 4 gerar resto igual a zero, o ano � bissexto
- use o operador %).
*/

#include <stdio.h>

int main () {

    int year;

    printf("Enter a year number to check if it was a leap year or not: ");
    scanf("%d", &year);

    do {
    	if (year % 4 == 0) {
        	printf("%d was a leap year.\n", year);
    	} else {
        	printf("%d wasn't a leap year.\n", year);
    	}
    	printf("Want to try again? Type another year to continue or 0 to exit the program: ");
    	scanf("%d", &year);
    } while (year != 0);

    printf("Thanks for your time!");

    return 0;

}
