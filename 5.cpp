
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int num,quad;
	double raiz;
	
	printf(" Digite um n�mero: ");
	scanf("%d",&num);
	
	if (num>0)
	{
		quad=num*num;
		raiz=sqrt(num);
		
		printf("\n");
		printf(" O quadrado do n�mero %d � %d, e sua raiz quadrada � de %.0f. \n",num,quad,raiz);
		
	} 
	else
	{
		printf("\n");
		printf(" O n�mero %d n�o � um n�mero positivo! \n",num);
	} 
	
	return 0;	
} 
