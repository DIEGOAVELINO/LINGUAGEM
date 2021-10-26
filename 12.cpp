
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int num;
	
	printf(" Digite um número: "); 
	scanf("%d",&num);	
		
	if(num% 2 == 0 )
	{
		printf("\n");
	 	printf(" O número %d é par! \n",num);
	} 
	else
	{
		printf("\n");	
		printf(" O número %d é impar! \n",num);
	}
	
	
	return 0;
}
