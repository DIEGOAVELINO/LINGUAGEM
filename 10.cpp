
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int op,n1,n2,resul;
	
	printf(" Digite o primeiro valor: ");
	scanf("%i",&n1);
	
	printf(" Digite o segundo valor: ");
	scanf("%i",&n2);	
	
	printf("\n Escolha uma das op��es abaixo: ");
	printf("\n \t1 - Soma");
	printf("\n \t2 - Subtra��o");
	printf("\n \t3 - Multiplica��o");
	printf("\n \t4 - Divis�o");
	
	while (1)
	{
		printf("\n\n Digite o n�mero da op��o desejada: ");
		scanf("%i",&op);
	
		switch(op)
		{
			case 0:
				printf(" Programa encerrado! \n");
				return 0;
			break;
			case 1:
				printf("\n Voc� escolheu a Soma!");
				resul= n1+n2;
				
				printf("\n A soma dos dois n�meros � de %d.",resul);
			break;
			case 2:
				printf("\n Voc� escolheu a Subtra��o!");
				resul = n1-n2;
				
				printf("\n A subtra��o dos dois n�meros � de %d.",resul);
			break;
			case 3:
				printf("\n Voc� escolheu a Multiplica��o!");
				resul= n1*n2;
				
				printf("\n A multiplica��o dos dois n�meros � de %d.",resul);
			break;
			case 4:
				printf("\n Voc� escolheu a Divis�o!");
				if(n2==0)
				{
					printf("\n N�o existe divis�o por zero!");
				} 
				else
				{
					resul = n1/n2;
					printf("\n A divis�o dos dois n�meros � de %d.",resul);
				} 
			break;
			default:
				printf ("\n Voc� digitou uma op��o inv�lida! \n");
		} 
	} 
	
	return 0;
} //fim programa
