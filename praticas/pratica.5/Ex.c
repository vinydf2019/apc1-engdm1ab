#include <stdio.h>

int main() {
    float gigabytes; 
    long long bytes; 

    // Vamos pedir para o usuário digitar quantos gigabytes quer converter
    printf("Digite o valor em Gigabytes: ");
   float deu_certo = scanf("%f", &gigabytes);

    // Agora, vamos converter. Sabemos que 1 gigabyte é igual a 1024 vezes 1024 vezes 1024 bytes
    bytes = (long long) gigabytes * 1024 * 1024 * 1024;

    // Vamos mostrar o resultado na tela
    printf("%.2f Gigabytes é igual a %lld bytes.\n", gigabytes, bytes);

    return 0;
}