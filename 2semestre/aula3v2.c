int main() {

  int n = 1025;         // Declara um inteiro n com o valor 1025
  char *p = (char *)&n; // Declara um ponteiro para char e atribui o endereço de
                        // n a este ponteiro

  printf("Os 3 primeiros bytes de n são: %d e %d\n", *p, (p+1), (p+2));









  
  return 0;
}