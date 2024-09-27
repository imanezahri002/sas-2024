#include <stdio.h>
void main(){
    float temperature;
printf("Variable et conditions:\n");
printf("veuiller saisir votre temperature:  ");
scanf("%f",&temperature);
if(temperature >= 38){
    printf("vous avez de la fievre");
}else printf("Votre temperature est nomale");

}
