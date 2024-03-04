/*2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
#include <stdio.h>*/

int main() {
  float base;
  float altura;

  base = 2.0f; //2.0 isso é um float, 2.0 isso double
  altura = 3.0f;
  
  float area = base * altura / 2.0f;
  
  printf("A area do triangulo eh: %.2f\n", area);
}