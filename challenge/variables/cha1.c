#include <stdio.h>
void main(){

    char nom[10] , prenom[10],adresse[20],sex[10];
    int age;

printf("veuiller entrer votre nom:");
scanf("%s",nom);
printf("veuiller entrer votre prenom:");
scanf("%s",prenom);
printf("veuiller entrer votre adresse:");
scanf("%s",adresse);
printf("veuiller entrer votre sex:");
scanf("%s",sex);
printf("veuiller entrer votre age:");
scanf("%d",&age);

printf("Nom:%s \n Prenom:%s \n adresse:%s \n sex:%s \n age:%d",nom,prenom,adresse,sex,age);

}

