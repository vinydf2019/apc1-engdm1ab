#include <stdio.h>

int main() {
  int numeros[10];
  int soma = 0;

  for (int i = 0; i < 10; i++) {
    printf("Entre com o %io numero: ", i + 1);

    int deu_certo = scanf("%i", &numeros[i]);
    if (deu_certo != 1) {
      printf("Erro na leitura do número.\n");
      return 1; // Encerra o programa se a leitura falhar
    }

    soma += numeros[i];
  }

  // Imprimindo os números digitados
  printf("A media de ");
  for (int i = 0; i < 10; i++) {
    if (i > 0) {
      printf(" + ");
    }
    printf("%i", numeros[i]);
  }

  // Calculando a média
  float media = soma / 10.0;

  printf(" eh %.1f\n", media);

  return 0;
}