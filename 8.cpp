
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	float fabrica,consumidor;
	
	printf("Informe o custo de f�brica do ve�culo: R$");
	scanf("%f",&fabrica);
	
	consumidor = (fabrica*0.42)+(fabrica*0.25)+fabrica;
	
	printf("\n");
	printf(" O custo total do ve�culo ao cosumidor � de R$%.2f.\n",consumidor);
	
	return 0;	
} 
