/*
URI 1151 | Easy Fibonacci
A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número,depois dos 2 primeiros,
é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.
*/

#include <stdio.h>

int main() {

    int n = 1, m = 0, o = 0, N, i;
    scanf("%d", &N);

    for(i = 1; i < N; i++) {
        if(i % 2 == 1) {
            printf("%d ", o);
            o = m + n;
            m = o;
        } else if(i == 2){
            printf("%d ", o);
        } else if(i % 2 == 0) {
            printf("%d ", o);
            o = m + n;
            n = o;
        }
    }
    printf("%d\n", o);
    printf("");

    return 0;
}
