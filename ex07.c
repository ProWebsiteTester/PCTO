#include <stdio.h>

int main()
{
    int a;

    printf ("Qual é la tua età?\n"); //chiede all'utente l'età
    scanf("%d",&a); //lo salva come variabile

    if (a>18)
    {
        printf("\nSei maggiorenne, puoi bere\n"); //stampa il testo se ha piu di 18 anni
    }
     
    else if (a == 18)
    {
        printf("\nSei maggiorenne da poco, vai a bere\n");  //stampa il testo se ha 18 anni
    }
    
    else
    {
        printf("\nNon sei maggiorenne, bevi di nascosto\n"); //stampa il testo se ha meno d 18 anni
    }
}