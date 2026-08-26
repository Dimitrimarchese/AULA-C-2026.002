#include <stdio.h>
int main(){
    float salario;
    float imposto1, imposto2;

    printf("digite o valor do salario: ");
    scanf("%f", &salario);

    if(salario <= 2000){
        printf("voce esta isento de imposto\n");
        return 0;
    };
    if(salario <= 4000 && salario > 2000){
    imposto1 = salario * 0.15;
    printf("voce precisa pagar de imposto: %.2f\n", imposto1);
    };

     if(salario > 4000){
    imposto2 = salario * 0.225;
    printf("voce precisa pagar de imposto: %.2f\n", imposto2);
    return 0;
    };

}