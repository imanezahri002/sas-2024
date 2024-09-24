#include <stdio.h>
void main(){
    float kmH, mS;
printf("veuiller entrer la distance en kilomètres par heure (km/h):");
scanf ("%f",&kmH);
mS=kmH * 0.27778;
printf("la distance en metre par seconde (m/s):%.2f",mS);
}
