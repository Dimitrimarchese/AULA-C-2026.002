//Escreva um programa que leia 3 notas de um aluno e a média das notas dos
//exercícios realizados por ele. Calcular a média de aproveitamento, usando a
//fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito
//de acordo com a tabela:
#include <stdio.h>
int main() {
    float n1;
    float n2;
    float n3;
    float me;
    float mea;

    printf("digite a nota 1: ");
    scanf("%f", &n1);
    printf("digite a nota 2: ");
    scanf("%f", &n2);
    printf("digite a nota 3: ");
    scanf("%f", &n3);

    me = (n1 + n2 + n3)/3;
    mea = (n1 + n2*2 + n3*3 + me)/7;

    if (mea >= 9){
        printf("sua nota eh: A,\n");
        printf("sua media e: %f\n", mea);
    }

    if (mea >= 7.5 && mea < 9){
        printf("sua nota eh: B\n");
        printf("sua media e: %f\n", mea);
    }

    if (mea >= 6 && mea < 7.5){
        printf("sua nota eh: C\n");
        printf("sua media e: %f\n", mea);
    }

    if (mea >= 4 && mea < 6){
        printf("sua nota eh: D\n");
        printf("sua media e: %f\n", mea);
    }
     if (mea<4){
        printf("sua nota eh: E\n");
        printf("sua media e: %f\n", mea);
     }
    
}