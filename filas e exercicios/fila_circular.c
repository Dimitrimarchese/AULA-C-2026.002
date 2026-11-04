#include <stdio.h>
#include <stdlib.h>

#define N 8

typedef struct {
    int  dados[N];
    int  ini;        
    int  fim;        
    int  tamanho;    
} FilaCircular;

void iniciar(FilaCircular *fq) { fq->ini = fq->fim = fq->tamanho = 0; }

int cheia(FilaCircular *fq)  { return fq->tamanho == N; }
int vazia(FilaCircular *fq)  { return fq->tamanho == 0; }

void enfileirar(FilaCircular *fq, int valor) {
    if (cheia(fq)) { fprintf(stderr, "Fila cheia\n"); return; }
    fq->dados[fq->fim] = valor;
    fq->fim = (fq->fim + 1) % N;    /* wrap-around com % */
    fq->tamanho++;
}

int desenfileirar(FilaCircular *fq) {
    if (vazia(fq)) { fprintf(stderr, "Fila vazia\n"); exit(EXIT_FAILURE); }
    int val = fq->dados[fq->ini];
    fq->ini = (fq->ini + 1) % N;    /* wrap-around com % */
    fq->tamanho--;
    return val;
}

void imprimir(FilaCircular *fq) {
    printf("vetor bruto: [ ");
    for (int i = 0; i < N; i++) {
        if (i == fq->ini && i == fq->fim && vazia(fq))
            printf("__ ");
        else
            printf("%2d ", fq->dados[i]);
    }
    printf("]\n");
    printf("ini=%d  fim=%d  tamanho=%d\n", fq->ini, fq->fim, fq->tamanho);
}

int main(void) {
    FilaCircular fq;
    iniciar(&fq);

 
    printf("=== (a) Após enfileirar 1 a 8 ===\n");
    for (int i = 1; i <= 8; i++) enfileirar(&fq, i);
    imprimir(&fq);

    
    printf("\n=== (b) Após desenfileirar 3 e enfileirar 9, 10, 11 ===\n");
    for (int i = 0; i < 3; i++) desenfileirar(&fq);
    enfileirar(&fq, 9);
    enfileirar(&fq, 10);
    enfileirar(&fq, 11);
    imprimir(&fq);

    return 0;
}