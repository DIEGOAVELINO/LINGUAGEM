
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	float fabrica,consumidor;
	
	printf("Informe o custo de fábrica do veículo: R$");
	scanf("%f",&fabrica);
	
	consumidor = (fabrica*0.42)+(fabrica*0.25)+fabrica;
	
	printf("\n");
	printf(" O custo total do veículo ao cosumidor é de R$%.2f.\n",consumidor);
	
	return 0;	
} 
