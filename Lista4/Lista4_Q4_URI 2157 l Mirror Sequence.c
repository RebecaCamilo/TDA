#include <stdio.h>

int main () {

	unsigned int inicio, fim, i, n;

	scanf("%u", &n);

	while (n--)	{
        scanf("%u %u", &inicio, &fim);
		for (i = inicio; i <= fim; i++) {
			printf("%u", i);
		}
		for (i = fim; i >= inicio; i--) {
			printf("%u", i);
		}
		printf("\n");
	}
	return 0;
}
