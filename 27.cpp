
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int aleatorio,numero,cont=0;
	
	srand(time(NULL));
	aleatorio=rand()%10;
	
	do 
	{
		printf(" N�mero da sorte: ");
		scanf("%d",&numero);
		cont++;
	} 
	while(numero!=aleatorio);
	
	printf("\n Parab�ns! Voc� acertou em %d tentativas!",cont);
	printf("\n");
	
	return 0;	
}
