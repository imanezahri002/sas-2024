#include <stdio.h>
void main(){
    int nbr,reserve;
printf("Tableau en Ordre Croissant :\n");
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

for(int i=0;i<nbr-1;i++){
  for(int j=0;j<nbr-1;j++){
    if(tab1[j]>tab1[j+1]){
        reserve=tab1[j];
        tab1[j]=tab1[j+1];
        tab1[j+1]=reserve;

    }
    }
  }


for(int i=0;i<nbr;i++){
    printf("%d  ",tab1[i]);
}

}
