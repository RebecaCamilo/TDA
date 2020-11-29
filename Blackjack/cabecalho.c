#include <stdio.h>
#include <time.h>

void cabecalho(void)
{
 printf("########################################################################################################################\n");
 printf("\t\t     ____    _                    _____   _  __       _               _____   _  __		\n");
 printf("\t\t    |  _ \\  | |          /\\      / ____| | |/ /      | |     /\\      / ____| | |/ /		\n");
 printf("\t\t    | |_) | | |         /  \\    | |      | ' /       | |    /  \\    | |      | ' / 		\n");
 printf("\t\t    |  _ <  | |        / /\\ \\   | |      |  <    _   | |   / /\\ \\   | |      |  <  	\n");
 printf("\t\t    | |_) | | |____   / ____ \\  | |____  | . \\  | |__| |  / ____ \\  | |____  | . \\ 	\n");
 printf("\t\t    |____/  |______| /_/    \\_\\  \\_____| |_|\\_\\  \\____/  /_/    \\_\\  \\_____| |_|\\_\\ \n");
 printf("\n\n\n");
}

void regras(void)
{
	printf("########################################################################################################################\n");
	printf("\t\t\t\t   _____    ______    _____   _____                _____  		 	\n");
	printf("\t\t\t\t  |  __ \\  |  ____|  / ____| |  __ \\      /\\      / ____| 		\n");
	printf("\t\t\t\t  | |__) | | |__    | |  __  | |__) |    /  \\    | (___    		\n");
	printf("\t\t\t\t  |  _  /  |  __|   | | |_ | |  _  /    / /\\ \\    \\___ \\   		\n");
	printf("\t\t\t\t  | | \\ \\  | |____  | |__| | | | \\ \\   / ____ \\   ____) | 		\n");
	printf("\t\t\t\t  |_|  \\_\\ |______|  \\_____| |_|  \\_\\ /_/    \\_\\ |_____/  	\n\n");
	printf("########################################################################################################################\n");
	printf("\n");
    printf ("\t\t\t\tCada jogador recebe uma carta aleatória e virada para cima por vez,\n");
	printf ("\t\t\t\tPodendo ele decidir se quer outra carta ou não.\n");
	printf ("\t\t\t\tCada carta possui um valor,\n");
	printf ("\t\t\t\tE o objetivo é conseguir a maior pontuação dentre os outros jogadores,\n");
    printf ("\t\t\t\tMas com cuidado para não ultrapassar a quantidade de 21 pontos,\n");
    printf ("\t\t\t\tPois caso ocorra o jogador perde automaticamente.\n");
	printf ("\t\t\t\tValor das cartas :\n");
	printf ("\t\t\t\t* O “ás” vale 1 ponto.\n");
	printf ("\t\t\t\t* “J”, “Q”, “K” valem 6 , 8 , 10 pontos nessa ordem.\n");
    printf ("\t\t\t\t* As demais cartas, seu próprio valor de acordo com seu número.\n");
     printf("\n\n");
	printf("########################################################################################################################\n");
	printf("\n");
}
void historico(void)
{
	printf("########################################################################################################################\n");
	printf("\t\t\t  _    _   _____    _____   _______    ____    _____    _____    _____    ____  		\n");
	printf("\t\t\t | |  | | |_   _|  / ____| |__   __|  / __ \\  |  __ \\  |_   _|  / ____|  / __ \\ 		\n");
	printf("\t\t\t | |__| |   | |   | (___      | |    | |  | | | |__) |   | |   | |      | |  | |		\n");   
	printf("\t\t\t |  __  |   | |    \\___ \\     | |    | |  | | |  _  /    | |   | |      | |  | |		\n");
	printf("\t\t\t | |  | |  _| |_   ____) |    | |    | |__| | | | \\ \\   _| |_  | |____  | |__| |		\n");
	printf("\t\t\t |_|  |_| |_____| |_____/     |_|     \\____/  |_|  \\_\\ |_____|  \\_____|  \\____/ 	\n\n");
	printf("########################################################################################################################\n");
	printf("\n");
    printf ("\t\t\t\t\t\tHISTÓRICO DE PARTIDAS \n");
     printf("\n\n");
}
void creditos(void)
{
	printf("########################################################################################################################\n");
	printf("\t\t\t   _____   _____    ______   _____    _____   _______    ____     _____ 	\n");
	printf("\t\t\t  / ____| |  __ \\  |  ____| |  __ \\  |_   _| |__   __|  / __ \\   / ____|		\n");
	printf("\t\t\t | |      | |__) | | |__    | |  | |   | |      | |    | |  | | | (___  	\n");
	printf("\t\t\t | |      |  _  /  |  __|   | |  | |   | |      | |    | |  | |  \\___ \\ 	\n");
	printf("\t\t\t | |____  | | \\ \\  | |____  | |__| |  _| |_     | |    | |__| |  ____) |	\n");
	printf("\t\t\t  \\_____| |_|  \\_\\ |______| |_____/  |_____|    |_|     \\____/  |_____/ 	\n\n");

	printf("########################################################################################################################\n");
	printf("\n\n\n");
	printf ("\t\t\t\tHayla Maria Lira Perazzo CCp1, RGM: 24795313\n\n");
	printf ("\t\t\t\tJuan Diego Medeiros Alencar CCp1 , RGM: 24887986\n\n");
	printf ("\t\t\t\tRebeca Maria Fialho Camilo CCp1 , RGM: 24874892\n\n");
	printf ("\t\t\t\tDanyel Bispo de Oliveira CCp1 , RGM: 24744336\n\n");
     printf("\n\n\n\n");
	printf("########################################################################################################################\n");

}
void fimdejogo(void)
{
    printf("########################################################################################################################\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t  ______   _   _   _____       _____              __  __   ______ \n");
    sleep(0.8);
    printf("\t\t\t |  ____| | \\ | | |  __ \\     / ____|     /\\     |  \\/  | |  ____|\n");
    sleep(0.8);
    printf("\t\t\t | |__    |  \\| | | |  | |   | |  __     /  \\    | \\  / | | |__   \n");
    sleep(0.8);
    printf("\t\t\t |  __|   | . ` | | |  | |   | | |_ |   / /\\ \\   | |\\/| | |  __|  \n");
    sleep(0.8);
    printf("\t\t\t | |____  | |\\  | | |__| |   | |__| |  / ____ \\  | |  | | | |____  \n");
    sleep(0.8);
    printf("\t\t\t |______| |_| \\_| |_____/     \\_____| /_/    \\_\\ |_|  |_| |______|\n");
    sleep(0.8);
    printf("\n\n\n\n\n\n\n\n\n\n\n########################################################################################################################\n");
}
void linha(void)
{
	printf("\n\n");
	printf("########################################################################################################################\n");
	printf("\n");
}
void linha2(void)
{
	printf("\n\n");
	printf("nununununununununununununununununununununununununununununununnununununununununununununununununununununununununununununun\n");
	printf("\n");
}


void menu_player (void)
{
	printf ("\t\t\t\t\t\t(1) - 1 PLAYER\n");
	printf ("\t\t\t\t\t\t(2) - 2 PLAYERS\n");
	printf ("\t\t\t\t\t\t(3) - Histórico\n");
	printf ("\t\t\t\t\t\t(4) - Regras\n");
	printf ("\t\t\t\t\t\t(5) - Créditos\n");
    printf ("\t\t\t\t\t\t(6) - Sair\n");
}

void pc_wins(void)
{
	printf("\n\n");
	printf("\t\t\t\t\t\t     __________			\n");
	printf("\t\t\t\t\t\t    / ======== \\		\n");
	printf("\t\t\t\t\t\t   / ___________\\		\n");
	printf("\t\t\t\t\t\t  | ____________ |		\n");
	printf("\t\t\t\t\t\t  | |   -YOU   | |		\n");
	printf("\t\t\t\t\t\t  | |   LOSE   | |		\n");
	printf("\t\t\t\t\t\t  | |__________| |		\n");
	printf("\t\t\t\t\t\t  \\=_____________/     \n");
	printf("\t\t\t\t\t\t  / ************ \\     \n");
	printf("\t\t\t\t\t\t / :::::::::::::: \\    \n");
	printf("\t\t\t\t\t\t(__________________)	\n");
	printf("\n");
}

void player_wins(void)
{

	printf("\t\t\t\t\t\t  _______________	    \n");
    printf("\t\t\t\t\t\t |@@@@|     |####|		\n");
    printf("\t\t\t\t\t\t |@@@@|     |####|		\n");
    printf("\t\t\t\t\t\t |@@@@|     |####|		\n");
    printf("\t\t\t\t\t\t \\@@@@|     |####/		\n");
    printf("\t\t\t\t\t\t  \\@@@|     |###/		\n");
    printf("\t\t\t\t\t\t   `@@|_____|##'		\n");
    printf("\t\t\t\t\t\t        (O)				\n");
    printf("\t\t\t\t\t\t     .-'''''-.			\n");
    printf("\t\t\t\t\t\t   .'  * * *  `.		\n");
    printf("\t\t\t\t\t\t  :  *       *  :		\n");
    printf("\t\t\t\t\t\t : ~   Y O U   ~ :		\n");
    printf("\t\t\t\t\t\t : ~  W I N S  ~ :		\n");
    printf("\t\t\t\t\t\t  :  *       *  :		\n");
    printf("\t\t\t\t\t\t   `.  * * *  .'		\n");
    printf("\t\t\t\t\t\t     `-.....-'			\n");
}

void empate(void)
{


    printf("\t\t\t\t\t     __..,,... .,,,,,.				\n");
    printf("\t\t\t\t\t ''''        ,'        ` .			\n");
    printf("\t\t\t\t\t           ,'  ,.  ..      `  .		\n");
    printf("\t\t\t\t\t           `.,'      ..           `	\n");
    printf("\t\t\t\t\t __..,.             .  ..     .		\n");
    printf("\t\t\t\t\t        ` .       .  `.  .` `			\n");
    printf("\t\t\t\t\t            ,  `.  `.  `._|,..		\n");
    printf("\t\t\t\t\t              .  `.  `..'				\n");
    printf("\t\t\t\t\t               ` -'`''				\n");

}



