/*
Fa�a um programa que receba do usu�rio a quantidade de elementos de uma Progress�o Geom�trica (PG) e a raz�o,
gere uma PG em lista com a quantidade de elementos definido pelo usu�rio e imprima. 
Uma PG tem como primeiro elemento o n�mero 1 e o pr�ximo elemento � o anterior multiplicado da raz�o.
Exemplo de uma PG com raz�o 2: 1, 2, 4, 8, 16...
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


