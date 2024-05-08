#include <stdio.h>

int main()
{
    printf("Come ti chiami? \n");
    char nomeutente[50];
    int i=0;
    scanf("%[^\n]s", nomeutente);
    printf("Ti chiami %s", nomeutente);
}