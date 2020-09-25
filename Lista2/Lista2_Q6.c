/*
Faça um programa que receba do usuário a quantidade de elementos de uma Progressão Geométrica (PG) e a razão,
gere uma PG em lista com a quantidade de elementos definido pelo usuário e imprima. 
Uma PG tem como primeiro elemento o número 1 e o próximo elemento é o anterior multiplicado da razão.
Exemplo de uma PG com razão 2: 1, 2, 4, 8, 16...
*/

#include <stdio.h>

int main () {

    int elementos;
    int razao;
    int i;
    int cont = 1;

    printf("Digite 2 numeros inteiros e nao nulos, referentes a quantidade de elementos de uma P.G. e sua razao. \nQuantidade de elementos: ");
    scanf("%d", &elementos);
    printf("Razao: ");
    scanf ("%d", &razao);

    for (i = 1; cont <= elementos; cont++) {
        i *= razao;
        printf("%d\n", i);
    }

	return 0;

}


