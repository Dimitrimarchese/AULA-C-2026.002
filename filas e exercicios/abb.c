

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *esq, *dir;
} No;

No *novoNo(int valor) {
    No *n = malloc(sizeof(No));
    n->dado = valor; n->esq = n->dir = NULL;
    return n;
}

No *inserir(No *raiz, int valor) {
    if (!raiz) return novoNo(valor);
    if (valor < raiz->dado) raiz->esq = inserir(raiz->esq, valor);
    else if (valor > raiz->dado) raiz->dir = inserir(raiz->dir, valor);
    return raiz;
}


void emOrdem(No *raiz) {
    if (!raiz) return;
    emOrdem(raiz->esq);
    printf("%d ", raiz->dado);
    emOrdem(raiz->dir);
}

void preOrdem(No *raiz) {
    if (!raiz) return;
    printf("%d ", raiz->dado);
    preOrdem(raiz->esq);
    preOrdem(raiz->dir);
}

void posOrdem(No *raiz) {
    if (!raiz) return;
    posOrdem(raiz->esq);
    posOrdem(raiz->dir);
    printf("%d ", raiz->dado);
}

void destruir(No *raiz) {
    if (!raiz) return;
    destruir(raiz->esq);
    destruir(raiz->dir);
    free(raiz);
}

int main(void) {
    int valores[] = {50, 30, 70, 20, 40, 60, 80};
    No *raiz = NULL;
    for (int i = 0; i < 7; i++) raiz = inserir(raiz, valores[i]);

    printf("Em-ordem  : "); emOrdem(raiz);  printf("\n");
    printf("Pré-ordem : "); preOrdem(raiz); printf("\n");
    printf("Pós-ordem : "); posOrdem(raiz); printf("\n");

    destruir(raiz);
    return 0;
}