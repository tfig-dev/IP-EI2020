#include <stdio.h>
#include <math.h>

void main(void)
{
    double cat1, cat2;
    printf("Insira o comprimento do cateto 1: ");
    scanf("%lf", &cat1);

    printf("Insira o comprimento do cateto 2: ");
    scanf("%lf", &cat2);
    //a hipotesuda quadrado é a soma dos catetos, ao quadrado 
    cat1 = pow(cat1,2);
    cat2 = pow(cat2,2);

    double hipo;

    hipo = sqrt(cat1+cat2);

    printf ("Comprimento da Hipotenusa: %lf\n", hipo);
    printf ("Area: %lf\n", ((cat1+cat2)/2));

}
