#include <stdio.h>
int main() {
    float ce, fr;
    printf("digite o grau: ");
    scanf("%f", &ce);
    fr = (ce * 9 /5) + 32;
    printf("a conversao em fahrenheit: %.2f\n",fr);
    return 0;}