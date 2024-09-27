#include <stdio.h>
void main(){
int nombre,somme=0;

printf("veuiller saisir un nombre entier:");
scanf("%d",&nombre);
for(int i=1;i<=nombre;i++){
    somme +=  i;
}
printf("%d",somme);
}
