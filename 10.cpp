
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
	
	printf("\n Escolha uma das opções abaixo: ");
	printf("\n \t1 - Soma");
	printf("\n \t2 - Subtração");
	printf("\n \t3 - Multiplicação");
	printf("\n \t4 - Divisão");
	
	while (1)
	{
		printf("\n\n Digite o número da opção desejada: ");
		scanf("%i",&op);
	
		switch(op)
		{
			case 0:
				printf(" Programa encerrado! \n");
				return 0;
			break;
			case 1:
				printf("\n Você escolheu a Soma!");
				resul= n1+n2;
				
				printf("\n A soma dos dois números é de %d.",resul);
			break;
			case 2:
				printf("\n Você escolheu a Subtração!");
				resul = n1-n2;
				
				printf("\n A subtração dos dois números é de %d.",resul);
			break;
			case 3:
				printf("\n Você escolheu a Multiplicação!");
				resul= n1*n2;
				
				printf("\n A multiplicação dos dois números é de %d.",resul);
			break;
			case 4:
				printf("\n Você escolheu a Divisão!");
				if(n2==0)
				{
					printf("\n Não existe divisão por zero!");
				} 
				else
				{
					resul = n1/n2;
					printf("\n A divisão dos dois números é de %d.",resul);
				} 
			break;
			default:
				printf ("\n Você digitou uma opção inválida! \n");
		} 
	} 
	
	return 0;
} //fim programa
