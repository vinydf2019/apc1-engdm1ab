int main() {
  int n = 1025;         // Declara um inteiro n com o valor 1025
  char *p = (char *)&n; // Declara um ponteiro para char e atribui o endereço de
                        // n a este ponteiro

  // Imprime o valor dos dois primeiros bytes do inteiro n
  printf("Os dois primeiros bytes de n são: %d e %d\n", p[0], p[1]);

  // Modifica o valor do terceiro byte de n utilizando o ponteiro para char e
  // atribui o valor 1
  p[2] = 1;

  // Imprime o valor de n
  printf("O valor do terceiro bite após modificado eh: %d\n", p[2]);

  return 0;
}