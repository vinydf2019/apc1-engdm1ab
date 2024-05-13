#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = -1;

  while (opcao != 0) {
    int deu_certo = system("clear");
    printf("Meujogo\n");
    printf("1- Iniciar jogo.\n");
    printf("2- Configurações.\n");
    printf("3- Ver pontução.\n");
    printf("0- Sair.\n");
    printf("Entre com uma opção =>");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n')
      ; // limpa o buffer


    
    switch (opcao) {
    case 1: {
      break;
    }
    case 2: {
      printf("Nome\tPontuação\n");
      printf(" Jose\t 5000\n");
      printf(" Maria\t -11\n");
      printf(" Pedro\t 100\n");
      printf("Pressione ENTER p/ continuar... \n");
      getchar();
      break;
    }
    case 3: {
      break;
    }
    case 0:
      printf("Até logo!\n");
      break;
    default:
      printf("Opção invalida! Enter continuar\n");
    }
  }

  return 0;
}