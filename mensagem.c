#include <stdio.h>
#include "matematica.c"

int main() {
    float valorSalario = 19995;
    printf("o salario eh %.2f, e o valor em dolar eh: %.2f\n", valorSalario, converteParaDolar(valorSalario));
;
    return 0;
}