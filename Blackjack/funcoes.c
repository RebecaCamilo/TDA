#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <locale.h>
#include "cabecalho.c"
#include "Baralho.c"


//fun��es
int mostrar_carta(void);
void cabecalho(void);
void linha(void);
void linha2(void);
void menu_player(void);
void pc_wins(void);
void player_wins(void);
void empate(void);



int player_vs_pc(){
	
	setlocale(LC_ALL, "portuguese");

	char opjogo[5];										//Variaveis que armazenam as opcoes dos jogadores em relacao ao jogo.
	char nome_jogador1[20], nome_jogador2[20];
	
	int jogada, totalj, totalc; 				// caso seja Jogador x Computador
	int total1, total2;							// caso seja Jogador x Jogador
    FILE *arquivo = NULL;
	
	//Vez do usuario.
	
    opjogo = 'S'; 											    // inicializando a variavel com a condição verdadeira do while
    
	printf("\t\t\t\t\t\tInsira seu Username: \n");
    scanf("\t\t\t\t\t\t%[ -~]",&nome_jogador1);
    getchar();
	system("cls");											    //limpando o cmd para ficar bonito
    
	cabecalho();
    printf("\t\t\t\t%s você tem que fazer o mais próximo de 21 pontos para ganhar...\n",nome_jogador1);
    printf("\t\t\t\t\t   Porém não pode passar desse limite\n");
    printf("\t\t\t\t\t    Você pode parar após cada jogada\n\n\n");

	totalj = 0;												    // inicializando com 0 a variavel que receberá os valores do JOGADOR

	while ((opjogo == 's') || (opjogo == 'S')) 					//laço que pergunta se o usuario quer fazer a jogada ou nao.
	{
        printf("\t\t\t\t\t       Deseja fazer a jogada?[S/N]\n");
        scanf("%c", &opjogo); 								    //recebe se o usuario quer fazer a jogada, ou não
        getchar();
        printf("\n");
        if ((opjogo == 'n') || (opjogo == 'N')){				//se for um "n/N", o programa para. Se ele quiser continuar...
			break;
        }

		jogada = mostrar_carta();

		totalj += jogada; 									    // o total do jogador, vai ser o valor que ele tinha até então, mais o valor aleatório.

		printf("\t\t\t\t\t\t      PONTOS: %d", totalj);
        linha(); 											    // printa uma linha de "#" (funcao do arquivo 'cabecalho.c')

		if (totalj >= 21) {									    //se o valor passar dos 21, ele não pode pedir mais cartas.
            break;
        }
    }

	printf("\t\t\t\t\t\t%s MARCOU %d PONTOS", nome_jogador1, totalj);        // mostra o total que o jogador conseguiu juntar e continua pra vez do COMPUTADOR
    linha();


	//Vez do Computador
    printf("\t\t\t\t\t\t  VEZ DO COMPUTADOR\n\n");
    printf("\t\t\t\t\t      Agora é minha vez de jogar\n\t\t\t\t\t      Vejo que você fez %d pontos\n\n", totalj);
    
	totalc = 0; 											    	//inicializando com 0 a variável que guardará o total do computador

	while (totalc < totalj && totalc < 21) 
	{
        srand(time(NULL));                                        	//gera numeros aleatorios de 1 ate 10 de acordo com o tempo do pc
        jogada = (rand() % 12) +1;                                 	//guarda na variavel jogada, um numero entre (0 - 9) + 1;
        totalc += jogada;                                         	//o total do computador, vai ser o valor que ele tinha at� ent�o, mais o valor aleat�rio.
        
		if(totalj > 21) {
            break;
        }
        
		printf("\t\t\t  Tirei %d e pretendo continuar jogando, pois ainda estou com %d pontos.\n", jogada, totalc); //mostra a carta e o total que ele juntou at� entao
        sleep(1);                                          			//faz o sistema parar por 1 segundo, at� a prox repeti��o do while (para a fun��o srand funcionar)
    }

    printf("\t\t\t\t\t Tirei %d pontos e fiquei com %d pontos.\n\n\n", jogada, totalc); //mostra a ultima jogada do PC, e o total que ele ficou
    printf("\t\t\t\t\t      O COMPUTADOR MARCOU %d PONTOS\n", totalc);
	linha();

	printf("\t\t\t\t\t\t\tPLACAR\n");
    printf("\t\t\t\t\t     %s  |%d| x |%d|  COMPUTADOR",nome_jogador1, totalj, totalc);

    // Parte do codigo onde vamos pegar pra por no historico de partidos , esses dados ficaram salvos no txt ,hist.txt
    arquivo = fopen("hist.txt","a+"); // abrindo o arquivo
    if(arquivo==NULL) {return 0 ;} // caso não abra retorna nulo
    fprintf(arquivo,"\t\t\t\t\t     %s  |%d| x |%d|  COMPUTADOR\n",nome_jogador1, totalj, totalc);// gravando no txt
    fflush(arquivo);// limpando
    fclose(arquivo);// fechando o arquivo

	linha();

    //Condições para final do jogo

	if (totalc == totalj) {  									//se os dois placares for iguais
        printf("\t\t\t\t\t\tHouve um empate...\n\n");
        empate();
    } else if (totalj == 21) { 									//se o jogador fez 21 pontos exatos e o pc nao
        printf("\t\t\t\t%s GANHOU, fazendo os gloriosos 21 pontos...\n",nome_jogador1);
        player_wins();
    } else if (totalc == 21) {							 		//se o pc fez 21 pontos exatos e o jogador nao
        printf("\t\t\t\tO COMPUTADOR GANHOU, fazendo os gloriosos 21 pontos...\n");
        pc_wins();
    } else if ((totalc > 21) && (totalj > 21)) { 				//se o pc e o jogador ultrapassaram os 21 pontos
        printf("\t\t\t\t    O computador e o jogador perdem por terem um número maior de pontos do que é permitido...\n");
    } else if (totalc > 21 && totalj < 21) { 					//se o pc ultrapassou os 21 pontos, e o jogador não ultrapassou
        printf("\t\t\t   O computador tem um número maior de pontos do que é permitido...\n\t\t\t\t\t\t%s VENCE\n",nome_jogador1);
        player_wins();
    } else if (totalj > 21 && totalc < 21) { 					//se o jogador ultrapassou os 21 pontos, e o pc não ultrapassou
        printf("\t\t\t   %s você tem um número maior de pontos do que é permitido...\n\t\t\t\t\t\tO COMPUTADOR VENCE\n",nome_jogador1);
        pc_wins();
    } else if (totalc > totalj) { 					            //se o pc tem mais pontos que o jogador
        printf("\t\t\t\t    O computador vence por estar mais perto de 21.\n");
        pc_wins();
    } else { 													//a ultima opção seria o jogador tem mais pontos que o pc
        printf("\t\t\t\t    %s vence por estar mais perto de 21.\n", nome_jogador1);
        player_wins();
    }
    printf("\n");
    system("pause");
}

int player_vs_player()
{
	setlocale(LC_ALL, "portuguese");

	char opjogo;										//Variaveis que armazenam as opcoes dos jogadores em relacao ao jogo.
	char nome_jogador1[20], nome_jogador2[20];

	int sorte_pc;                                       // probabilidade do computador fazer outra jogada
	int jogada, totalj = 0, totalc = 0; 				// caso seja Jogador x Computador
	int total1 = 0, total2 = 0;							// caso seja Jogador x Jogador
    FILE *arquivo = NULL;
	
	//Vez do jogador numero 1.
	opjogo = 'S';                                          		 // faz com que entre diretamente no while
    printf("\t\t\t\t\t\tInsira seu Username Player 1: \n");
    scanf("\t\t\t\t\t\t%[ -~]",&nome_jogador1);
    getchar();
    printf("\t\t\t\t\t\tInsira seu Username Player 2: \n");
    scanf("\t\t\t\t\t\t%[ -~]",&nome_jogador2);
    getchar();
	system("cls");
    cabecalho();

	printf("\t\t\t\t%s o jogo funciona por turnos, cada jogador tera sua vez de jogar\n",nome_jogador1);  //print explicando as como será o game
    printf("\t\t\t\t Você tem que fazer o mais próximo de 21 pontos para ganhar...\n");
    printf("\t\t\t\t\t   Porém não pode passar desse limite\n");
    printf("\t\t\t\t\t    Você pode parar após cada jogada\n\n\n");

	total1 = 0; 												// inicializando a variável do jogador 1

	while ((opjogo == 's') || (opjogo == 'S')) 					//Laco que deixa as jogadas a criterio do usuario.
    {
		printf("\t\t\t\t\t  %s deseja fazer a jogada?[S/N]\n",nome_jogador1);
        scanf("%c", &opjogo); 								    //recebe se o usuario quer fazer a jogada, ou não
        getchar();
        printf("\n");

		if ((opjogo == 'n') || (opjogo == 'N')) {				//se for um "n/N", o programa para. Se ele quiser continuar...
            break;
        }

		jogada = mostrar_carta();								//função que gera um número aleatório, e mostra sua respectiva carta

		total1 += jogada; 									    // o total do jogador, vai ser o valor que ele tinha até então, mais o valor aleatório.

		printf("\t\t\t\t\t\t      PONTOS: %d", total1);
        linha(); 											    // printa uma linha de "#" (funcao do arquivo 'cabecalho.c')

		if (total1 >= 21) {									    //se o valor passar dos 21, ele não pode pedir mais cartas.
            break;
        }
    }

	printf("\t\t\t\t\t\t%s MARCOU %d PONTOS",nome_jogador1,total1);	// mostra o total que o jogador conseguiu juntar e continua pra vez do COMPUTADOR
    linha();
    system("pause");


	//Vez do jogador numero 2.

	opjogo = 'S';                                          		 // faz com que entre diretamente no while

	system("cls");
    cabecalho();
    printf("\t\t\t\t\t      Agora é o turno de %s\n",nome_jogador2);  	//print explicando as como será o game
    printf("\t\t\t\t %s você tem que fazer o mais próximo de 21 pontos para ganhar...\n",nome_jogador2);
    printf("\t\t\t\t\t   Porém não pode passar desse limite\n");
    printf("\t\t\t\t\t    Você pode parar após cada jogada\n\n\n");

	total2 = 0; 												// inicializando a variável do jogador 1

	while ((opjogo == 's') || (opjogo == 'S')) 					//Laco que deixa as jogadas a criterio do usuario.
    {
		printf("\t\t\t\t\t  %s deseja fazer a jogada?[S/N]\n",nome_jogador2);
        scanf("%c", &opjogo); 								    //recebe se o usuario quer fazer a jogada, ou não
        getchar();
        printf("\n");

		if ((opjogo == 'n') || (opjogo == 'N')) {				//se for um "n/N", o programa para. Se ele quiser continuar...
            break;
        }

		jogada = mostrar_carta();								//função que gera um número aleatório, e mostra sua respectiva carta

		total2 += jogada; 									    // o total do jogador, vai ser o valor que ele tinha até então, mais o valor aleatório.

		printf("\t\t\t\t\t\t      PONTOS: %d", total2);
        linha(); 											    // printa uma linha de "#" (funcao do arquivo 'cabecalho.c')

		if (total2 >= 21) {									    //se o valor passar dos 21, ele não pode pedir mais cartas.
            break;
        }
    }

    printf("\t\t\t\t\t\t%s MARCOU %d PONTOS", nome_jogador2,total2);	// mostra o total que o jogador conseguiu juntar e continua pra vez do COMPUTADOR
    linha();

	printf("\t\t\t\t\t\t\tPLACAR\n");
    printf("\t\t\t\t\t   %s  |%d| x |%d|  %s",nome_jogador1 , total1, total2 , nome_jogador2);

    // Parte do codigo onde vamos pegar pra por no historico de partidos , esses dados ficaram salvos no txt ,hist.txt
    arquivo = fopen("hist.txt","a+"); // abrindo o arquivo
    if(arquivo==NULL) {return 0 ;} // caso não abra retorna nulo
    fprintf(arquivo,"\t\t\t\t\t   %s  |%d| x |%d|  %s\n",nome_jogador1 , total1, total2 , nome_jogador2);// gravando no txt
    fflush(arquivo);// limpando
    fclose(arquivo);// fechando o arquivo

    linha();


	//Condições para final do jogo
    if (total1 == total2) {  									//se os dois placares for iguais
        printf("\t\t\t\t\t\tHouve um empate...\n\n");
        empate();
    } else if (total1 == 21) { 									//se o jogador1 fez 21 pontos exatos e o jogador2 nao
        printf("\t\t\t\t\t%s GANHOU, fazendo os gloriosos 21 pontos...\n",nome_jogador1);
        player_wins();
    } else if (total2 == 21) {							 		//se o jogador2 fez 21 pontos exatos e o jogador1 nao
        printf("\t\t\t\t%s GANHOU, fazendo os gloriosos 21 pontos...\n",nome_jogador2);
        player_wins();
    } else if ((total1 > 21) && (total2 > 21)) { 				//se o jogador1 e o jogador2 ultrapassaram os 21 pontos
        printf("\t\t\t\t    %s e % perdem por terem um número maior de pontos do que é permitido...\n",nome_jogador1,nome_jogador2);
    } else if (total1 > 21 && total2 < 21) { 					//se o jogador1 ultrapassou os 21 pontos, e o jogador2 não ultrapassou
        printf("\t\t\t   %s tem um número maior de pontos do que é permitido...\n\t\t\t\t\t\t%s VENCEU\n",nome_jogador1,nome_jogador2);
        player_wins();
    } else if (total2 > 21 && total1 < 21) { 					//se o jogador2 ultrapassou os 21 pontos, e o jogador1 não ultrapassou
        printf("\t\t\t   %s tem um número maior de pontos do que é permitido...\nt\t\t\t\t\t\t%s VENCEU\n",nome_jogador2,nome_jogador1);
        player_wins();
    } else if (total1 > total2) { 					        	//se o jogador1 tem mais pontos que o jogador2
        printf("\t\t\t\t    %s venceu por estar mais perto de 21.\n",nome_jogador1);
        player_wins();
    } else { 													//a ultima opção seria o jogador2 tem mais pontos que o jogador1
        printf("\t\t\t\t    %s venceu por estar mais perto de 21.\n",nome_jogador2);
        player_wins();
    }
    printf("\n");
    system("pause");
}

int player_vs_pc();
int player_vs_player();
