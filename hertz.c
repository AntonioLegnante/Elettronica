/*L'Hertz è l'unità di misura della frequenza. In Elettronica lavoreremo spesso con quest'unità, con i suoi multipli e sottomultipli. 
L'algoritmo si adatta ad ogni grandezza fisica (metro,litro ecc...) */
#include <stdio.h>
#include <math.h>
#define capienza 100
int main () {
int numero,conversione,potenza;
char grandezza[capienza];
printf ("inserisci l'unità di misura di partenza");
scanf ("%s",&grandezza);
printf ("inserisci il valore");
scanf ("%d",&numero);
if (grandezza[0]=='g' || grandezza [0] == 'G') {
	potenza=pow(10,9);
	conversione= numero*potenza;
}
else if (grandezza[0]=='m' || grandezza[0]== 'M') {
	potenza= pow (10,6);
	conversione= numero*potenza;
}
else if (grandezza[0]=='k' || grandezza[0]=='K') {
	potenza= pow (10,3);
	conversione= numero*potenza;
}
else if (grandezza[0]=='e' || grandezza[0]=='E') {
	potenza= pow (10,2);
	conversione= numero*potenza;
}
else if (grandezza[0]=='d' || grandezza[0]=='D' ) {
	potenza= pow (10,1);
	conversione= numero*potenza;
}
else if (grandezza[0]=='d' || grandezza[0]== 'D') {
	potenza= pow (10,-3);
	conversione= numero*potenza;
}
else if (grandezza[0]=='c' || grandezza[0]=='C') {
	potenza= pow (10,-2);
	conversione= numero*potenza;
}
else if (grandezza[0]=='m' || grandezza[0]== 'M') {
	potenza= pow (10,-1);
	conversione= numero*potenza;
}
else if (grandezza[0]=='u' || grandezza[0]=='M' || grandezza[0]=='m') {
	if (grandezza[1]=='i' || grandezza[1]=='I') {
	potenza= pow (10,-3);
	conversione= numero*potenza;
}
 }
else if (grandezza[0]=='n' || grandezza[0]=='N') {
	potenza= pow (10,-6);
	conversione= numero*potenza;
} 
printf ("la conversione in %s",grandezza);
printf (" e' %d", conversione);
return 0;
}
  
  
  
  
  
  
  
  
  