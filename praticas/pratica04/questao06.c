/*6. Faça um programa em C que leia um verbo e imprima a conjugação no presente
 * do indicativo caso ele termine em AR (ex.: PROGRAMAR, EU PROGRAMO, TU
 * PROGRAMAS, ELE PROGRAMA, NÓS PROGRAMAMOS, VÓS PROGRAMAIS E ELES PROGRAMAM).*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main() {
  char sufixos[6][5] = {"O", "AS", "A", "AMOS", "AIS","AM"};
  char pronomes[6][5] = {"EU", "TU", "ELE", "NÓS", "VÓS", "ELES"};
  char verbo[51];
  printf("Entre com um verbo terminsdo em AR:");
  int deu_certo = scanf("%s", verbo);

  int tamanho = strlen(verbo);
  int ultima_posicao = tamanho - 1;
  int penultima_posicao = tamanho - 2;

  for (int i = 0; i < tamanho; i++) {
    verbo[i] = toupper(verbo[i]);
  }

  if (verbo[penultima_posicao] == 'A' && verbo[ultima_posicao] == 'R') {

    char radical[51];

    strcpy(radical, verbo);
    radical[penultima_posicao] = '\0';
    printf("Verbo %s no presente do indicativo\n", verbo);
    for( int i=0; i<6; i++){
      printf("%s %s%s\n", pronomes[i], radical, sufixos[i]);
    }

  } else {
    printf("O verbo %s nao termina em AR!\n", verbo);
  }

  return 0;
}