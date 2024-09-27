#include <stdio.h>
void main(){
    int number,cpt=0;
printf("***compteur de chiffres:***\n");
printf("veuiller saisir un nombre: ");
scanf("%d",&number);
while(number > 0){
    number=number/10;
    cpt++;
};
printf("%d",cpt);

}
