#include <stdio.h>

int main() {

  int numero;
  int i;
  printf("Digite um numero: ");
  scanf("%d", &numero);

  for (i=0; i<=10; i++)
    printf("%d x %d = %d\n", numero, i, (long)numero*i);
}