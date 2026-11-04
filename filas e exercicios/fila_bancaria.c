

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *prox;
} No;

typedef struct {
    No *frente;  
    No *fundo;    
    int tamanho;
} Fila;

void iniciarFila(Fila *f) { f->frente = f->fundo = NULL; f->tamanho = 0; }

int filaVazia(Fila *f) { return f->frente == NULL; }

void enfileirar(Fila *f, int valor) {
    No *novo = malloc(sizeof(No));
    if (!novo) { perror("malloc"); exit(EXIT_FAILURE); }
    novo->dado = valor;
    novo->prox = NULL;
    if (f->fundo) f->fundo->prox = novo;
    else          f->frente = novo;      
    f->fundo = novo;
    f->tamanho++;
}

int desenfileirar(Fila *f) {
    if (filaVazia(f)) { fprintf(stderr, "Fila vazia\n"); exit(EXIT_FAILURE); }
    No  *tmp   = f->frente;
    int  valor = tmp->dado;
    f->frente  = tmp->prox;
    if (!f->frente) f->fundo = NULL;   
    free(tmp);
    f->tamanho--;
    return valor;
}

int front(Fila *f) {
    if (filaVazia(f)) { fprintf(stderr, "Fila vazia\n"); exit(EXIT_FAILURE); }
    return f->frente->dado;
}

void destruirFila(Fila *f) {
    while (!filaVazia(f)) desenfileirar(f);
}

int main(void) {
    Fila f;
    iniciarFila(&f);

    for (int i = 1; i <= 5; i++) enfileirar(&f, i);

    printf("=== Atendimento Bancário ===\n");
    while (!filaVazia(&f)) {
        int atendido = desenfileirar(&f);
        printf("Atendendo cliente %d\n", atendido);
        if (!filaVazia(&f))
            printf("  Próximo da fila (front): cliente %d\n", front(&f));
        else
            printf("  Fila esvaziada.\n");
    }

    destruirFila(&f);
    return 0;
}