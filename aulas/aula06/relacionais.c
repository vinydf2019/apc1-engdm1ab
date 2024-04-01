#include <stdio.h>
int main(){
  int numero1;
  int numero2;
  printf("Entre com valor do numero1:");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com valor do numero2:");
  deu_certo = scanf("%i", &numero2);

  int resultado = numero1 == numero2;
  printf("a igualdade do resultado eh: %i\n", resultado);

  resultado = numero1 != numero2;
  printf("a maior do resultado eh: %i\n", resultado);

  resultado = numero1 > numero2;
  printf("a maior do resultado eh: %i\n", resultado);
  
  resultado = numero1 < numero2;
  printf("a menor do resultado eh: %i\n", resultado);

  resultado = numero1 >= numero2;
  printf("a maior ou igual do resultado eh: %i\n", resultado);

  resultado = numero1 <= numero2;
  printf("a menor ou igual do resultado eh: %i\n", resultado);

  
  
  return 0;
}