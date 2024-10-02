#include <stdio.h>

void somme(int a,int b){
    int somme=a+b;
    printf("%d",somme);
};
int main(){
int nbr1,nbr2;
printf("    ***Fonctions de sommes***   \n");
printf("veuiller saisir Nb1:  ");
scanf("%d",&nbr1);
printf("veuiller saisir Nb2:  ");
scanf("%d",&nbr2);
    somme(nbr1,nbr2);
return 0;
}
