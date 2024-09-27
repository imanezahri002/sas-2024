#include <stdio.h>
void main (){
    int nbr,somme=0,i;
printf("Calcul de la Somme des N Entiers : \n");
printf("saisir un nombre : ");
scanf("%d",&nbr);
for(i=1;i<=nbr;i++){
somme=somme+i;};
printf("%d",somme);
}
