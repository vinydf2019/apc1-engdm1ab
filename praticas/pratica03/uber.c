#include <stdio.h>

int main() {
  int nota;

  printf("Por favor, insira a nota do Uber (de 1 a 5): ");
  int leu_certo = scanf("%i", &nota);

  // Verifica se a nota está dentro do intervalo válido
  if (nota >= 1 && nota <= 5) {
    // Avalia a nota e imprime uma mensagem correspondente
    switch (nota) {
    case 1:
      printf("Experiência *.\n");
      break;
    case 2:
      printf("Experiência **.\n");
      break;
    case 3:
      printf("Experiência ***.\n");
      break;
    case 4:
      printf("Experiência ****.\n");
      break;
    case 5:
      printf("Experiência *****!\n");
      break;
    }
  } else {
    // Se a nota estiver fora do intervalo válido, exibe uma mensagem de erro
    printf("Nota inválida. Por favor, insira uma nota entre 1 e 5.\n");
  }

  return 0;
}