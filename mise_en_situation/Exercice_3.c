#include <stdio.h>
void main(){
int nombre,i,modulo=0,cpt=0;
printf("verification du nombre premier \n");
printf("veuiller saisir un nombre:  ");
scanf("%d",&nombre);
if (nombre<=1){
    printf("il faut saisir un nombre superieur a 1: ");
    scanf("%d",&nombre);
}
for(i=2;i<nombre-1;i++){
    modulo=nombre%i;
    if(modulo==0){
        cpt++;
    }
    };
    if(cpt>0){
        printf("ce n'est pas un nombre premier");
    }
    if(cpt==0){
        printf("c'est un nombre premier");
    }
}
