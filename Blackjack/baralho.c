#include <stdio.h>
#include <time.h>
#include <unistd.h>


int mostrar_carta(void)
{
	int jogada = 1;
	
	srand(time(NULL));									//gera numeros aleatorios de 1 ate 10 de acordo com o tempo do pc
	
	jogada=(rand() % 12)+1; 							//guarda na variavel jogada, um numero entre (0 - 9) + 1;
	
	if (jogada == 1)
	{
		printf("\t\t\t\t\tVocê recebeu a carta Ás, ela vale 1 ponto\n");
		printf("\t\t\t\t\t\t\t _____ \n"); 
	    printf("\t\t\t\t\t\t\t|A .  |\n");
	    printf("\t\t\t\t\t\t\t| /.\\ |\n");
	    printf("\t\t\t\t\t\t\t|(_._)|\n");
	    printf("\t\t\t\t\t\t\t|  |  |\n");
	    printf("\t\t\t\t\t\t\t|____V|\n\n");
	}
	
	else if (jogada == 2)
	{
		printf("\t\t\t\t\t\tVocê recebeu a carta 2\n");
		printf("\t\t\t\t\t\t\t _____ \n");    
		printf("\t\t\t\t\t\t\t|2    |\n");
		printf("\t\t\t\t\t\t\t|  ^  |\n");
		printf("\t\t\t\t\t\t\t|     |\n");
		printf("\t\t\t\t\t\t\t|  ^  |\n");
		printf("\t\t\t\t\t\t\t|____Z|\n\n");
	}
	
	else if (jogada == 3)
	{
		printf("\t\t\t\t\t\tVocê recebeu a carta 3\n");
		printf("\t\t\t\t\t\t\t _____ \n");    
		printf("\t\t\t\t\t\t\t|3    |\n");
		printf("\t\t\t\t\t\t\t| ^ ^ |\n");
		printf("\t\t\t\t\t\t\t|     |\n");
		printf("\t\t\t\t\t\t\t|  ^  |\n");
		printf("\t\t\t\t\t\t\t|____E|\n\n");
	}
	
	else if (jogada == 4)
	{
		printf("\t\t\t\t\t\tVocê recebeu a carta 4\n");
		printf("\t\t\t\t\t\t\t _____ \n");    
		printf("\t\t\t\t\t\t\t|4    |\n");
		printf("\t\t\t\t\t\t\t| ^ ^ |\n");
		printf("\t\t\t\t\t\t\t|     |\n");
		printf("\t\t\t\t\t\t\t| ^ ^ |\n");
		printf("\t\t\t\t\t\t\t|____h|\n\n");
	}
	
	else if (jogada == 5)
	{
		printf("\t\t\t\t\t\tVocê recebeu a carta 5\n");
		printf("\t\t\t\t\t\t\t _____ \n");    
		printf("\t\t\t\t\t\t\t|5    |\n");
		printf("\t\t\t\t\t\t\t| ^ ^ |\n");
		printf("\t\t\t\t\t\t\t|  ^  |\n");
		printf("\t\t\t\t\t\t\t| ^ ^ |\n");
		printf("\t\t\t\t\t\t\t|____S|\n\n");
	}
	
	else if (jogada == 6)
	{
		printf("\t\t\t\t\t\tVocê recebeu a carta 6\n");
		printf("\t\t\t\t\t\t\t _____ \n");    
		printf("\t\t\t\t\t\t\t|6    |\n");
		printf("\t\t\t\t\t\t\t| ^ ^ |\n");
		printf("\t\t\t\t\t\t\t| ^ ^ |\n");
		printf("\t\t\t\t\t\t\t| ^ ^ |\n");
		printf("\t\t\t\t\t\t\t|____9|\n\n");
	}
	
	else if (jogada == 7)
	{
		printf("\t\t\t\t\t\tVocê recebeu a carta 7\n");
		printf("\t\t\t\t\t\t\t _____ \n");    
		printf("\t\t\t\t\t\t\t|7    |\n");
		printf("\t\t\t\t\t\t\t| ^ ^ |\n");
		printf("\t\t\t\t\t\t\t|^ ^ ^|\n");
		printf("\t\t\t\t\t\t\t| ^ ^ |\n");
		printf("\t\t\t\t\t\t\t|____L|\n\n");
	}
	
	else if (jogada == 8)
	{
		printf("\t\t\t\t\t\tVocê recebeu a carta 10\n");
		printf("\t\t\t\t\t\t\t _____ \n");    
		printf("\t\t\t\t\t\t\t|8    |\n");
		printf("\t\t\t\t\t\t\t|^ ^ ^|\n");
		printf("\t\t\t\t\t\t\t| ^ ^ |\n");
		printf("\t\t\t\t\t\t\t|^ ^ ^|\n");
		printf("\t\t\t\t\t\t\t|____8|\n\n");
	}
	
	else if (jogada == 9)
	{
		printf("\t\t\t\t\t\tVocê recebeu a carta 9\n");
		printf("\t\t\t\t\t\t\t _____ \n");    
		printf("\t\t\t\t\t\t\t|9    |\n");
		printf("\t\t\t\t\t\t\t|^ ^ ^|\n");
		printf("\t\t\t\t\t\t\t|^ ^ ^|\n");
		printf("\t\t\t\t\t\t\t|^ ^ ^|\n");
		printf("\t\t\t\t\t\t\t|____6|\n\n");
	}
	
	else if (jogada == 10)
	{
		printf("\t\t\t\t\t\tVocê recebeu a carta 10\n");
		printf("\t\t\t\t\t\t\t _____ \n");    
		printf("\t\t\t\t\t\t\t|10 ^ |\n");
		printf("\t\t\t\t\t\t\t|^ ^ ^|\n");
		printf("\t\t\t\t\t\t\t|^ ^ ^|\n");
		printf("\t\t\t\t\t\t\t|^ ^ ^|\n");
		printf("\t\t\t\t\t\t\t|___0I|\n\n");
	}
	
	else if (jogada == 11)
	{
		printf("\t\t\t\t\tVocê recebeu um Valete, ele vale 6 pontos\n");
		printf("\t\t\t\t\t\t\t _____ \n");
	    printf("\t\t\t\t\t\t\t|J  WW|\n");
	    printf("\t\t\t\t\t\t\t| ^ {)|\n");
	    printf("\t\t\t\t\t\t\t|(.)%%%%|\n");
	    printf("\t\t\t\t\t\t\t| |%%%%%%%|\n");
	    printf("\t\t\t\t\t\t\t|_%%%%%%%>|\n\n");
		
		jogada = 6;
	}
    
    else if (jogada == 12)
    {
	    printf("\t\t\t\t\tVocê recebeu uma Dama, ela vale 8 pontos\n");
		printf("\t\t\t\t\t\t\t _____ \n");
	    printf("\t\t\t\t\t\t\t|Q  WW|\n");
	    printf("\t\t\t\t\t\t\t| ^ {)|\n");
	    printf("\t\t\t\t\t\t\t|(.)%%%%|\n");
	    printf("\t\t\t\t\t\t\t| |%%%%%%%|\n");
	    printf("\t\t\t\t\t\t\t|_%%%%%%%>|\n\n");
	    
	    jogada = 8;
	}
    
	else if (jogada == 13)
    {
    	printf("\t\t\t\t\tVocê recebeu um Rei, ele vale 10 pontos\n");
		printf("\t\t\t\t\t\t\t _____ \n");
	    printf("\t\t\t\t\t\t\t|K  WW|\n");
	    printf("\t\t\t\t\t\t\t| ^ {)|\n");
	    printf("\t\t\t\t\t\t\t|(.)%%%%|\n");
	    printf("\t\t\t\t\t\t\t| |%%%%%%%|\n");
	    printf("\t\t\t\t\t\t\t|_%%%%%%%>|\n\n");
		
		jogada = 10;
	}
		
	return(jogada);		
}






