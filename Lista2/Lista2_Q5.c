/*
Fa�a um programa que receba do usu�rio a quantidade de elementos de uma Progress�o Aritm�tica (PA) e a raz�o,
gere uma PA em lista com a quantidade de elementos definido pelo usu�rio e imprima.
Uma PA tem como primeiro elemento o n�mero 0 e o pr�ximo elemento � o anterior somado da raz�o.
Exemplo de uma PA com raz�o 3: 0, 3, 6, 9, 12...
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


