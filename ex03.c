#include <stdio.h>

int main()
{
    //Variabili//

    int a = 3; //numeri interi %d
    int b = 5;
    float c = 2.654321; //numeri con 6 cifre dopo virgola %f
    float d = 1.234567;
    double e = 2.654321987654321; //numeri con 15 cifre dopo virgola (+precisione) %lf
    double f = 3.987654321654321;

    printf("Somme \n");
    printf("a+10 = %d \n", a + 10); //Somma
    printf("a+b = %d \n \n", a + b); //Somma tra variabili

    printf("Differenze \n");
    printf("a-10 = %d \n", a - 10); //Differenza
    printf("c-d = %lf \n \n", c - d); //Differenza tra variabili

    printf("Divisioni\n");
    printf("a/10 = %d \n", a/10); //Divisione
    printf("e/f = %lf \n \n", e/f); //Divisione tra variabili

    printf("Moltiplicazioni\n");
    printf("a x 10 = %d \n", a*10); //Moltiplicazione
    printf("a x f = %lf \n", a*f); //Moltiplicazione tra variabili
}