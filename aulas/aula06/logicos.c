#include <stdio.h>
int main(){
  int numero1;
  int numero2;

  printf("Entre com valor do numero1:");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com valor do numero2:");
  deu_certo = scanf("%i", &numero2);

  int maior_que_zero_menor_que_dez = 0 < numero1 && numero1 < 10;
  printf("O numero1 eh maior que zero e menor que dez: %i\n", maior_que_zero_menor_que_dez);

  int menor_que_zero_ou_maior_que_dez = numero1 < 0 || numero1 > 10;  
  printf("O numero1 eh menor que zero ou menor que 10: %i\n", menor_que_zero_ou_maior_que_dez);
  
  int nao_eh_maior_que_zero = numero1 < 0 ;
  printf("O numero1 não eh menor que zero: %i\n", nao_eh_maior_que_zero);
  
  int nao_eh_maior_que_zero_ou_menor_que_dez = numero1 < 0 || numero1 > 10;
  printf("O numero1 não eh menor que zero ou menor que 10: %i\n", nao_eh_maior_que_zero_ou_menor_que_dez);




  
  return 0;
  }