#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um valor inteiro de um 1 a 10:");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo && numero > 0 && numero <= 10){
  printf("A tabuada de %i\n", numero);
  /*prinft("1 x %i = %i\n", numero, numero * 1);
  printf("%i x 2 = %i\n", numero, numero * 2);
  printf("%i x 3 = %i\n", numero, numero * 3);
  printf("%i x 4 = %i\n", numero, numero * 4);
  printf("%i x 5 = %i\n", numero, numero * 5);
  printf("%i x 6 = %i\n", numero, numero * 6);
  printf("%i x 7 = %i\n", numero, numero * 7);
  printf("%i x 8 = %i\n", numero, numero * 8);
  printf("%i x 9 = %i\n", numero, numero * 9);
  printf("%i x 10 = %i\n", numero, numero * 10);*/
for (int i = 1; i <= 10; i++){
printf(" %i x %i = %i\n", numero, i, numero * i);
}
  }else{
    printf("Valor invalido. Tente novamente!\n");
  }



  
  return 0;
}