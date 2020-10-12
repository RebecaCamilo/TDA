/*
URI 2157 | Zero means Zero
Um dia o Prof. Humberto José Roberto fez o seguinte questionamento: Se o zero a esquerda de um número não tem valor algum, por que teria
em outras posições de um número? Analisando da seguinte forma, ele pede sua ajuda para, ao somar dois valores inteiros, que o resultado
seja exibido segundo o raciocínio dele, ou seja, sem os Zeros. Por exemplo, ao somar 15 + 5, o resultado seria 20, mas com esta nova ideia,
o novo resultado seria 2, e, ao somar 99 + 6, o resultado seria 105, mas com esta nova ideia, o novo resultado seria 15.
Escreva um programa que, dado dois números inteiros, sem o algarismo zero, some os mesmos e, caso o resultado tenha algum algarismo zero, que os retire antes de exibir.
*/

#include <stdio.h>

int main () {

    int n1, n2, soma, i;
    int s[15];

    scanf("%d %d", &n1, &n2);
    soma = n1 + n2;


//Separa cada dígito do número e coloca em posições do vetor;

//verificar cada numero da soma e usar if para printar apenas (s[i] != 0)

	return 0;
}
