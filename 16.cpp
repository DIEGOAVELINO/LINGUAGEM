
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main () 
{
	setlocale(LC_ALL,"");
	
	int x,y;
	printf(" Insira as coordenadas da bola: ");
	printf("\n Coordenada 1: ");
	scanf("%d",&x);
	printf(" Coordenada 2: ");
	scanf("%d",&y);
	
	if (x>=0 && x<=432 && y>=0 && y<=468)
	{
		printf("\n Dentro! \n");
	} 
	else
	{
		printf("\n Fora! \n");
	} 
		 	
	return 0;		
} 
