#include <stdio.h>


int main()
{
    int a , b;

    printf ("Determina a \n"); //chiede all'utente un valore
    scanf("%d",&a); //lo determina

    printf ("Determina b \n"); //chiede all'utente un valore
    scanf("%d",&b); //lo determina

    if (a>b)
    {
        printf("\na é maggiore di b \n");
    }
     
    else if (a == b)
    {
        printf("\na é uguale a b \n");  
    }
    
    else
    {
        printf("\na é miore di b \n");
    }
}