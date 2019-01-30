/*Le operazioni con i numeri complessi tranne la divisione
Usiamo i numeri complessi in elettronica per lavorare con 
le grandezze sinusoidali usando dei semplici numeri (come se fossimo in regime costante) */ 
#include <stdio.h>

int main () 
{
    int a1, b1, a2, b2, somma_reale, somma_immaginaria, prodotto_reale1, prodotto_misto1, prodotto_misto2, prodotto_immaginario, denominatore, prodotto_misto3, prodotto_reale2;
    
    printf ("inserisci la parte reale della prima espressione \n"); 
    scanf ("%d",&a1);

    printf ("inserisci la parte immaginaria della prima espressione \n");
    scanf ("%d",&a2);

    printf ("inserisci la parte reale della seconda espressione \n");
    scanf ("%d",&b1);

    printf ("inserisci la parte immaginaria della seconda espressione \n");
    scanf ("%d",&b2);

    somma_reale = a1 + b1;
    somma_immaginaria = a2 + b2;
    prodotto_reale1 = a1 * b1;
    prodotto_misto1 = a1 * b2;
    prodotto_misto2 = a2 * b1;
    prodotto_immaginario = -(a2 * b2);  /*Associamo alla parte immaginaria il valore al quadrato come -1 
				     -1 è l'elemento commutatore della moltiplicazione, 
				     modifica i valori da positivi a negativi e viceversa*/ 
    prodotto_misto3 = prodotto_misto1 + prodotto_misto2;     
    prodotto_reale2 = prodotto_immaginario + prodotto_reale1;
    denominatore = a2 * a2 + b2 * b2;

    printf ("la somma tra i numeri e' %d + j%d\n", somma_reale, somma_immaginaria); 
    /*In Elettronica indichiamo la parte immaginaria con la j in quanto la i indica l'intensità di corrente*/
    
    printf ("la differenza tra i numeri e' %d - j%d\n", somma_reale, somma_immaginaria); 

    printf ("il prodotto tra i numeri e' %d j%d\n", prodotto_reale2, prodotto_misto3);

    printf ("il quoziente tra i numeri e' %d /%d j%d /%d", prodotto_reale2, denominatore, prodotto_misto3, denominatore);

    return 0;

}