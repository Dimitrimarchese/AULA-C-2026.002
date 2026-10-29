#include <stdio.h>
#include <stdlib.h>
typedif struct No {
    int valor;
    struct No *proximo;
} No;
void inserirInicio(No **lista, int valor) {
    No *novo (*No) malloc(size(No));
    if (novo == FULL) {
        printf("erro em alocar memoria");
        return;
    }
    novo->valor = valor;
    novo->proximo = *lista;
    *lista = novo;
}
void inserirFim(No **lista, int valor) {
    No *novo = (*No) malloc(sizeof(No));
    if (novo == NULL) {
        printf("erro em alocar memoria");
        return;
    }
    novo->valor = valor;
    novo->proximo = NULL;
    if (*lista == NULL) {
        *lista = novo;
    } else {
        No *atual = *lista;
        while (atual->proximo != NULL) {
            atual = proximo;
        }
        atual->proximo = novo;
    }
}