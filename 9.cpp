
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int litrokm,tempo,v,d,litros;
	
	printf(" Informe o tempo em horas: ");
	scanf("%d",&tempo);
	printf("\n");
	
	printf(" Informe a velocidade média em km/s: ");
	scanf("%d",&v);
	printf("\n");

	d=tempo*v;
	
	printf(" Informe os km por litro do automóvel: ");
	scanf("%d",&litrokm);
	
	litros=d/litrokm;
	
	printf("\n");
	printf(" A quantidade utilidada é de %d litros.\n",litros);
	
	return 0;
} 
