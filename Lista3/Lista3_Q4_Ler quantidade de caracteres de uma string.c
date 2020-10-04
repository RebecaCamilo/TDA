//Implemente a função strlen de string.h utilizando qualquer estrutura de repetição.
//A função strlen retorna a quantidade de caracteres em uma string.
//DICA: A string termina com o caractere especial '\0'.

#include <stdio.h>

int main() {

    char s1[20];
    int i, cont = 0;

    puts("Digite uma palavra (Max 20 letras)");
    gets(s1);

    for(i =0; s1[i] != '\0' && i < sizeof(s1); i++) {
        cont++;
    }

    printf("A palavra digitada tem %d caracteres.", cont);

    return 0;
}
