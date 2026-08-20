#include <stdio.h>
int main(){

    float lado1;
    float lado2;
    float lado3;

    printf("digite o valor do lado1: ");
    scanf("%f", &lado1);
    printf("digite o valor do lado2: ");
    scanf("%f", &lado2);
    printf("digite o valor do lado3: ");
    scanf("%f", &lado3);

    if((lado1+lado2>lado3)&&(lado2+lado3>lado1)&&(lado3+lado1>lado2)){
        printf("os lados formam um triangulo!");

        }
        if(lado1 == lado2 && lado2 == lado3){
            printf("eh um triangulo equilatero");
        }
        if((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)){
            printf("isoceles");
        }
        if((lado1 != lado2) && (lado2 != lado3)){
            printf("e um escaleno");
        };

}