#include<stdio.h>

int main() {
    float MA[4][4];
    int i;
    float soma = 0;

    printf("Informe os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &MA[i][j]);
            if (i == j) {
                soma += MA[i][j];
            }
        }
    }
    
	printf("\nA matriz informada eh:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.2f\t", MA[i][j]);
        }
        printf("\n");
    }
    	
    printf("A soma dos elementos da diagonal principal eh: %.2f\n", soma);

    return 0;
}
