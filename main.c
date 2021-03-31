#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char liczba;

    float a;
    float b;
    float c;
    float objetosc_prostopadloscianu;

    printf ("Podaj dlugosc boku a - ");
    scanf ("%f", &a);

    printf ("Podaj dlugosc boku b - ");
    scanf ("%f", &b);

    printf ("Podaj dlugosc boku c - ");
    scanf ("%f", &c);


    objetosc_prostopadloscianu = a * b* c;



    printf("Objetosc prostopadloscianu wynosi:%.2f", objetosc_prostopadloscianu);


     return 0;
}
