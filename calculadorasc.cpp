#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	float n, n1, resultado;
	char op;
	
	printf("Digite um numero, um operador (+ - * ou /), e outro numero: ");
	scanf("%f %c %f", &n, &op, &n1);
	
	switch(op)
	{
		case '+':
		printf("%.2f\n", resultado = n + n1);
		break;
		
		case '-':
		printf("%.2f\n", resultado = n - n1);
		break;
		
		case '/':
		printf("%.2f\n", resultado = n / n1);
		break;
		
		case '*':
		printf("%.2f\n", resultado = n * n1);
		break;
		
		default:
		printf("Operacao invalida.\n");
	}
	getch();
	return 0;
}
