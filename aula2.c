#include <stdio.h>
int main() {
    float n1;
    float n2;
    float media;
    printf("digite a nota 1: ");
    scanf("%f", &n1);
    printf("digite a nota 2: ");
    scanf("%f", &n2);
    media = (n1 + n2)/2;
    printf("sua nota 1 e: %.2f, e sua nota 2 e: %.2f, a media e: %.2f", n1, n2, media);
    return 0;
}