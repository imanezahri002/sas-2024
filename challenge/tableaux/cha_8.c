#include <stdio.h>
void main(){
printf("Copie d'un Tableau  :");
printf("saisir le nombre des elements du tableau:   ");
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


}
