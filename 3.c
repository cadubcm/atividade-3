#include <stdio.h>

int main() {
  int num, i;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  for (i = num; i >= 0; i--) {
    printf("%d ", i);
  }

  printf("\n");

  return 0;
}