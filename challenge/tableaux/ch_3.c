#include <stdio.h>
void main(){
int nbr,somme=0;
printf("veuiller saisir le nombre d'elements du tableau: ");
scanf("%d",&nbr);
if(nbr <= 0){
    printf("veuiller saisir un nombre superieur a 0 ");
    scanf("%d",&nbr);
}
int tab1[nbr];
for(int i=0;i<nbr;i++){
    printf("saisir l'element t[%d]  ",i);
    scanf("%d",&tab1[i]);
}
for(int i=0;i<nbr;i++){
    somme=somme+tab1[i];
}
printf("la somme est : %d",somme);
}
