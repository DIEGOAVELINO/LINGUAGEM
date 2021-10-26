#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	float mbps,kbps;
	
	printf(" Digite o valor em mbps: ");
	scanf("%f",&mbps);
	
	kbps = mbps*1000;
	
	printf("\n O valor de mbps para kbps é de %.2fkbps",kbps);
	printf("\n");
	 
	return 0;
} //fim programa
