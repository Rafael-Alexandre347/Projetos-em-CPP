#include<stdio.h>
#include<stdlib.h>
main()
{
	float n1, n2;
	char op;
	printf("Digite um numero, um operador (+ - * ou /), e outro numero: ");
	scanf("%f %c %f", &n1, &op, &n2);
	if(op=='+')
	{
		printf("Resultado = %.2f\n", n1+n2);
	}
	else if(op=='-')
	{
		printf("Resultado = %.2f\n", n1-n2);
	}
	else if(op=='*')
	{
		printf("Resultado = %.2f\n", n1*n2);
	}
	else if(op =='/')
	{
		printf("Resultado = %.2f\n", n1/n2);
	}
	system("pause");
}
