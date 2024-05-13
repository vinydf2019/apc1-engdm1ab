#include <stdio.h>

int main() {

  /*9. Faça um programa em C que leia números até ler zero, e imprima o maior e
 o menor entre eles.*/

  int maior;
  int menor;
  int numero;
  int numero_eh_valido = 0;

  while (!numero_eh_valido) {
    printf("Entre com um valor inteiro (zero vai parar):");
    int leu_certo = scanf("%i", &numero);
    getchar(); // limpar \n

    numero_eh_valido = leu_certo && numero == 0;

    if (maior == 0) {
      maior = numero;
    }
    if (menor == 0) {
      menor = numero;
    }
    if (maior < numero) {
      maior = numero;
    }
    if (menor > numero) {
      menor = numero;
    }
  }
    printf("O maior numero eh %i e o menor eh %i\n", maior, menor);
    return 0;
  }