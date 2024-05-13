#include <stdio.h>

int main() {
  int numero;
  int numero_valido = 0;

  while (numero_valido == 0) {
    printf("Entre com um valor inteiro de 1 a 10:");

    int leu_certo = scanf("%i", &numero);

    numero_valido = leu_certo && numero >= 1 && numero <= 10;

    if (numero_valido == 0) {
      printf("Algo deu errado!\n");
      getchar();
    }
  }
  printf("Faz certo que da certo\n");

  do {
    printf("Entre com um valor inteiro de 1 a 10:");
    int leu_certo = scanf("%i", &numero);

    numero_valido = leu_certo && numero >= 1 && numero <= 10;

    if (numero_valido == 0) {
      printf("Algo deu errado!\n");
      getchar(); // limpar o burffer
    }
  } while (numero_valido == 0);
  printf("Faz cero que d certo\n");

  return 0;
}