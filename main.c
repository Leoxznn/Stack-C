#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void exibirMenu() {
    printf("\n=== Gerenciador de Stack de Processos ===\n");
    printf("1. Adicionar processo ao Stack\n");
    printf("2. Remover processo do topo da Stack\n");
    printf("3. Mostrar todos os processos contidos na Stack\n");
    printf("4. Verificar se a stack esta vazia\n");
    printf("5. Limpar stack\n");
    printf("0. Sair\n");
    printf("Escolha uma opcao: ");
}

int main() {
    stackT *Stack = NewStack();
    if (!Stack) {
        printf("Erro ao criar stack. Saindo.\n");
        return 1;
    }

    int opcao;
    do {
        exibirMenu();
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida. Por favor, digite um numero.\n");
            limparBuffer();
            continue;
        }
        limparBuffer();

        switch (opcao) {
            case 1: {
                valueT novoProcesso;
                printf("Digite o PID do processo: ");
                scanf("%d", &novoProcesso.pid);
                limparBuffer();

                printf("Digite o nome do processo: ");
                fgets(novoProcesso.nome, 49, stdin);
                novoProcesso.nome[strcspn(novoProcesso.nome, "\n")] = 0;

                Push(Stack, novoProcesso);
                printf("Processo adicionado com sucesso!\n");
                break;
            }
            case 2: {
                if (!isEmpty(Stack)) {
                    valueT removido = Pop(Stack);
                    printf("Processo removido: PID=%d, Nome=%s\n",
                           removido.pid, removido.nome);
                } else {
                    printf("A Stack esta vazia!\n");
                }
                break;
            }
            case 3:
                PrintStack(Stack);
                break;

            case 4:
                if (isEmpty(Stack)) {
                    printf("A Stack esta vazia.\n");
                } else {
                    printf("A Stack contem elementos.\n");
                }
                break;

            case 5:
                EmptyStack(Stack);
                printf("Stack foi limpa.\n");
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    EmptyStack(Stack);
    FreeStack(Stack);
    return 0;
}

