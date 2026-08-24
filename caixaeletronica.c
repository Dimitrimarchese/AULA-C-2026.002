#include <stdio.h>
int main() {
    int valor;
    int notas50, notas20, notas10, notas5;
    int restante;

    printf("Digite o valor que deseja sacar: R$ ");
    scanf("%d", &valor);

    if (valor <= 0 || valor % 5 != 0) {
        printf("Erro: o valor deve ser positivo e múltiplo de R$ 5.\n");
        return 0;
    }

    restante = valor;

    notas50 = restante / 50;
    restante = restante % 50;

    notas20 = restante / 20;
    restante = restante % 20;

    notas10 = restante / 10;
    restante = restante % 10;

    notas5 = restante / 5;
    restante = restante % 5;

    printf("\nNotas utilizadas:\n");
    printf("Notas de R$ 50: %d\n", notas50);
    printf("Notas de R$ 20: %d\n", notas20);
    printf("Notas de R$ 10: %d\n", notas10);
    printf("Notas de R$ 5:  %d\n", notas5);

    printf("Quantidade total de notas: %d\n",
           notas50 + notas20 + notas10 + notas5);

    return 0;
}
