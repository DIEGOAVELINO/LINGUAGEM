
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int qtdp,media,pt1,pt2,cont,i;
	
	printf(" Digite a quantidade de participantes: ");
	scanf("%d",&qtdp);
	printf("\n");
	
	printf(" M?dia de pontos: ");
	scanf("%d",&media);
	printf("\n");
	
	for(i=1;i<=qtdp;i++)
	{
		printf(" A pontua??o do participante %d foi de ",i);
		printf("\n Pontua??o 1: ");
		scanf("%d",&pt1);
		printf(" Pontua??o 2: ");
		scanf("%d",&pt2);
		printf("\n");
		
		if((pt1+pt2)>=media)
		{
			cont++;
		} 
	} 
	
	printf("\n %d pessoas foram classificadas!",cont);
	
	return 0;	
} 
