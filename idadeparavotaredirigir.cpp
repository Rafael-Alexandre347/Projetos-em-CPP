#include<stdio.h>
#include<stdlib.h>
main()
{
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	if(idade == 16)
	{
		printf("Voce tem idade para votar, mas nao tem idade para dirigir.\n");
	}
	else if(idade == 17)
	{
		printf("Voce tem idade para votar, mas nao tem idade para dirigir.\n");
	}
	else if(idade > 17)
	{
		printf("Voce tem idade para votar e para dirigir.\n");
	}
	else if(idade <16)
	{printf("Voce nao tem idade nem para votar e nem para dirigir.\n");
	}
	system("pause");
}
