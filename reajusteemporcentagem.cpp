#include<stdio.h>
#include<stdlib.h>

main()
{
	float valor;
	int reajuste;
	
	printf("TABELA DE REAJUSTE:\n 1 = 15%%\n 2 = 20%%\n 3 = 30%%\n\n");
	printf("Informe o numero correspondente ao valor do reajuste: \n");
	scanf("%d", &reajuste);
	printf("Informe o valor do produto: \n");
	scanf("%f", &valor);
	
	if(reajuste == 1)
	{
		printf("\nO valor do produto apos o reajuste e de: \n%.2f\n\n", valor+(valor*15/100));
	}
	else if(reajuste == 2)
	{
		printf("\nO valor do produto apos o reajuste e de: \n%.2f\n\n", valor+(valor/5));
	}
	else if(reajuste == 3)
	{
		printf("\nO valor do produto apos o reajuste e de: \n%.2f\n\n", valor+(valor*30/100));
	}
	system("pause");
}
