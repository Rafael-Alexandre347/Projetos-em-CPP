#include<stdio.h>
#include<stdlib.h>

main(void)
{
	float corretor = 0, tipocomissao = 0, dinheiro = 0, valorsimp1, valorcimp1, valorcorretor, comissao;
	
	printf("Digite 0 se a comissao for de venda.\n Digite 1 se a comissao for de locacao.\n");
	printf("Qual o tipo de comissao?: ");
	scanf("%f", &tipocomissao);
	printf("Digite 1 caso voce tenha efetuado a venda, digite 0 caso tenha sido outro corretor.\n");
	scanf("%f", &corretor);
	printf("Qual foi o valor da venda/aluguel?: ");
	scanf("%f", &dinheiro);
	
	if(tipocomissao == 0 && corretor == 1)
	{
		comissao = dinheiro - (dinheiro * 6/100) - (dinheiro - (dinheiro * 6/100) * 12/100)/2;
		printf("\nO valor da comissao a ser recebido e: %.2f.\n", comissao);
	}
	else if(tipocomissao == 0 && corretor == 0)
	{
		valorsimp1 = dinheiro - (dinheiro * 6/100);
		valorcimp1 = valorsimp1 - (valorsimp1 * 12/100);
		valorcorretor = (valorcimp1/2);
		comissao = valorcorretor - (valorcorretor/10);
		printf("\nO valor da comissao a ser recebido e: %.2f.\n", comissao);
	}
	else if(tipocomissao == 1 && corretor == 1)
	{
		valorcimp1 = dinheiro - (dinheiro * 12/100);
		comissao = valorcimp1 - (valorcimp1/10);
		printf("\nO valor da comissao a ser recebido e: %.2f.\n", comissao);
	}
	else if(tipocomissao == 1 && corretor == 0)
	{
		valorcimp1 = dinheiro - (dinheiro * 12/100);
		valorcorretor = valorcimp1 - (valorcimp1/10);
		comissao = valorcorretor - (valorcorretor/5);
		printf("\nO valor da comissao a ser recebido e: %.2f.\n", comissao);
	}
	system("pause");
	return 0;
}
