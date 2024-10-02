#include <stdio.h>
void main(){
    int taille,element,nvaleur;
printf("veuiller saisir la taille du tableau  ");
scanf("%d",&taille);
if(taille<=0){
    printf("veuiller saisir une taille superieur a 1  ");
    scanf("%d",&taille);
}
int t1[taille];
for(int i=0;i<taille;i++){
    printf("veuiller entrer l'element %d du tableau  ",i);
    scanf("%d",&t1[i]);
};
printf("veuiller entrer l'element a remplacer:  ");
scanf("%d",&element);
printf("veuiller entrer la nouvelle valeur:  ");
scanf("%d",&nvaleur);
for(int i=0;i<taille;i++){
if(t1[i]==element){
    t1[i]=nvaleur;
};
};
for(int i=0;i<taille;i++){
    printf(" %d",t1[i]);
};
}
