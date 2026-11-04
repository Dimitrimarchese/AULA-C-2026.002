1) Responda de forma objetiva:

a) O que é um ponteiro?

//e o valor da memoria de uma variavel, capaz de armazenar e modificar.

b) Qual a diferença entre os operadores & e *?

//O & descobre o endereço de uma variável, e o * acessa o valor guardado em um endereço.

c) Por que é perigoso declarar int *p; e depois fazer *p = 5;?

/*Fazer isso é perigoso porque você está tentando gravar um valor em um local desconhecido da
memória, o que geralmente causa o travamento do programa
ou corrompe dados do sistema.*/

d) O que significa dizer que *&x ≡ x?

//significa que operadores inversos se cancelam, retornando ao valor original


2) Considere o código abaixo:

/*#include <stdio.h>
int main(void) {
int x = 42;
int *p = &x;
printf("A: %d\n", x);
printf("B: %d\n", *p);
printf("C: %p\n", (void*)&x);
printf("D: %p\n", (void*)p);
*p = 100;
printf("E: %d\n", x);
return 0;
}*/

a) O que será impresso em A e B?

//o valor empresso em A: 42
//o valor empresso em B: 42

b) As saídas C e D serão iguais ou diferentes? Justifique.

//vao ser iguais pois o %p puxa o endereço da memoria, e nao o valor guardado pelo
//endereço, e o (void*)&x) e (void*)p, vao apenas puxar o endereço para aparecer na tela.

c) Qual será o valor impresso em E? Explique o motivo.

//vai ser 100, pois tem um ponteiro apontando para variavel 'x', e a modificando.



3) Escreva uma função:
#include <stdio.h>

void dobra(int *x) {
    *x = *x * 2; 
}

int main() {
    int n = 7;
    printf("Valor de n antes: %d\n", n);
    dobra(&n);
    printf("Valor de n depois: %d\n", n);
    return 0;
}

Por que essa função não funcionaria se o parâmetro fosse void
dobra(int x)?

//Se o parâmetro da função fosse void dobra(int x),
//a função passaria a usar a passagem por valor em vez de ponteiros
//e como a dobra(&n), puxa o valor do ponteiro, da erro no compilador.


