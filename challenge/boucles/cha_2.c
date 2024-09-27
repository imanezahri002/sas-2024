#include <stdio.h>
void main(){
int nombre,facto=1;

printf("veuiller saisir un nombre entier:");
scanf("%d",&nombre);
for(int i=1;i<=nombre;i++){
    facto *=  i;
}
printf("%d",facto);
}
