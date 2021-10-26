
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int num,quad;
	double raiz;
	
	printf(" Digite um número: ");
	scanf("%d",&num);
	
	if (num>0)
	{
		quad=num*num;
		raiz=sqrt(num);
		
		printf("\n");
		printf(" O quadrado do número %d é %d, e sua raiz quadrada é de %.0f. \n",num,quad,raiz);
		
	} 
	else
	{
		printf("\n");
		printf(" O número %d não é um número positivo! \n",num);
	} 
	
	return 0;	
} 
