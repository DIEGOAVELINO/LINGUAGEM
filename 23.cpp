
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int numero,base,potencia=1,cont=0; 
  
	printf(" Digite um número inteiro: ");
	scanf("%d",&numero);
	
	printf("\n Digite uma base positiva: ");
	scanf("%d",&base);
  
	while (cont<base)
	{
		potencia=potencia*numero;
		cont++;
	} 
  
	printf("\n O valor de %d elevado a %d é de %d.\n",numero,base,potencia);
	
	return 0;	
} 
