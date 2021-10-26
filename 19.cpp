
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int n,i,total=0;
 
	printf(" Digite um número: ");
	scanf("%d",&n);
 
	for (i=2;i<=n/2;i++)
	{
		if (n % i == 0)
		{
    		total++;
    	}
 	} 
    if (total == 0)
	{
		printf(" %d é um número primo\n",n);
	} 
   	else
   	{
    	printf(" %d não é um número primo\n",n);
	} 
    	
	return 0;	
} 
