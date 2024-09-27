#include <stdio.h>
void main(){
int nbr,min;
printf("veuiller saisir le nombre d'elements du tableau: ");
scanf("%d",&nbr);
if(nbr <= 0){
    printf("veuiller sasir un nombre superieur a 0 ");
    scanf("%d",&nbr);
}
int tab1[nbr];
for(int i=0;i<nbr;i++){
    printf("saisir l'element t[%d]  ",i);
    scanf("%d",&tab1[i]);
}
min=tab1[0];
for(int i=1 ; i<nbr ; i++){
    if(min > tab1[i]){
        min = tab1[i];
    }
}
printf("le minimum est : %d",min);
}
