#include<stdio.h>
int main(){ 
  float A1 = 0.0f;
  float A2 = 0.0f;

  printf("Entre com o valor de A1: ");
  int deu_certo = scanf("%f", &A1);
  printf("Entre com o valor de A2: ");
  deu_certo = scanf("%f", &A2);

  float media01 = (A1 * 0.4);
  float media02 = (A2 * 0.6);

  float media_final = media01 + media02;

  printf("A media final eh: %.2f\n", media_final);
  
  return 0;
  }