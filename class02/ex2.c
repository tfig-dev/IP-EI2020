#include <stdio.h>

void main (void) {
    double h, w;
    printf ("Insira altura x largura! \n");
    printf ("Altura: \n");

    scanf ("%lf", &h);
    printf ("Largura: \n");
    scanf ("%lf", &w);

    printf ("Área: %lf", h * w);
}