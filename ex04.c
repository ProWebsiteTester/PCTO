#include <stdio.h>

int main()
{
    int a , b; //numeri interi %d
    float c, d; //numeri con 6 cifre dopo virgola %f
    double e , f; //numeri con 15 cifre dopo virgola (+precisione) %lf

    printf ("Determina a \n"); //chiede all'utente un valore
    scanf("%d",&a); //lo determina

    printf ("Determina b \n"); //chiede all'utente un valore
    scanf("%d",&b); //lo determina

    printf ("Determina c \n"); //chiede all'utente un valore
    scanf("%f",&c); //lo determina

    printf ("Determina d \n"); //chiede all'utente un valore
    scanf("%f",&d); //lo determina

    printf ("Determina e \n"); //chiede all'utente un valore
    scanf("%lf",&e); //lo determina

    printf ("Determina f \n"); //chiede all'utente un valore
    scanf("%lf",&f); //lo determina

    printf ("\na = %d\n", a); //li stampa
    printf ("b = %d\n", b);
    printf ("c = %f\n", c);
    printf ("d = %f\n", d);
    printf ("e = %lf\n", e);
    printf ("f = %lf\n \n", f);

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