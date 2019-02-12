/* risoluzione dei circuiti */

#include <stdio.h>


int main ()
{
    int frequenza, reattanza, induttanza, capacita, resistenza, immaginaria, w, xl, xc, ris;
    
    printf("inserisci la frequenza \n");
    scanf("%d", &frequenza);

    printf("inserisci la resistenza \n");
    scanf("%d", &resistenza);

    printf("inserisci induttanza \n");
    scanf("%d", &induttanza);

    printf("inserisci la capacità \n");
    scanf("%d", &capacita);

    w = 3,14 * 2 * frequenza;

    xl = w * induttanza;
    
    xc = 1 / (w * capacita);

    immaginaria = xl - xc;
    
    immaginaria*= immaginaria;
    resistenza*= resistenza;
    
    reattanza = immaginaria + resistenza;

    ris = reattanza * 0,5;
    printf("l'impedenza e' %d", ris);

    return 0;

}
    

