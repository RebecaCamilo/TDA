//Implemente a fun��o strcpy de string.h utilizando qualquer estrutura de repeti��o.
//A fun��o strcpy copia o conte�do de uma string para outra.
//DICA: Cuidado com o espa�o em mem�ria.

#include <stdio.h>

int main () {

	char s_origem[20];
	char s_destino[20];
	int i;

	puts("Digite uma ou duas palavras (Max 20 letras):");

	scanf("%s", &s_origem);
	scanf("%s", &s_destino);

	for(i = 0; s_origem[i] != '\0' || s_destino[i] != '\0' && i < sizeof(s_origem); i++) {
		s_destino[i] = s_origem[i];
	}

    printf("\nA primeira palavra digitada foi: %s", s_origem);
    printf("\nA segunda palavra agora e: %s\n", s_destino);

	return 0;
}
