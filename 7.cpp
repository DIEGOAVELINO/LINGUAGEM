
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int verde=0,amarelo=0,branco=0,vtotal,atotal,btotal,cor,bolas,pfinal,cont;
	
	printf(" Quantas bolinhas você pegou?: ");
	scanf("%d",&bolas);
	
	printf("\n");
	printf(" Pontuação correspondentes as bolinhas: \n");
	printf(" \t1: Verde \n");
	printf(" \t2: Amarelo \n");
	printf(" \t3: Branco \n");
	
	printf("\n");
	
	while(cont<bolas)
	{
		
		printf(" Digite o número correspondente as cores da bola adquiridas: ");
		scanf("%d",&cor);
		
		switch(cor)
		{
			case 1: 
				verde++;
			break;
			case 2:
				amarelo++;
			break;
			case 3:
				branco++;
			break;
			default: 
				printf(" Número Inválido! Digite novamente. \n");
		} 
		cont++;
	} 
	
	vtotal=verde*10;
	atotal=amarelo*5;
	btotal=branco*3;
	
	pfinal=vtotal+atotal+btotal;
	
	printf("\n");
	printf(" A pontuação total do participante é %d. \n",pfinal);
	
	return 0;	
} 
