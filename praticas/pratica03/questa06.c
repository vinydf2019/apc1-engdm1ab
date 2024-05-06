#include <stdio.h>

int main() {
  int numero;
  printf("Entre com um valor inteiro de 1 a 100:");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo && numero > 0 && numero <= 100) {
    printf("Os mutplos de %i entre 1 e 100\n", numero);

    for (int i = 1; i <= 100; i = i + numero, i++) {

      if (i % numero == 0) {
        printf("%i", i);
      }
    }
    printf("\n");
  } else {
    printf("Valor invalido. Tente novamente!\n");
  }

  return 0;
}