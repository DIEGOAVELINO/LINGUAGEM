
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int tabuada,n;
	
    printf("\n Digite o número para gerar a tabuada: ");
    scanf("%i", &tabuada);

    for(n=1;n<=10;n++)
	{
        printf("\n");
        printf(" %ix%i = %i\n", n, tabuada, n * tabuada);
    } 

	return 0;	
} 
