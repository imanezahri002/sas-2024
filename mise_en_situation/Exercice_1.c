#include <stdio.h>
void main(){
    int base,hauteur,air,perimetre;
printf("calcul d'air et perimetre d'un triangle:\n");
printf("Entree:\n");

printf("Base:   ");
scanf("%d",&base);
printf("Hauteur:   ");
scanf("%d",&hauteur);
air=(base*hauteur)/2;
perimetre=3*base;
printf("Sortie:\n");
printf("Aire :  %d\n",air);
printf("Perimetre : %d",perimetre);

}
