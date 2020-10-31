#include <stdio.h>
#include <math.h>

void main(void)
{
    double raio, area, per;
    printf ("Find Area: ");
    scanf ("%lf", &raio);
    area = M_PI * (raio * raio);
    per = 2 * M_PI * raio;
    printf ("Area: %lf\n",  area);
    printf ("Diametro: %lf\n", raio*2);
    printf ("Perímetro: %lf\n", per);
}

