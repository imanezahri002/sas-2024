#include <stdio.h>
void main(){
    int taille,element,cpt=0;
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
printf("veuiller entrer l'element a chercher:  ");
scanf("%d",&element);
for(int i=0;i<taille;i++){
    if(t1[i]==element){
        cpt++;
    }
}
if(cpt>0){
    printf("l'element est present :)");
}else
    printf("l'element n'existe pas !!");


}
