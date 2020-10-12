/*
URI 2157 | Sequência Espelho
Imprimir números em sequência é uma tarefa relativamente simples. Mas, e quando se trata de uma sequência espelho?
Trata-se de uma sequência que possui um número de início e um número de fim, e todos os números entre estes, inclusive estes,
são dispostos em uma sequência crescente, sem espaços e, em seguida, esta sequência é projetada de forma invertida,
como um reflexo no espelho. Por exemplo, se a sequência for de 7 a 12, o resultado ficaria 789101112211101987.
Escreva um programa que, dados dois números inteiros, imprima a respectiva sequência espelho.
*/

#include <stdio.h>

int main () {

	unsigned int inicio, fim, i, n, aux1, aux2;

	puts("Quantas sequencias voce quer fazer? ");
	scanf("%u", &n);

	while (n > 0)	{
        puts("Digite o numero inicial e o numero final da sua sequencia:");
        scanf("%u %u", &inicio, &fim);
		for (i = inicio; i <= fim; i++) {
			printf("%u", i);
		}
		for (i = fim; i >= inicio; i--) {
			aux1 = i;
			while(aux1) {
                aux2 = aux1 % 10;
                printf("%u", aux2);
                aux1 /= 10;
			}
		}
		n--;
		printf("\n");
	}
	return 0;
}
