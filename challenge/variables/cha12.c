#include <stdio.h>
void main(){
int nombre;
int divisionMille, nouveauNbr1,divisionCent,nouveauNbr2,divisionDix,nouveauNbr3;
printf("saisir un nombre entier de 4 chiffre ");
scanf("%d",&nombre);
if(nombre>9999 || nombre<1000){
    printf("entrer un nombre qui se compose de 4 chiffre ");
}else
    divisionMille=nombre/1000;
    nouveauNbr1=nombre-(divisionMille*1000);
    divisionCent=nouveauNbr1/100;
    nouveauNbr2=nouveauNbr1-(divisionCent*100);
    divisionDix=nouveauNbr2/10;
    nouveauNbr3=nouveauNbr2%10;
    printf("%d%d%d%d",nouveauNbr3,divisionDix,divisionCent,divisionMille);

}
