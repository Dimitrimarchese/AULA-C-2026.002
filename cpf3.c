#include <stdio.h>
void ler_cpf(int cpf[]) {
    for (int i = 0; i < 9; i++) {
        printf("Digite o %dº numero do cpf: ", i + 1);
        scanf("%d", &cpf[i]);
    }
}

int soma_pe(int cpf[], int multipli, int quantidade_n) {
    int soma = 0;
    for (int i = 0; i < quantidade_n; i++) {
        soma += cpf[i] * multipli;
        multipli--;
    }
    return soma;
}

int calcular_digito(int soma) {
    int resto = soma % 11;
    if (resto < 2) {
        return 0;
    } else {
        return 11 - resto;
    }
}

int main() {
    int cpf[11];
    int soma1, soma2;

    ler_cpf(cpf);

    soma1 = soma_pe(cpf, 10, 9);
    cpf[9] = calcular_digito(soma1);
    printf("seu numero e %d\n", cpf[9]);

    soma2 = soma_pe(cpf, 11, 10);
    cpf[10] = calcular_digito(soma2);
    printf("seu seg numero e: %d\n", cpf[10]);

    printf("e seu cpf e: %d%d%d.%d%d%d.%d%d%d-%d%d\n", 
            cpf[0], cpf[1], cpf[2], cpf[3], cpf[4], cpf[5], cpf[6], cpf[7], cpf[8], cpf[9], cpf[10]);

    return 0;
}