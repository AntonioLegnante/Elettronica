/*L'Hertz è l'unità di misura della frequenza. In Elettronica lavoreremo spesso con quest'unità, con i suoi multipli e sottomultipli. 
L'algoritmo si adatta ad ogni grandezza fisica (metro,litro ecc...) */
#include <stdio.h>
#include <math.h>
#define capienza 100
int main () {
int numero,conversione,potenza;
char grandezza[capienza];
printf ("inserisci l'unità di misura di partenza \t");
scanf ("%s",&grandezza);
printf ("inserisci il valore in hertz \t ");
scanf ("%d",&numero);
if (grandezza[0]== 'G') {
	potenza=pow(10,9);
	conversione= numero*potenza;
}
else if (grandezza[0]== 'M') {
	potenza= pow (10,6);
	conversione= numero*potenza;
}
else if (grandezza[0]=='K') {
	potenza= pow (10,3);
	conversione= numero*potenza;
}
else if (grandezza[0]=='E') {
	potenza= pow (10,2);
	conversione= numero*potenza;
}
else if (grandezza[0]=='D' ) {
	potenza= pow (10,1);
	conversione= numero*potenza;
}
else if (grandezza[0]=='d') {
	potenza= pow (10,-3);
	conversione= numero*potenza;
}
else if (grandezza[0]=='c') {
	potenza= pow (10,-2);
	conversione= numero*potenza;
}
else if (grandezza[0]== 'm') {
	potenza= pow (10,-1);
	conversione= numero*potenza;
}
else if (grandezza[0]=='u') {
	potenza= pow (10,-3);
	conversione= numero*potenza;
}
else if (grandezza[0]=='n') {
	potenza= pow (10,-6);
	conversione= numero*potenza;
} 
printf ("la conversione in %s e' %d",grandezza,conversione);
return 0;
}
  
  
  
  
  
  
  
  
  