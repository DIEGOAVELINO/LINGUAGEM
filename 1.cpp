
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	float dolar,real,cotacao;
	
	printf(" Cota��o do d�lar:\n ");
	printf("R$");
	scanf("%f",&cotacao);
	
	printf("\n");
	printf(" Valor em reais:\n ");
	printf("R$");
	scanf("%f",&real);
	
	printf("\n");
	
	dolar=real/cotacao;
	
	printf(" O valor da convers�o � de US$%.2f.",dolar);
	printf("\n");
	
	return 0;	
} //fim programa
