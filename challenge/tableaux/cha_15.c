#include <stdio.h>
void main(){
    int taille_1,taille_2;
printf("Fusionner deux tableaux\n");
printf("veuiller saisir la taille du premier tableau  ");
scanf("%d",&taille_1);
printf("veuiller saisir la taille du deuxieme tableau  ");
scanf("%d",&taille_2);

if((taille_1 && taille_2)<=0){
    printf("veuiller saisir une taille superieur a 1  ");
    printf("taille tableau 1: ");
    scanf("%d",&taille_1);
    printf("taille tableau 2: ");
    scanf("%d",&taille_2);
};

int t1[taille_1];
for(int i=0;i<taille_1;i++){
    printf("veuiller entrer l'element %d du premier tableau ",i);
    scanf("%d",&t1[i]);
};
int t2[taille_2];
for(int i=0;i<taille_2;i++){
    printf("veuiller entrer l'element %d du deuxieme tableau ",i);
    scanf("%d",&t2[i]);
};
int taille_3=taille_1 + taille_2;
int t3[taille_3];

for(int i=0;i<taille_1;i++){
    t3[i]=t1[i];
};
for(int i=taille_1;i<taille_3;i++){
    t3[i]=t2[i-taille_1];
};
for(int i=0;i<taille_3;i++){
    printf(" %d",t3[i]);
};
}
