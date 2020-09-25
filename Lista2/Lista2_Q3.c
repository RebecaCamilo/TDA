/*
Faça um programa que leia um número e retorne o fatorial deste número.
*/

#include <stdio.h>

int main(){

	int number;
	int i;
	int factorial = 1;

	printf("Enter an integer greater than zero number: \n");
	scanf("%d", &number);

	if(number <= 0){
		printf("ERROR! You entered a number different from the one requested.");
		return 0;
	} else{
		for(i = 1; i <= number; i++){
			factorial = factorial * i;
		}
	}

	printf("%d", factorial);

	return 0;

}
