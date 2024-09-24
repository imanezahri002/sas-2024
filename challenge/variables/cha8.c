#include <stdio.h>
#include <math.h>
void main(){
    double nbr_1,nbr_2,nbr_3,moyenne,produit;
    printf("**calcul de la moyenne geometrique**\n\n");
printf("veuiller entrer le premier nombre:");
scanf("%lf",&nbr_1);
printf("veuiller entrer le deuxieme nombre:");
scanf("%lf",&nbr_2);
printf("veuiller entrer le troisieme nombre:");
scanf("%lf",&nbr_3);
//(a * b * c)^(1/3)
produit=nbr_1*nbr_2*nbr_3;
moyenne=pow(produit,1.0/3.0);
printf("la moyenne geometrique est:%lf",moyenne);
}
