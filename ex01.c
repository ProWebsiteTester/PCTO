#include <stdio.h>

int main()
{
    //Variabili//

    int a; //numeri interi %d
    float b = 2.654321; //numeri con 6 cifre dopo virgola %f
    double c = 2.654321987654321; //numeri con 15 cifre dopo virgola (+precisione) %lf

    a = 65;
    printf("a: %d\n", a); // identificatore per int: %d
    printf("b: %f\n", b);
    printf("c: %lf\n", c);
    printf("a: %c\n", a); //valore ASCII
}