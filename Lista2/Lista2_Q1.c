/*
Crie um Menu. O menu deverá ter opções quaisquer de 1 a 9, se o usuário digitar algum número entre 1 e 9, o programa deverá reexibir o menu.
Caso o usuário digitar qualquer outro número, com exceção do 0, o programa deve informar que a opção desejada é inexistente.
E por fim, caso o usuário digitar 0, o programa deve exibir mensagem de despedida e terminar sua execução.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int op;

    printf("Welcome to our restaurant. What would u like to order?\n");

    do {
    printf("\n[1] Pizza \n[2] Hamburguer \n[3] Spaghetti \n[4] French fries \n[5] Fried fish \n[6] Salad \n[7] Juice \n[8] Soda \n[9] Ice cream\n[0] Exit\n\n");
    printf("Enter the number of the option you wish: ");
    scanf("%d", &op);
    system ("cls");
    switch (op) {
        case 0:
            printf("Have a good meal!");
            return 0;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("Your order is being prepared!\n");
            break;
        default:
            printf("Desired option is nonexistent.\n");
        }
     } while(op != 0);

    return 0;
}
