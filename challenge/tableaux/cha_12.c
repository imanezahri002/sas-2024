#include <stdio.h>
void main(){
    int taille;
printf("***Afficher les Éléments Paire***\n");
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
for(int i=0;i<taille;i++){
    if((t1[i]%2)==0){
        printf(" %d",t1[i]);
    };
};


}
