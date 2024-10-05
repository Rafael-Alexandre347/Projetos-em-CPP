#include <stdio.h>

float inss(float salBruto, float horaExtra, float salHora, float valorBen);
float fgts(float salLiquido);
float irrf(float salBruto, float valInss, float horaExtra, float salHora);

int main() {
    float salBruto, horaExtra, salHora, valorBen, salLiquido, valInss, valIrrf, valfgts;
    int codigoFuncionario;

    while (1) {
        printf("Digite o numero do funcionario (ou 0 para sair): ");
        scanf("%d", &codigoFuncionario);

        if (codigoFuncionario == 0) {
            printf("Saindo do programa...\n");
            break;
        }

        printf("\n\nInforme seu salario bruto: ");
        scanf("%f", &salBruto);
        printf("Informe o numero de horas extras: ");
        scanf("%f", &horaExtra);
        printf("Informe o valor do salario hora: ");
        scanf("%f", &salHora);
        printf("Informe o valor de beneficios (salario familia, vale alimentacao, vale transporte, etc.): ");
        scanf("%f", &valorBen);

        valInss = inss(salBruto, horaExtra, salHora, valorBen);
        valIrrf = irrf(salBruto, valInss, horaExtra, salHora);
        salLiquido = salBruto - (valIrrf + valInss + valorBen) + (salHora * horaExtra);
        valfgts = fgts(salLiquido);

        printf("\n\n***FOLHA DE PAGAMENTO***");
        printf("\n\n Salario Bruto: %.2f", salBruto);
        printf("\n Salario Liquido: %.2f", salLiquido);
        printf("\n FGTS: %.2f", valfgts);
        printf("\n INSS: %.2f", valInss);
        printf("\n IRRF: %.2f\n", valIrrf);
    }

    return 0;
}

float inss(float salBruto, float horaExtra, float salHora, float valorBen) {
    float valInss;
    if (salBruto <= 1412) {
        valInss = salBruto * 0.075;
    } else if (salBruto <= 2666.68) {
        valInss = (salBruto * 0.09) - 21.18;
    } else if (salBruto <= 4000.03) {
        valInss = (salBruto * 0.12) - 101.18;
    } else if (salBruto <= 7786.02) {
        valInss = (salBruto * 0.14) - 181.18; 
    } else {
        valInss = salBruto - 908.85;
    }
    
    return valInss;
}

float fgts(float salLiquido) {
    return salLiquido * 0.08;
}

float irrf(float salBruto, float valInss, float horaExtra, float salHora) {
    float valIrrf;
    if (salBruto - valInss < 2259.20) {
        valIrrf = 0; 
    } else if (salBruto - valInss <= 2826.65) {
        valIrrf = ((salBruto - valInss + (horaExtra * salHora)) * 0.075) - 169.44;
    } else if (salBruto - valInss <= 3751.05) {
        valIrrf = ((salBruto - valInss + (horaExtra * salHora)) * 0.15) - 381.44;
    } else if (salBruto - valInss <= 4664.68) {
        valIrrf = ((salBruto - valInss + (horaExtra * salHora)) * 0.225) - 662.77;
    } else {
        valIrrf = ((salBruto - valInss + (horaExtra * salHora)) * 0.275) - 896.00;
    }
    return valIrrf;
}

