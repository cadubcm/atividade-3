#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite numeros ate que a soma seja pelo menos 30.\n");

    // Loop enquanto a soma for menor que 30
    while(soma < 30) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    }

    printf("A soma dos numeros informados e: %d.\n", soma);

    return 0;
}