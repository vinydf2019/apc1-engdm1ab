#include <stdio.h>

int main(){
  const float PI = 3.14f;
  float raio = 0.0f;

  printf("Entre com o valor do raio: ");
  int deu_certo = scanf("%f", &raio);

  float  p = 2.0 * PI * raio;
printf("O perimetro da Pizza eh: %.2f\n", p);

  return 0;
}