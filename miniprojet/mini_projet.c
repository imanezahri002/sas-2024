#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char titre[100];
    char auteur[100];
    int quantite;
    float prix;

}listlivre;

    listlivre list[100];
    int count=0;
void ajouter(){

printf("veuiller sasir le titre: ");
fflush(stdin);
gets(list[count].titre);

printf("veuiller sasir l'auteur: ");
fflush(stdin);
gets(list[count].auteur);

printf("veuiller sasir le prix: ");
scanf("%f",&list[count].prix);
printf("veuiller sasir la quantite: ");
scanf("%d",&list[count].quantite);
count++;
}
void afficher(){
 if (count == 0) {
        printf("Aucun livre dans la liste.\n");
        return;
    }
    printf("Livres disponibles:\n");
    for (int i = 0; i < count; i++) {
        printf("Titre: %s\nAuteur: %s\nPrix: %.2f\nQuantité: %d\n",
               list[i].titre, list[i].auteur, list[i].prix, list[i].quantite);
    }
    }
void maj(){
char titre_cherche[100];

printf("saisir le titre du livre que vous voulez modifier sa quantite: ");
fflush(stdin);
gets(titre_cherche);

for(int i=0;i<count;i++){
    if(strcmp(list[i].titre,titre_cherche)==0){
        printf("veuiller saisir la nouvelle valeur de quantite ");
        scanf("%d",&list[i].quantite);
        printf("la modification est faite par succes\n");
        return;
    }

}printf("il y a pas de livre avec ce titre \n");

}
void supprimer(){
char titre_cherche[100];

printf("saisir le titre du livre que vous voulez supprimer: ");
fflush(stdin);
gets(titre_cherche);
for(int i=0;i<count;i++){
    if(strcmp(list[i].titre,titre_cherche)==0){
       list[i]=list[i+1];
       printf("le livre a ete supprime par succes\n");
       return;
    }

}printf("il y a pas de livre avec ce titre \n");
};
void somme(){
    float somme_qte=0;
    printf("le nbr de livre est :%d\n",count);
    for(int i=0;i<count;i++){
        somme_qte=somme_qte+list[i].quantite;
    };
    printf("la somme des qte est :%.2f\n",somme_qte);

}


void main(){

    int choix;

    do{
        printf("-------***Gestion bibliotheque***------\n");
        printf("|1.ajouter un livre\n");
        printf("|2.afficher les livres dispo\n");
        printf("|3.MAJ du quantite\n");
        printf("|4.supprimer un livre\n");
        printf("|5.Afficher le Nombre Total de Livres en Stock\n");
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
        somme();
        break;
    case 6:
        printf("program exit \n");
        break;

    default: printf("Choix invalide.\n");
        };
    }while(choix!=6);

}
