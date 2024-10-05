#include<stdio.h>
#include<stdlib.h>

int main()
{
	float h = 0, cm = 0, peso=0;
	int sexo;
	
	printf("Digite 1 se voce for do sexo masculino.\n Digite 0 se voce for do sexo feminino.\n ");
	scanf("%d", &sexo);
	
	
	
	if(sexo != 1 && sexo != 0)
	{
		printf("Sexo invalido. Tente novamente.");
	}
	
	if(sexo == 1)
	{
		printf("Informe sua altura: ");
		scanf("%f", &cm);
		h = cm/100;
		peso = (72.7*h)-58;
		printf("O seu peso ideal e de: %.2f Kg\n", peso);
	}
	else if(sexo == 0)
	{
		printf("Informe sua altura: ");
		scanf("%f", &cm);
		h = cm/100;
		peso = (62.1*h)-44.7;
		printf("O seu peso ideal e de: %.2f Kg\n", peso);
	}
	return 0;
}
