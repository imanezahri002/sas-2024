#include <stdio.h>
void main(){
    int taille;
printf("veuiller saisir la taille du tableau  ");
scanf("%d",&taille);
if(taille<=0){
    printf("veuiller saisir une taille superieur a 1  ");
    scanf("%d",&taille);
}
int t1[taille],t2[taille];
for(int i=0;i<taille;i++){
    printf("veuiller entrer l'element %d du tableau  ",i);
    scanf("%d",&t1[i]);
};

for(int i=0;i<taille;i++){

    t2[taille-i]=t1[i];
};
for(int i=0;i<=taille;i++){
    printf("    %d",t2[i]);
}




}
