#include <stdio.h>
int main(){
    int n, soma;

    printf("digite o numero: ");
    scanf("%d",&n);
    soma = 0;
    for (int i=1; i<=n; i++){
        soma = soma + i;
    }
    printf("a soma de 1 e n eh iqual a: %d\n", soma);

    return 0;


}