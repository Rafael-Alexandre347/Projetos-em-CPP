#include<stdio.h>
#include<stdlib.h>

int main()
{
	float peso, alturacm, altura, imc;
	printf("----------CALCULADORA DE IMC----------\n\n");
	printf("Informe seu peso: ");
	scanf("%f", &peso);
	printf("Informe sua altura (em centimetros): ");
	scanf("%f", &alturacm);
	
	altura = alturacm/100;
	imc = peso / (altura*altura);
	
	
	  printf("Seu IMC e: %.2f\n", imc);
	  
	if(imc < 18.5)
	{
		printf("Voce esta abaixo do peso ideal.\n");
	}
	else if(imc >= 18.5 && imc < 25)
	{
		printf("Voce esta no peso ideal.\n");
	}
	else if(imc >= 25 && imc < 30)
	{
		printf("Voce esta acima do peso ideal.\n");
	}
	else
	{
		printf("Voce possui obesidade.\n");
	}
	system("pause");
	return 0;
}
