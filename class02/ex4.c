#include <stdio.h>

void main (void) {
    float  fahr, cels;
    printf ("Insira a temperatura em Fahrenheit: ");
    scanf ("%f", &fahr);
    cels = (fahr-32) * 5/9;
    printf ("Convertido para Celsius: %.2f\n", cels);
}