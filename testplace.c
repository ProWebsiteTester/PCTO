#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
        printf("Come ti chiami apprendista? \n");
        char nomeutente[50];
        scanf(" %[^\n]s", nomeutente);
        printf("Ok %s, ora iniziamo\n\n", nomeutente);

        printf("accanto a chi ti siedi?")
        scanf("%s", compagno);

        for (int i = 0; compagno[i]; i++) {
            compagno[i] = tolower(compagno[i]);
        }

        if (strcmp(compagno, "al vampiro") == 0)
        {
            printf("Sei morto");
        }
        
        else
        {
            printf("Ti siedi accanto %s", compagno);
            printf(" e scopri che si chiama %s, come te\n", nomeutente);  
        }
}