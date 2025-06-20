#include <stdio.h>
#include <stdlib.h>
#include "header.h"


// funcao para criar um novo no
nodeT *NewNode(void) {
    nodeT *novoNo = (nodeT *)malloc(sizeof(nodeT));
    if (!novoNo) {
        printf("Erro: Não ha espaco suficiente na heap.\n");
        return NULL;
    }
    novoNo->next = NULL;
    return novoNo;
}

// funcao para criar um novo stack
stackT *NewStack(void) {
    stackT *stack = (stackT *)malloc(sizeof(stackT));
    if (!stack) {
        printf("Erro: Nao tem espaco suficiente na heap.\n");
        return NULL;
    }
    stack->head = NULL;
    return stack;
}

// funcao para adicionar um elemento no stack
void Push(stackT *stack, valueT processo) {
    nodeT *novoNo = NewNode();
    if (!novoNo) return;

    novoNo->value = processo;
    novoNo->next = stack->head;
    stack->head = novoNo;
}

// funcao para remover o elemento do topo do stack
valueT Pop(stackT *stack) {
    valueT processoVazio = {0, ""}; // Processo vazio para retorno em erro
    if (stack->head == NULL) {
        printf("Erro: O stack esta vazio.\n");
        return processoVazio;
    }

    nodeT *temp = stack->head;
    valueT processo = temp->value;
    stack->head = temp->next;
    free(temp);

    return processo;
}

void PrintStack(stackT *stack) {
    if (stack->head == NULL) {
        printf("Stack vazia.\n");
        return;
    }

    nodeT *atual = stack->head;
    printf("\nConteudo do Stack:\n");
    while (atual != NULL) {
        printf("PID: %d, Processo: %s\n", atual->value.pid, atual->value.nome);
        atual = atual->next;
    }
    printf("\n");
}

// funcao para esvaziar o stack
void EmptyStack(stackT *stack) {
    while (stack->head != NULL) {
        Pop(stack);
    }
}

// funcao para liberar o stack completamente
void FreeStack(stackT *stack) {
    if (stack->head != NULL) {
        printf("Erro: O stack ainda contem processos.\n");
        return;
    }
    free(stack);
}

// funcao para verificar se a Stack esta vazia
int isEmpty(stackT *stack) {
    return (stack->head == NULL);
}

