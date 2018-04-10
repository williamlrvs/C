#include <stdio.h>

int main() {

	int numero1, numero2, resultado;

	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero2);
	
	resultado = numero1 * numero2;
	
	printf("A multiplicacao de %d por %d eh igual a %d\n", numero1, numero2, resultado);

}