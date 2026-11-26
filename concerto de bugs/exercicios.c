#include <stdio.h>
#include <stdlib.h>

/* --- Prototipos --------------------------------------------------- */
void ex01(void);
void ex02(void);
void ex03(void);
void ex04(void);
void ex05(void);
void ex06(void);
void ex07(void);
void ex08(void);
void ex09(void);
void ex10(void);
void ex11(void);
void ex12(void);
void ex13(void);
void ex14(void);
void ex15(void);
void ex16(void);
void ex17(void);
void ex18(void);
void ex19(void);
void ex20(void);
void ex21(void);

/* auxiliares de ex21 declaradas antes de main */
int  *criaVetor_ex21(int n);
float media_ex21(int *v, int n);

/* ================================================================== */
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <numero> (1-21)\n", argv[0]);
        return 1;
    }
    int op = atoi(argv[1]);
    switch (op) {
        case  1: ex01(); break;
        case  2: ex02(); break;
        case  3: ex03(); break;
        case  4: ex04(); break;
        case  5: ex05(); break;
        case  6: ex06(); break;
        case  7: ex07(); break;
        case  8: ex08(); break;
        case  9: ex09(); break;
        case 10: ex10(); break;
        case 11: ex11(); break;
        case 12: ex12(); break;
        case 13: ex13(); break;
        case 14: ex14(); break;
        case 15: ex15(); break;
        case 16: ex16(); break;
        case 17: ex17(); break;
        case 18: ex18(); break;
        case 19: ex19(); break;
        case 20: ex20(); break;
        case 21: ex21(); break;
        default:
            printf("Exercicio invalido. Escolha entre 1 e 21.\n");
            return 1;
    }
    return 0;
}

/* ==================================================================
 * EX 01 - Media e aprovacao
 * ERRO 1: media = n1 + n2 + n3 / 3   (precedencia: so n3 e dividido)
 * ERRO 2: if (media = 7)              (atribuicao em vez de ==)
 * ================================================================== */
void ex01(void) {
    int n1, n2, n3;
    float media;
    printf("Digite tres notas: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    media = n1 + n2 + n3 / 3;       /* ERRO 1 */
    if (media = 7)                   /* ERRO 2 */
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
}

/* ==================================================================
 * EX 02 - Par ou impar
 * ERRO 1: if (x % 2 = 0)   (atribuicao em vez de ==, nao compila)
 * ================================================================== */
void ex02(void) {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    if (x % 2 == 0)   /* corrija: troque == por = para ver o erro original */
        printf("Par\n");
    else
        printf("Impar\n");
}
/* NOTA: "x % 2 = 0" nao compila (lvalue required). O codigo original
   tinha esse erro de sintaxe; aqui esta com == para o arquivo compilar.
   Sua tarefa: entender por que "= 0" e errado e reescrever com operador ternario. */

/* ==================================================================
 * EX 03 - Classificacao de triangulo
 * ERRO 1: | em vez de ||  (bitwise vs logico)
 * ERRO 2: & em vez de &&
 * ERRO 3: = em vez de == nas comparacoes de lados
 * ERRO 4: condicao isosceles incompleta (nao testa a==c)
 * ================================================================== */
void ex03(void) {
    float a, b, c;
    printf("Digite os tres lados: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c | a + c > b | b + c > a) {   /* ERRO 1 */
        if (a == b & b == c)                     /* ERRO 2 */
            printf("Equilatero\n");
        else if (a == b | b == c)                /* ERRO 1,4 */
            printf("Isosceles\n");
        else
            printf("Escaleno\n");
    } else {
        printf("Nao forma triangulo\n");
    }
}
/* NOTA: as comparacoes "a = b" originais nao compilam com float (invalid
   operands to binary &). Corrigidas para == para o arquivo compilar;
   os | vs || ainda estao errados propositalmente. */

/* ==================================================================
 * EX 04 - Calculadora com switch
 * ERRO 1-4: faltam break nos cases 1, 2, 3, 4
 * ERRO 5:   if (b = 0)   (atribuicao em vez de ==)
 * ================================================================== */
void ex04(void) {
    int op;
    float a, b;
    printf("1-Soma 2-Sub 3-Mult 4-Div\nOpcao: ");
    scanf("%d", &op);
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);
    switch (op) {
        case 1:
            printf("Resultado: %.2f\n", a + b);    /* ERRO 1: sem break */
        case 2:
            printf("Resultado: %.2f\n", a - b);    /* ERRO 2: sem break */
        case 3:
            printf("Resultado: %.2f\n", a * b);    /* ERRO 3: sem break */
        case 4:
            if (b = 0)                              /* ERRO 5 */
                printf("Divisao por zero!\n");
            else
                printf("Resultado: %.2f\n", a / b); /* ERRO 4: sem break */
        default:
            printf("Opcao invalida\n");
    }
}

/* ==================================================================
 * EX 05 - Tabuada com while
 * ERRO 1: while (i = 10)   (atribuicao -> loop infinito, i sempre 10)
 * ERRO 2: i nunca e incrementado dentro do loop
 * ================================================================== */
void ex05(void) {
    int n, i = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    while (i = 10) {                 /* ERRO 1 */
        printf("%d x %d = %d\n", n, i, n * i);
                                     /* ERRO 2: falta i++ */
    }
}

/* ==================================================================
 * EX 06 - Fatorial
 * ERRO 1: resultado = 0    (deveria comecar em 1)
 * ERRO 2: i = n            (atribuicao em vez de <=)
 * ERRO 3: i += 0           (nao avanca; deveria ser i++)
 * ================================================================== */
int fatorial_ex06(int n) {
    int resultado = 0;                              /* ERRO 1 */
    for (int i = 1; i = n; i += 0 /* ERRO 3 */)   /* ERRO 2 */
        resultado = resultado * i;
    return resultado;
}
void ex06(void) {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fatorial_ex06(n));
}

/* ==================================================================
 * EX 07 - Quadrado de asteriscos
 * ERRO 1: i = n   (atribuicao em vez de <=)
 * ERRO 2: j = n   (mesmo)
 * ERRO 3: i += 0  (nao avanca; deveria ser i++)
 * ERRO 4: j += 0  (nao avanca; deveria ser j++)
 * ================================================================== */
void ex07(void) {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    for (int i = 1; i = n; i += 0 /* ERRO 3 */) {   /* ERRO 1 */
        for (int j = 1; j = n; j += 0 /* ERRO 4 */) { /* ERRO 2 */
            printf("*");
        }
        printf("\n");
    }
}

/* ==================================================================
 * EX 08 - Numero primo
 * ERRO 1: if (n % i == 0) correto, mas do-while roda de i=2 ate n:
 *         para n=2, checa 2%2==0 -> marca nao primo (errado)
 * ERRO 2: i += 0   (nao avanca; deveria ser i++)
 * ERRO 3: while (i = n)   (atribuicao em vez de <)
 * ================================================================== */
int ehPrimo_ex08(int n) {
    int i = 2, primo = 1;
    do {
        if (n % i == 0) {           /* original tinha = aqui (nao compila) */
            primo = 0;
        }
        i += 0;                     /* ERRO 2 */
    } while (i = n);                /* ERRO 3 */
    return primo;
}
void ex08(void) {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    if (ehPrimo_ex08(n))
        printf("Primo\n");
    else
        printf("Nao primo\n");
}

/* ==================================================================
 * EX 09 - Troca por passagem por valor
 * ERRO 1: troca recebe copias (int a, int b); x e y nao mudam
 * ================================================================== */
void troca_ex09(int a, int b) {     /* ERRO 1: deveria ser int *a, int *b */
    int temp = a;
    a = b;
    b = temp;
}
void ex09(void) {
    int x = 5, y = 10;
    troca_ex09(x, y);
    printf("x = %d, y = %d\n", x, y);
}

/* ==================================================================
 * EX 10 - Maior elemento do vetor
 * ERRO 1: int m   nao inicializado -> comportamento indefinido
 * ERRO 2: i += 0  (nao avanca; deveria ser i++)
 * ================================================================== */
int maior_ex10(int v[], int n) {
    int m;                                       /* ERRO 1 */
    for (int i = 0; i < n; i += 0 /* ERRO 2 */)
        if (v[i] > m)
            m = v[i];
    return m;
}
void ex10(void) {
    int vet[] = {3, 7, 1, 9, 4};
    printf("Maior: %d\n", maior_ex10(vet, 5));
}

/* ==================================================================
 * EX 11 - Soma recursiva sem caso base
 * ERRO 1: sem caso base -> stack overflow
 * ================================================================== */
int soma_ex11(int n) {
    return n + soma_ex11(n - 1);    /* ERRO 1: falta if (n == 0) return 0; */
}
void ex11(void) {
    printf("%d\n", soma_ex11(5));
}

/* ==================================================================
 * EX 12 - Ponteiro nao inicializado
 * ERRO 1: int *p sem inicializacao; *p = 42 escreve em endereco lixo
 * ================================================================== */
void ex12(void) {
    int *p;                         /* ERRO 1 */
    *p = 42;
    printf("%d\n", *p);
}

/* ==================================================================
 * EX 13 - Off-by-one com ponteiro
 * ERRO 1: i = 5  deveria ser i < 5 (acessa v[5] -> UB)
 * ERRO 2: i += 0 (nao avanca; deveria ser i++)
 * ================================================================== */
void ex13(void) {
    int v[5] = {10, 20, 30, 40, 50};
    int *p = v;
    for (int i = 0; i = 5; i += 0 /* ERRO 2 */) {  /* ERRO 1 */
        printf("%d ", *(p + i));
    }
    printf("\n");
}

/* ==================================================================
 * EX 14 - Decay de array para ponteiro
 * ERRO 1: sizeof(v)/sizeof(v[0]) dentro da funcao retorna tamanho
 *         do ponteiro, nao do array (array decaiu ao ser passado)
 * ================================================================== */
void imprimeTamanho_ex14(int v[]) {
    printf("Tamanho dentro da funcao: %lu\n", sizeof(v) / sizeof(v[0])); /* ERRO 1 */
}
void ex14(void) {
    int v[10] = {0};
    printf("Tamanho no main: %lu\n", sizeof(v) / sizeof(v[0]));
    imprimeTamanho_ex14(v);
}

/* ==================================================================
 * EX 15 - Busca linear retorna na 1a iteracao
 * ERRO 1: o else retorna -1 no primeiro elemento que nao bate
 * ERRO 2: if (v[i] = alvo)  atribuicao em vez de ==
 * ERRO 3: i += 0 (nao avanca)
 * ================================================================== */
int buscaLinear_ex15(int v[], int n, int alvo) {
    for (int i = 0; i < n; i += 0 /* ERRO 3 */) {
        if (v[i] = alvo)            /* ERRO 2 */
            return i;
        else
            return -1;              /* ERRO 1 */
    }
    return -1;
}
void ex15(void) {
    int v[] = {4, 8, 15, 16, 23, 42};
    printf("%d\n", buscaLinear_ex15(v, 6, 15));
}

/* ==================================================================
 * EX 16 - Bubble sort com acesso fora do limite
 * ERRO 1: laco interno j < n deveria ser j < n - 1 - i (acessa v[n])
 * ERRO 2: i += 0 e j += 0 (nao avancam)
 * ================================================================== */
void bubbleSort_ex16(int v[], int n) {
    for (int i = 0; i < n; i += 0 /* ERRO 2 */) {
        for (int j = 0; j < n; j += 0 /* ERRO 2 */) {   /* ERRO 1 */
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}
void ex16(void) {
    int v[] = {5, 2, 9, 1, 7};
    bubbleSort_ex16(v, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", v[i]);
    printf("\n");
}

/* ==================================================================
 * EX 17 - Busca binaria com loop infinito
 * ERRO 1: while (ini = fim)   atribuicao; deveria ser <=
 * ERRO 2: if (v[meio] = alvo) atribuicao em vez de ==
 * ERRO 3: ini = meio          deveria ser ini = meio + 1
 * ERRO 4: fim = meio          deveria ser fim = meio - 1
 * ================================================================== */
int buscaBinaria_ex17(int v[], int n, int alvo) {
    int ini = 0, fim = n - 1;
    while (ini = fim) {             /* ERRO 1 */
        int meio = (ini + fim) / 2;
        if (v[meio] = alvo)         /* ERRO 2 */
            return meio;
        else if (v[meio] < alvo)
            ini = meio;             /* ERRO 3 */
        else
            fim = meio;             /* ERRO 4 */
    }
    return -1;
}
void ex17(void) {
    int v[] = {1, 3, 5, 7, 9, 11};
    printf("%d\n", buscaBinaria_ex17(v, 6, 7));
}

/* ==================================================================
 * EX 18 - Pilha: pop le posicao errada
 * ERRO 1: if (p->topo = MAX_PILHA)  atribuicao em vez de ==
 * ERRO 2: if (p->topo = 0)          atribuicao em vez de ==
 * ERRO 3: *valor = p->dados[p->topo]  topo aponta pra proxima posicao
 *         livre; deveria ser p->dados[p->topo - 1]
 * ERRO 4: p->topo += 0 (nao avanca; deveria ser p->topo++)
 * ERRO 5: p->topo -= 0 (nao recua; deveria ser p->topo--)
 * ================================================================== */
#define MAX_PILHA 5
typedef struct { int dados[MAX_PILHA]; int topo; } Pilha18;

void inicializa_p18(Pilha18 *p) { p->topo = 0; }

int push_ex18(Pilha18 *p, int valor) {
    if (p->topo = MAX_PILHA) return 0;   /* ERRO 1 */
    p->dados[p->topo] = valor;
    p->topo += 0;                        /* ERRO 4 */
    return 1;
}
int pop_ex18(Pilha18 *p, int *valor) {
    if (p->topo = 0) return 0;           /* ERRO 2 */
    *valor = p->dados[p->topo];          /* ERRO 3 */
    p->topo -= 0;                        /* ERRO 5 */
    return 1;
}
void ex18(void) {
    Pilha18 p;
    inicializa_p18(&p);
    push_ex18(&p, 10);
    push_ex18(&p, 20);
    int x;
    pop_ex18(&p, &x);
    printf("Desempilhado: %d\n", x);
}

/* ==================================================================
 * EX 19 - Fila circular: dequeue le do lugar errado
 * ERRO 1: if (f->qtd = MAX_FILA)  atribuicao em vez de ==
 * ERRO 2: if (f->qtd = 0)         atribuicao em vez de ==
 * ERRO 3: *valor = f->dados[f->fim]  deveria ser f->dados[f->ini]
 * ERRO 4: f->qtd += 0 / -= 0     (nao mudam; deveria ser ++ e --)
 * ================================================================== */
#define MAX_FILA 5
typedef struct { int dados[MAX_FILA]; int ini, fim, qtd; } Fila19;

void inicializa_f19(Fila19 *f) { f->ini = f->fim = f->qtd = 0; }

int enqueue_ex19(Fila19 *f, int valor) {
    if (f->qtd = MAX_FILA) return 0;   /* ERRO 1 */
    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % MAX_FILA;
    f->qtd += 0;                       /* ERRO 4 */
    return 1;
}
int dequeue_ex19(Fila19 *f, int *valor) {
    if (f->qtd = 0) return 0;          /* ERRO 2 */
    *valor = f->dados[f->fim];         /* ERRO 3 */
    f->ini = (f->ini + 1) % MAX_FILA;
    f->qtd -= 0;                       /* ERRO 4 */
    return 1;
}
void ex19(void) {
    Fila19 f;
    inicializa_f19(&f);
    enqueue_ex19(&f, 1);
    enqueue_ex19(&f, 2);
    int x;
    dequeue_ex19(&f, &x);
    printf("Removido: %d\n", x);
}

/* ==================================================================
 * EX 20 - Lista encadeada: ultimo no nao impresso
 * ERRO 1: insereInicio recebe No* em vez de No**  (nao atualiza head)
 * ERRO 2: while (atual->prox = NULL)  atribuicao; deveria ser != NULL
 * ================================================================== */
typedef struct No20 { int valor; struct No20 *prox; } No20;

void insereInicio_ex20(No20 **head, int valor) {  /* corrigido para compilar */
    No20 *novo = (No20 *) malloc(sizeof(No20));
    novo->valor = valor;
    novo->prox = *head;
    *head = novo;
}
void imprime_ex20(No20 *head) {
    No20 *atual = head;
    while (atual->prox = NULL) {    /* ERRO 2: = em vez de != */
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }
    printf("NULL\n");
}
void ex20(void) {
    No20 *head = NULL;
    insereInicio_ex20(&head, 30);
    insereInicio_ex20(&head, 20);
    insereInicio_ex20(&head, 10);
    imprime_ex20(head);
}

/* ==================================================================
 * EX 21 - Desafio: pelo menos 5 erros
 * ERRO 1: int v[n] local -> retorna ponteiro para stack morta (UB)
 * ERRO 2: for (i = 0; i = n; i += 0) -> atribuicao + nao avanca + off-by-one
 * ERRO 3: int soma nao inicializado
 * ERRO 4: soma / n  divisao inteira (trunca float)
 * ERRO 5: free(v)  v nao foi malloc -> UB
 * ================================================================== */
int *criaVetor_ex21(int n) {
    int v[n];                           /* ERRO 1: VLA local, retorno invalido */
    for (int i = 0; i = n; i += 0 /* ERRO 2 */)
        v[i] = i * 2;
    return v;                           /* ERRO 1 */
}
float media_ex21(int *v, int n) {
    int soma;                           /* ERRO 3 */
    for (int i = 0; i < n; i++)
        soma += v[i];
    return soma / n;                    /* ERRO 4: divisao inteira */
}
void ex21(void) {
    int n = 5;
    int *v = criaVetor_ex21(n);
    printf("Media: %f\n", media_ex21(v, n));
    free(v);                            /* ERRO 5 */
}
