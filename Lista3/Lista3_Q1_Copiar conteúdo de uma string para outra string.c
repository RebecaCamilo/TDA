//Implemente a função strcpy de string.h utilizando qualquer estrutura de repetição.
//A função strcpy copia o conteúdo de uma string para outra.
//DICA: Cuidado com o espaço em memória.

#include <stdio.h>

int main () {

	char s_origem[20];
	char s_destino[20];
	int i;

	puts("Digite uma ou duas palavras (Max 20 letras):");
	gets(s_origem);
	gets(s_destino);

	for(i = 0; s_origem[i] != '\0' || s_destino[i] != '\0' && i < sizeof(s_origem); i++) {
		s_destino[i] = s_origem[i];
	}

	printf("\nA primeira palavra digitada foi: %s", s_origem);
	printf("\nA segunda palavra agora e: %s\n", s_destino);

	return 0;
}
