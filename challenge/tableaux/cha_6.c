#include <stdio.h>
void main(){
    int nbr , factoriel;
printf("multiplication des elements :\n");
printf("saisir le nombre des elements du tableau:   ");
scanf("%d",&nbr);
if(nbr <= 0){
    printf("veuiller sasir un nombre superieur a 0 ");
    scanf("%d",&nbr);
}
int tab1[nbr];
printf("veuiller saisir le facteur :");
scanf("%d",&factoriel);
for(int i=0;i<nbr;i++){
    printf("saisir l'element t[%d]  ",i);
    scanf("%d",&tab1[i]);
}
for(int i=0;i<nbr;i++){
   tab1[i]=tab1[i] * factoriel;
   printf("%d   ",tab1[i]);
}
}
