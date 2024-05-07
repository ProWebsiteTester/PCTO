#include <stdio.h>

int main()
{
    int a;

    printf ("Qual é la tua età?\n"); //chiede all'utente l'età
    scanf("%d",&a); //lo salva come variabile

    if (a<0 || a>150)
    {
        printf("Inserisci un'età valida\n");
    }
    
    else if (a>18 && a<30)
    {
        printf("Sei giovane, ma non troppo \n");
    }
    
    else if (a<=18 && a>=1)
    {
        printf("Sei piccolo\n");
    }
        
    else
    {
        printf("Sei vecchio\n");
    }
    
}