//Palíndromo é a frase ou palavra que se pode ler, indiferentemente, da esquerda para a direita ou vice-versa,
//como por exemplo a palavra ARARA ou o nome ANA. Escreva um programa que receba do usuário um texto e informe se é palíndromo ou não.
//Desconsidere caracteres em maíusculo, por exemplo, o nome Ana deve ser identificado como palíndromo.

#include <stdio.h>

int main() {

    char s1[20];
    int i, j, cont = 0;

    puts("Digite uma palavra para descobrir se eh um palindromo: ");
    gets(s1);

    //transforma odos as letras maiusculas pelo usuario em minusculo
    for(i = 0; s1[i] != '\0' && i < sizeof(s1); i++) {
        if(s1[i] >= 65 && s1[i] <= 90) {
            s1[i] = s1[i] + 32;
        }
    }

    //Compara caractere por caractere da palavra em ordem crescente e decrescente
    for(i = 0; s1[i] != '\0' && i < sizeof(s1); i++) {}
    for(j = 0; s1[j] != '\0' && j < sizeof(s1); j++, i--) {
        if(s1[i-1] != s1[j]) {
            cont++;
            break;
        }
    }
    if(cont == 0) {
        puts("A palavra digitada eh um palindromo!");
    } else {
        puts("A palavra digitada NAO eh um palindromo!");
    }

    return 0;
}
