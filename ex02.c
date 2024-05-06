#include <stdio.h>

int main()
{
    //Variabili//

    int a; //numeri interi %d
    float b = 2.654321; //numeri con 6 cifre dopo virgola %f
    double c = 2.654321987654321; //numeri con 15 cifre dopo virgola (+precisione) %lf

    a = 65;
    printf("a+10 = %d \n", a + 10); //Somma
    printf("a+b = %lf \n", a + b); //Somma tra variabili

    printf("a-10 = %d \n", a - 10); //Differenza
    printf("a-b = %lf \n", a - b); //Differenza tra variabili

    printf("a/10 = %d \n", a/10); //Divisione
    printf("a/b = %lf \n", a/b); //Divisione tra variabili

    printf("a x 10 = %d \n", a*10); //Moltiplicazione
    printf("a x b = %lf \n", a*b); //Moltiplicazione tra variabili
}