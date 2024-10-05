#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
	int reajuste, produto, n1, n2, n3;
	
	printf("TABELA DE VALORES: \n[1] 15% \n[2] 20% \n[3] 30%");
	printf("\nInforme o valor do reajuste: ");
	scanf("%d", &reajuste);
	printf("Informe o valor do produto: ");
	scanf("%d", &produto);
	
	n1 = produto + (produto*15/100);
	n2 = produto + (produto/5);
	n3 = produto + (produto*30/100);
		
	switch(reajuste)
	{
	case 1:
	printf("O valor do produto apos o reajuste e: %d\n", n1);
	break;
		
	case 2:
	printf("O valor do produto apos o reajuste e: %d\n", n2);
	break;
		
	case 3:
	printf("O valor do produto apos o reajuste e: %d\n", n3);
	break;
	
	default:
	printf("Valor de reajuste invalido.\n");
	
	}
	getch ();
	return 0;	
}
