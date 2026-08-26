#include <stdio.h>
int main() {
    long long segundos;
    long long semanas, dias, horas, minutos;

    printf("digite a quantidade de segundos: ");
    scanf("%lld", &segundos);

    semanas = segundos / 604800;
    segundos = segundos % 604800;

    dias = segundos / 86400;
    segundos = segundos % 86400;

    horas = segundos / 3600;
    segundos = segundos % 3600;
    
    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("=====tempo=====\n");
    printf("semanas: %lld\n", semanas);
    printf("dias: %lld\n", dias);
    printf("horas: %lld\n", horas);
    printf("minutos: %lld\n", minutos);
    printf("segundos: %lld\n", segundos);
    
    return 0;
}