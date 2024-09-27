#include <stdio.h>
void main(){
int annee,mois,jours,heures,minutes,secondes,choix;
printf("veuiller saisir une annee ");
scanf("%d",&annee);

printf("**Menu**\n 1-mois\n 2-jours\n 3-heures\n 4-minutes\n 5-secondes\n");
printf("veuiller saisir ce que vous voulez savoir d'apres le menu : ");
scanf("%d",&choix);
mois=(2023-annee)*12+9;
jours=mois*30;
heures=jours*24;
minutes=heures*60;
secondes=minutes*60;
switch(choix){
    case 1: printf("le nbr de mois est:%d",mois);
            break;
    case 2: printf("le nbr de jours est:%d",jours);
            break;
    case 3: printf("le nbr d'heures est:%d",heures);
            break;
    case 4: printf("le nbr de minutes est:%d",minutes);
            break;
    case 5: printf("le nbr de secondes est:%d",secondes);
            break;
    default : printf("choisir le numero d'apres la liste");

}


}
