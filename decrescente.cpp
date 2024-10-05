#include<stdio.h>
#include<stdlib.h>

main()
{
	int a1, a2, a3;
	
	printf("Informe 3 valores diferentes: ");
	scanf("%d %d %d", &a1, &a2, &a3);
	
	if (a1 > a2  && a2 > a3)
	{
		printf("Os valores, em ordem decrescente, sao: %d, %d, %d\n", a1, a2, a3);
	}
		else if (a1 > a3 && a3 > a2)
	{
		printf("Os valores, em ordem decrescente, sao: %d, %d, %d\n", a1, a3, a2);
	}
		else if (a2 > a1 && a1 > a3)
	{
		printf("Os valores, em ordem decrescente, sao: %d, %d, %d\n", a2, a1, a3);
	}
		else if (a2 > a3 && a3 > a1)
	{
		printf("Os valores, em ordem decrescente, sao: %d, %d, %d\n", a2, a3, a1);
	}			
		else if (a3 > a1 && a1 > a2)
	{
		printf("Os valores, em ordem decrescente, sao: %d, %d, %d\n", a3, a1, a2);	
	}
		else if (a3 > a2 && a2 > a1)
	{
		printf("Os valores, em ordem decrescente, sao: %d, %d, %d\n", a3, a2, a1);
	}
	system("pause");
}
