#ifndef HEADER_H
#define HEADER_H


// definicao da struct valueT
typedef struct {
    int pid;     // identificador do processo
    char nome[50]; // nome do processo
} valueT;

// definicao da struct nodeT
typedef struct _nodeT {
    valueT value;
    struct _nodeT *next;
} nodeT;

// definicao da struct stackT
typedef struct {
    nodeT *head;
} stackT;


nodeT *NewNode(void);
stackT *NewStack(void);
void Push(stackT *stack, valueT value);
valueT Pop(stackT *stack);
void PrintStack(stackT *stack);
void EmptyStack(stackT *stack);
void FreeStack(stackT *stack);
int isEmpty(stackT *stack);

#endif //HEADER_H
