#include <stdio.h>

int main()
{
    int a; //creazione variabili
    int b = a - 1;
    int c = 0;
    
    printf("Inserisci un numero \n"); //richiesta all'utente
    scanf("%d", &a); //inserisci variabile a



    while (b > 1)
    {
        if (a%b == 0)
        {
           c = c + 1; 
        }
        
        b = b - 1;    
    }
    
        if (c == 0)
        {
            printf("Il numero %d è primo", a);
        }

        else
        {
            printf("Il numero %d non è primo", a);
        }
       
}