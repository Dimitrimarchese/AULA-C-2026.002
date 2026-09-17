#include <stdio.h>
#include "matematica.h"

float dolar = 5.14;
float areaRetangulo(float base, float altura) {
    float area = base * altura;
    return area;
}

float areaTriangulo(float base, float altura) {
    float area = (base * altura)/2;
    return area;
}
float areaCirculo(float raio) {
    float area = 3.141592 * raio * raio;
    return area;

}
float areaTrapezio(float tMaior, float tMenor, float altura) {
    float area = ((tMaior + tMenor) * altura)/2;
    return area;
}

float converteParaDolar(float valorReal) {
    float valorConvertido = valorReal / dolar;
    return valorConvertido;
}