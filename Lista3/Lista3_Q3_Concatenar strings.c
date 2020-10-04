//Implemente a função strcat de string.h utilizando qualquer estrutura de repetição.
//A função strcat concatena o conteúdo de uma string em outra.
//DICA: Cuidado com o espaço em memória.

#include <stdio.h>

int main () {

	char s1[40], s2[20];
	int i , j = 0;

	printf("Digite duas palavras (Max 20 letras cada):\n");
	gets(s1);
	gets(s2);

	//descobrir posição do ultimo caractere da primeira string
	for(i = 0; s1[i] != '\0' && i < sizeof(s1); i++) {}

    //passar valores da segunda string para a primeira a partir do ultimo caractere da primeira string
    for(j = 0; s2[j] != '\0' && j < sizeof(s2); j++, i++) {
        s1[i] = s2[j];
    }

	printf("A palavra concatenada eh: %s", s1);

	return 0;
}
