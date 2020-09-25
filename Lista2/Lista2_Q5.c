/*
Faça um programa que receba do usuário a quantidade de elementos de uma Progressão Aritmética (PA) e a razão,
gere uma PA em lista com a quantidade de elementos definido pelo usuário e imprima.
Uma PA tem como primeiro elemento o número 0 e o próximo elemento é o anterior somado da razão.
Exemplo de uma PA com razão 3: 0, 3, 6, 9, 12...
*/

#include <stdio.h>

int main () {

    int elementos;
    int razao;
    int i;
    int cont = 1;

    printf("Digite 2 numeros inteiros e nao nulos, referentes a quantidade de elementos de uma P.A. e sua razao. \nQuantidade de elementos: ");
    scanf("%d", &elementos);
    printf("Razao: ");
    scanf ("%d", &razao);

    for (i = 0; cont <= elementos; cont++) {
        i += razao;
        printf("%d\n", i);
    }

	return 0;

}


