//Implemente a função strcmp de string.h utilizando qualquer estrutura de repetição.
//A função strcmp compara os conteúdos de duas strings e verifica se são iguais retornando 0.

#include <stdio.h>

int main () {

	char s1[20];
	char s2[20];
	int i;
	int cont = 0;

    	printf("Digite duas palavras (Max 20 letras):\n");
	gets(s1);
	gets(s2);

	for(i = 0; s1[i] != '\0' && i <= sizeof(s1) ; i++) {
		if(s1[i] != s2[i]){
		cont++;
		break;
		}
	}
	for(i = 0; s2[i] != '\0' && i <= sizeof(s2) ; i++) {
		if(s2[i] != s1[i]){
		cont++;
		break;
		}
	}

	if (cont == 0) {
		puts("As palavras sao iguais. Retorno: 0");
	} else {
		puts("As palavras sao diferentes.");
	}

	return 0;
}
