#include<stdio.h>
#include<stdlib.h>

main()
{
	int n1;
	
	printf("Digite um numero entre 1 e 7, e eu te indicarei o dia da semana correspondente: ");
	scanf("%d", &n1);
	
	if(n1==1)
	{
		printf("Hoje e domingo.\n");
	}
	else if(n1==2)
	{
		printf("Hoje e segunda-feira.\n");
	}
	else if(n1==3)
	{
		printf("Hoje e terca-feira.\n");
	}
	else if(n1==4)
	{
		printf("Hoje e quarta-feira.\n");
	}
	else if(n1==5)
	{
		printf("Hoje e quinta-feira.\n");
	}
	else if(n1==6)
	{
		printf("Hoje e sexta-feira.\n");
	}
	else if(n1==7)
	{
		printf("Hoje e sabado.\n");
	}
	system("pause");
}
