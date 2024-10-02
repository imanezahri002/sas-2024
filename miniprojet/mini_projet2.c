#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
    char nom[100];
    char tel[100];
    char mail[100];


}contact;

int count=0;
contact conta[100];

void ajouter(){
    if(count<=100){
printf("veuiller saisir le nom: ");
fflush(stdin);
gets(conta[count].nom);

printf("veuiller saisir tel: ");
fflush(stdin);
gets(conta[count].tel);

printf("veuiller sasir le mail: ");
fflush(stdin);
gets(conta[count].mail);

count++;
}
else
    printf("vous avez le droit de saisir juste 100 contact\n");
}
void afficher(){

for(int i=0;i<count;i++){
    printf("Nom: %s\nTel: %s\nMail: %s\n",conta[i].nom,conta[i].tel,conta[i].mail);
};
}
void maj(){
char nom_cherche[100];
printf("saisir le nom que vous voulez modifier son tel et son mail: ");
fflush(stdin);
gets(nom_cherche);


for(int i=0;i<count;i++){
    if(strcmp(conta[i].nom,nom_cherche)==0){
            printf("saisir le nouveau tel: \n");
            fflush(stdin);
            gets(conta[i].tel);
            printf("saisir le nouveau mail: \n");
            fflush(stdin);
            gets(conta[i].mail);
            printf("mise a jour avec succes\n");
    };

}printf("\nil n'existe pas un contact avec ce nom \n");
}
void chercher(){
char nom_cherche[100];

printf("saisir le nom que vous cherchez: ");
fflush(stdin);
gets(nom_cherche);

for(int i=0;i<count;i++){
    if(strcmp(conta[i].nom,nom_cherche)==0){

        printf("voila son tel: %s\n",conta[i].tel);
        printf("voila son mail: %s\n",conta[i].mail);
    };
}
printf("il n'existe pas un contact avec ce nom ");
}
void supprimer(){
char nom_a_supprimer[100];

printf("saisir le nom que vous voulez supprimer: ");
fflush(stdin);
gets(nom_a_supprimer);
for(int i=0;i<count;i++){
    if(strcmp(conta[i].nom,nom_a_supprimer)==0){
            for(int j=i;j<count;j++){
        conta[j]=conta[j+1];
        };
        count--;
        printf("le contact a ete supprime avec succes\n");
        break;

    };printf("il n'existe pas un contact avec ce nom \n");
};

}
void main(){
    int choix;

    do{
        printf("-------***Gestion Contact***------\n");
        printf("|1.ajouter contact\n");
        printf("|2.afficher les contact\n");
        printf("|3.modifier un contact\n");
        printf("|4.supprimer un contact\n");
        printf("|5.chercher un contact\n");
        printf("|6.quitter programme\n");
        printf("veuiller sasir votre choix : ");
        scanf("%d",&choix);
        switch(choix){
    case 1:
        ajouter();
        break;
    case 2:
        afficher();
        break;
    case 3:
        maj();
        break;
    case 4:
        supprimer();
        break;
    case 5:
        chercher();
        break;
    case 6:
        printf("program exit \n");
        break;

    default: printf("Choix invalide.\n");
        };
    }while(choix!=6);
}

