
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int idade;
	
	printf(" Informe sua idade: ");
	scanf("%d",&idade);
	printf("\n");
	
	if (idade<16)
	{
		printf(" N�o eleitor!\n");
	} 
	else 
	if (idade>=18 && idade<=65)
	{
		printf(" Eleitor obrigat�rio!\n");
	} 
	else
	if (idade>=16   || idade>65)
	{
		printf(" Eleitor facultativo!\n");
	} 
	
	return 0;	
} 
