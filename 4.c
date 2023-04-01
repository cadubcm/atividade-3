#include <stdio.h>

int main() {
    int idades[5];
    int i, soma = 0, qtdeMaiores18 = 0;
    float media;

    // Leitura das idades
    for(i = 0; i < 5; i++) {
        printf("Informe a idade da pessoa %d: ", i+1);
        scanf("%d", &idades[i]);
        soma += idades[i];
    }

    // Cálculo da média
    media = (float)soma / 5;

    // Contagem das idades maiores que 18 anos
    for(i = 0; i < 5; i++) {
        if(idades[i] > 18) {
            qtdeMaiores18++;
        }
    }

    // Impressão dos resultados
    printf("\nMédia de idades: %.2f\n", media);
    printf("Idades maiores que 18 anos: ");
    for(i = 0; i < 5; i++) {
        if(idades[i] > 18) {
            printf("%d ", idades[i]);
        }
    }
    printf("\nQuantidade de idades maiores que 18 anos: %d\n", qtdeMaiores18);

    return 0;
}