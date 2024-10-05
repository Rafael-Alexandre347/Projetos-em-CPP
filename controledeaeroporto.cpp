#include<stdio.h>
#include<conio.h>

int main() {
    float pesoAv, comprimentoPista, veloVento, altAero, comprimentoMinimoPista;
    int c1, c2, c3;

    printf("***PREENCHA AS INFORMACOES***");
    printf("\n\nPeso do aviao (em kg): ");
    scanf("%f", &pesoAv);
    
    while (pesoAv > 150000) {
        printf("\nO aviao nao pode decolar devido ao peso excedente (maximo permitido: 150.000 kg).\n");
        printf("Insira outro valor: ");
        scanf("%f", &pesoAv);
    }
    printf("\nComprimento da pista (em metros): ");
    scanf("%f", &comprimentoPista);
    printf("\nVelocidade do vento (em km/h): ");
    scanf("%f", &veloVento);
    printf("\nAltura do aeroporto (em metros): ");
    scanf("%f", &altAero);

    if (pesoAv <= 100000) {
        if (comprimentoPista >= 1500) {
            c1 = 1;
        } else {
            c1 = 0;
        }

        if (altAero <= 1000) {
            c2 = 1;
        } else {
            c2 = 0;
        }
    } else if (pesoAv <= 150000) {
        if (comprimentoPista >= 2000) {
            c1 = 1;
        } else {
            c1 = 0;
        }

        if (altAero <= 1000) {
            c2 = 1;
        } else {
            c2 = 0;
        }
    }

    if (altAero <= 1000) {
        comprimentoMinimoPista = 1500;
    } else {
        comprimentoMinimoPista = 1500 + (altAero - 1000);
    }

    if (veloVento <= 30) {
        c3 = 1;
    } else {
        c3 = 0;
    }

    printf("\n\n***RESULTADO***\n");
        if (c1 && c2 && c3) {
            printf("O aviao pode decolar.\n");
            printf("Todas as condicoes foram atendidas:\n");
            printf("Comprimento da pista: OK\n");
        	printf("Altitude do aeroporto: OK\n");
			printf("Velocidade do vento: OK\n");
		} else {
            printf("O aviao nao pode decolar.\n");
            printf("Condicoes que nao foram atendidas:\n");
            if (!c1) printf("Comprimento da pista insuficiente.\n");
            if (!c2) printf("Altitude do aeroporto elevada.\n");
            if (!c3) printf("Velocidade do vento alta.\n");
        }
    return 0;
}

