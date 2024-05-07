#include <stdio.h>

int main()
{
    float a , b , c;

    printf ("Quali sono le lunghezze dei lati?\n"); //chiede all'utente l'età
    scanf("%f",&a); //lo salva come variabile
    scanf("%f",&b);
    scanf("%f",&c);
    
    if (a+b>c && b+c>a && a+c>b)
    {
        printf("\n'E un triangolo");

        if (a == b && b == c && c == a)
        {
            printf(" equilatero");
        }

        else if (a == b || a == c || b ==c)
        {
            printf(" isoscele");
        }
        
        else
        {
            printf(" scaleno");
        }
        
    }
    
    else
    {
        printf("\n Non è un triangolo \n");
    }
    
}