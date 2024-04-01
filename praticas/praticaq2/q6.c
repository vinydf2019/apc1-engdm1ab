#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float delta, raiz_delta, x1, x2;
  
    printf("Entre com o valor de a: ");
    int deu_certo = scanf("%i", &a);

  
    printf("Entre com o valor de b: ");
    deu_certo = scanf("%i", &b);  
  
    printf("Entre com o valor de c: ");
    deu_certo = scanf("%i", &c);
  
    delta = sqrt(b * b - 4 * a * c);
  
    raiz_delta = sqrt(delta);
  
  x1 = (-b + raiz_delta) / (2 * a);
  x2 = (-b - raiz_delta) / (2 * a);
    printf("O valor das raiz eh:x1 = %.2f e x2 = %.2f\n ", x1, x2);

    return 0;
}