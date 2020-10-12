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

    int n1, n2, soma, i = 0, array[30];

    while(scanf("%d %d", &n1, &n2) && n1 != 0 || n2 != 0) {
        soma = n1 + n2;
        while(soma) {
            array[i] = soma % 10;
            soma /= 10;
            i++;
        }
        for(i -= 1; i >= 0; i--) {
            if(array[i])
                printf("%d", array[i]);
        }
        printf("\n");
    }
    return 0;
}
