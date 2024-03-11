#include<stdio.h>

int main(){
  printf("-------------------------------------\n");
  printf("                NOTA LEGAL           \n");
  printf("-------------------------------------\n");
  printf("  Item           Qtd       Valor     \n");
  printf("Banana prata      1        15.00     \n");
  printf("Banana vermelha   2        20.00     \n");
  printf("maca fuji         5        30.00     \n");

  char item[31] = "Banana prata";
  int  qtde = 1;
  float valor = 15.00;

  printf("%-17s %03i %10.2f\n", item, qtde, valor);
  
  char item2[31] = "Banana vermelha";
  int qtde = 2;
  float valor = 20.00;

  printf("%-17s %03i %10.2f\n", item, qtde, valor);

  char item3[31] = "maca fuji";
  int qtde = 5;
  float valor = 30.00;
  
  
  return 0;
}