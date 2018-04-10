#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  printf("\n\n");
  printf("          P  /_\\  P                              \n");
  printf("         /_\\_|_|_/_\\                            \n");
  printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
  printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao! \n");
  printf("    |\" \"  |  |_|  |\"  \" |                     \n");
  printf("    |_____| ' _ ' |_____|                         \n");
  printf("          \\__|_|__/                              \n");
  printf("\n\n");

  int chute;
  int acertou = 0;
  int tentativas = 1;
  double pontos = 1000;
  int segundos = 0;
  int numerogrande = 0;
  int numerosecreto = 0;
  
  segundos = time(0);
  srand(segundos);
  numerogrande = rand();
  numerosecreto = numerogrande % 100;

  int nivel;
  int totaldetentativas;
  printf("Qual o nivel de dificuldade?\n");
  printf("(1) Facil (2) Medio (3) Dificil\n\n");
  printf("Escolha: ");
  scanf("%d", &nivel);
  if(nivel == 1) {
      totaldetentativas = 20;
  } else if (nivel == 2) {
      totaldetentativas = 15;
  } else {
      totaldetentativas = 6;
  }

  int i;

  for(i = 1; i <= totaldetentativas; i++) {

    printf("-> Tentativa %d de %d\n", i, totaldetentativas);

    printf("Chute um numero: ");
    scanf("%d", &chute);
    
    if(chute < 0) {
        printf("Voce nao pode chutar numeros negativos\n");
        i--;
        continue;
    }

    printf("Seu %do. chute foi %d\n", tentativas, chute);
    acertou = chute == numerosecreto;
    int maior = chute > numerosecreto;

    if(acertou) {
        break;
    } else if(maior) {
        printf("Seu chute foi maior do que o numero secreto!\n");
    } else {
        printf("Seu chute foi menor do que o numero secreto!\n");
    }

    tentativas++;
    double pontosperdidos = abs(chute - numerosecreto) / 2.0;
    pontos = pontos - pontosperdidos;
  }

  printf("\n");
  if(acertou) {
      printf("             OOOOOOOOOOO               \n");
      printf("         OOOOOOOOOOOOOOOOOOO           \n");
      printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
      printf("    OOOOOO      OOOOO      OOOOOO      \n");
      printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
      printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
      printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
      printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
      printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
      printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
      printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
      printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
      printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
      printf("         OOOOOO         OOOOOO         \n");
      printf("             OOOOOOOOOOOO              \n");
      printf("\nParabens! Voce acertou!\n");
      printf("Voce fez %.2f pontos. Ate a proxima!\n\n", pontos);
  } else {
      printf("       \\|/ ____ \\|/    \n");   
      printf("        @~/ ,. \\~@      \n");   
      printf("       /_( \\__/ )_\\    \n");   
      printf("          \\__U_/        \n");
      printf("\nVoce perdeu! Tente novamente!\n\n");
      printf("\n O numero era: %d\n", numerosecreto);
  }

  printf("Voce fez %.2f pontos\n", pontos);
  printf("Obrigado por jogar!\n");
}