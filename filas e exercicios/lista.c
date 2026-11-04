

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *prox;
} No;

void inserirInicio(No **lista, int valor) {
    No *novo = malloc(sizeof(No));
    if (!novo) { perror("malloc"); exit(EXIT_FAILURE); }
    novo->dado = valor;
    novo->prox = *lista;
    *lista     = novo;     
}

void inserirFim(No **lista, int valor) {
    No *novo = malloc(sizeof(No));
    if (!novo) { perror("malloc"); exit(EXIT_FAILURE); }
    novo->dado = valor;
    novo->prox = NULL;

    if (*lista == NULL) {          /* lista vazia */
        *lista = novo;
        return;
    }
    No *atual = *lista;
    while (atual->prox != NULL)    /* percorre até o último */
        atual = atual->prox;
    atual->prox = novo;
}

void remover(No **lista, int valor) {
    No *atual    = *lista;
    No *anterior = NULL;

    while (atual != NULL && atual->dado != valor) {
        anterior = atual;
        atual    = atual->prox;
    }
    if (atual == NULL) return;     /* valor não encontrado */

    if (anterior == NULL)          /* remoção da cabeça */
        *lista = atual->prox;
    else
        anterior->prox = atual->prox;

    free(atual);
}

void imprimir(No *lista) {
    for (No *c = lista; c != NULL; c = c->prox)
        printf("%d → ", c->dado);
    puts("NULL");
}

void destruir(No **lista) {
    No *atual = *lista;
    while (atual != NULL) {
        No *tmp = atual->prox;
        free(atual);
        atual = tmp;
    }
    *lista = NULL;
}

int main(void) {
    No *lista = NULL;

    inserirFim(&lista, 1);
    inserirFim(&lista, 2);
    inserirFim(&lista, 3);
    inserirInicio(&lista, 0);
    imprimir(lista);           

    remover(&lista, 2);
    imprimir(lista);           

    destruir(&lista);
    imprimir(lista);           

    return 0;
}


/*No *inverter(No *lista) {
    No *anterior = NULL, *atual = lista, *proximo = NULL;
    while (atual != NULL) {
        proximo     = atual->prox;
        atual->prox = anterior;
        anterior    = atual;
        atual       = proximo;
    }
    return anterior;
}*/