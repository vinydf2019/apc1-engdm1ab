#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_entrada 100
#define max_tamanho_nome 50
#define max_tamanho_telefone 15

typedef struct {
    char nome[max_tamanho_nome];
    char telefone[max_tamanho_telefone];
} Contato;

int main() {
    Contato contatos[max_entrada];
    int num_contatos = 0;
    char escolha;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar novo contato---.\n");
        printf("2. Mostrar todos os contatos.\n");
        printf("3. Sair---------------------.\n");
        printf("Escolha uma opção: ");
        if (scanf(" %c", &escolha) != 1) {
            printf("Erro ao ler a opção. Por favor, tente novamente.\n");
            while (getchar() != '\n'); // Limpar o buffer de entrada
            continue;
        }

        switch (escolha) {
            case '1': {
                if (num_contatos < max_entrada) {
                    printf("Digite o nome: ");
                    if (scanf("%49s", contatos[num_contatos].nome) != 1) {
                        printf("Erro ao ler o nome. Por favor, tente novamente.\n");
                        while (getchar() != '\n'); // Limpar o buffer de entrada
                        continue;
                    }

                    printf("Digite o telefone: ");
                    if (scanf("%14s", contatos[num_contatos].telefone) != 1) {
                        printf("Erro ao ler o telefone. Por favor, tente novamente.\n");
                        while (getchar() != '\n'); // Limpar o buffer de entrada
                        continue;
                    }

                    num_contatos++;
                    printf("Contato adicionado com sucesso!\n");
                } else {
                    printf("Limite máximo de contatos atingido!\n");
                }
                break;
            }
            case '2': {
                if (num_contatos == 0) {
                    printf("Nenhum contato cadastrado ainda.\n");
                } else {
                    printf("Contatos:\n");
                    for (int i = 0; i < num_contatos; i++) {
                        printf("%d. Nome: %s, Telefone: %s\n", i + 1, contatos[i].nome, contatos[i].telefone);
                    }
                }
                break;
            }
            case '3': {
                printf("Encerrando o programa.\n");
                break;
            }
            default: {
                printf("Opção inválida! Por favor, escolha novamente.\n");
                break;
            }
        }
    } while (escolha != '3');

    return 0;
}
