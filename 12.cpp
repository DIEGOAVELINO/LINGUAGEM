
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int num;
	
	printf(" Digite um n�mero: "); 
	scanf("%d",&num);	
		
	if(num% 2 == 0 )
	{
		printf("\n");
	 	printf(" O n�mero %d � par! \n",num);
	} 
	else
	{
		printf("\n");	
		printf(" O n�mero %d � impar! \n",num);
	}
	
	
	return 0;
}
