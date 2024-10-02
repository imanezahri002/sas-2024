#include <stdio.h>
void main(){
    int taille_1,element1;

printf("Suppression d'un element du tableaux\n");
printf("veuiller saisir la taille du premier tableau  ");
scanf("%d",&taille_1);


if(taille_1<=0){
    printf("veuiller saisir une taille superieur a 1  ");
    printf("taille tableau 1: ");
    scanf("%d",&taille_1);


};

int t1[taille_1];
for(int i=0;i<taille_1;i++){
    printf("veuiller entrer l'element %d du premier tableau ",i+1);
    scanf("%d",&t1[i]);
};

printf("veuiller saisir l'element a supprimer dans le premier tableau:  ");
scanf("%d",&element1);


printf("le premier tableau avant suppression:\n");

for(int i=0;i<taille_1;i++){
    printf(" %d ",t1[i]);
};

for(int i=0;i<taille_1;i++){
    if(t1[i]==element1){
        t1[i]=t1[i+1];
    };};

printf("\nle premier tableau apres suppression:  \n");

for(int i=0;i<taille_1-1;i++){
    printf(" %d ",t1[i]);
};






}
