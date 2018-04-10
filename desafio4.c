#include <stdio.h>

int main() {

  int i=1;
  int resultado=0;

  while(i <= 100){
  	resultado += i;
  	i++;
  }
  
  printf("O resultado da soma de numero de 1 ate 100 eh: %d\n", resultado);

}