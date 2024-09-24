#include<stdio.h>
void main(){
    float rayon,volume;
    const float pi=3.14;
printf("le volume d'une sphere\n");
printf("saisir le rayon du sphere\n" );
scanf("%f",&rayon);
volume=(4/3)*pi*pow(rayon,3);
printf("le volume est:%.2f",volume);
}
