#include <stdio.h>
void main(){
int nbr_1,nbr_2,somme,triple;
printf("veuiller saisir premier nombre:");
scanf("%d",&nbr_1);
printf("veuiller saisir deuxieme nombre");
scanf("%d",&nbr_2);
if(nbr_1 != nbr_2){
    somme = (nbr_1 + nbr_2);
    triple=somme * 3;
    printf("%d",triple);
}
else{
somme = nbr_1+nbr_2;
printf("%d",somme);
}}



