#include "funcoes.c"

int main() {
	setlocale(LC_ALL, "portuguese");

	char opjogo;										//Variaveis que armazenam as opcoes dos jogadores em relacao ao jogo.

	do{
        cabecalho();									//puxa a função cabeçalho, que pinta o nome blackjack.
        menu_player();									// mostra o menu de 1 , 2 jogadores , Creditos , Regras e Sair
        scanf ("%c", &opjogo);  						// scanf que recebe o total de jogadores (max 2)
        getchar();


        switch(opjogo){

            case '1':                                   //condição 1 (JOGADOR X COMPUTADOR)
                player_vs_pc();
                break;

            case '2': 									// JOGADOR x JOGADOR (mais conhecido como X1)
				player_vs_player();
                break;
            
			case '3':									//menu regras
                system("cls");
                historico();
                system("pause");
                break;

			case '4':									//menu regras
                system("cls");
                regras();
                system("pause");
                break;

			case '5':  									//menu creditos
                system("cls");
                creditos();
                system("pause");
                break;

			case '6': 									//encerrar programa
                system("cls");
                fimdejogo();
                system("pause");
                break;

            default:  									//programa��o segura
            	system("cls");
            	cabecalho();
            	printf("\n\n\n\t\t\t\t\tOpção inválida, tente novamente...\n\n\n");
            	system("pause");

        }
        
        system("cls");
        
    } while(opjogo != '6');

    return 0;
}
