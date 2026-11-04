#include <stdio.h>
#include <stdlib.h>

#define MAX 32

typedef struct {
    int dados[MAX];
    int topo;
} Pilha;

void iniciarPilha(Pilha *p)    { p->topo = -1; }
int  vazia(Pilha *p)           { return p->topo == -1; }
void empilhar(Pilha *p, int v) { p->dados[++(p->topo)] = v; }
int  desempilhar(Pilha *p)     { return p->dados[(p->topo)--]; }

void intParaBinario(int n) {
    if (n <= 0) { printf("0\n"); return; }

    Pilha p;
    iniciarPilha(&p);

    while (n > 0) {
        empilhar(&p, n % 2);
        n /= 2;
    }

    printf("Binário: ");
    while (!vazia(&p))
        printf("%d", desempilhar(&p));
    printf("\n");
}

int main(void) {
    intParaBinario(13);   
    intParaBinario(255);  
    intParaBinario(1);    
    return 0;
}