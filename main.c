#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char liczba;

    float a;
    float b;
    float c;
    float h;
    float objetosc_prostopadloscianu;
    float objetosc_ostroslupa_prawidlowego_czworokatnego;


    printf ("Podaj dlugosc boku a - ");
    scanf ("%f", &a);

    printf ("Podaj dlugosc boku b - ");
    scanf ("%f", &b);

    printf ("Podaj dlugosc boku c - ");
    scanf ("%f", &c);
    printf ("Podaj wysokosc ostroslupa h - ");
    scanf ("%f", &h);

    objetosc_prostopadloscianu = a * b* c;
    objetosc_ostroslupa_prawidlowego_czworokatnego = (a * a * h) / 3 ;

    printf("Objetosc ostroslupa wynosi:%.2f\n", objetosc_ostroslupa_prawidlowego_czworokatnego);
    printf("Objetosc prostopadloscianu wynosi:%.2f", objetosc_prostopadloscianu);


     return 0;
}
