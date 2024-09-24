#include <stdio.h>
#include <math.h>
void main(){
    float x1,y1,x2,y2,z1,z2,pow1,pow2,pow3;
    printf("les coordonnes du premier points:\n");
printf("saisir x du premier point ");
scanf("%f",&x1);
printf("saisir y du premier point ");
scanf("%f",&y1);
printf("saisir z du premier point ");
scanf("%f",&z1);
printf("les coordonnees du deuxieme points :\n");
printf("saisir x du deuxieme point ");
scanf("%f",&x2);
printf("saisir y du deuxieme point ");
scanf("%f",&y2);
printf("saisir z du deuxieme point ");
scanf("%f",&z2);
//√((x2-x1)² + (y2-y1)² + (z2-z1)²)
pow1=pow(x2-x1,2);
pow2=pow(y2-y1,2);
pow3=pow(z2-z1,2);
printf("la distance est:%.2f",sqrt(pow1+pow2+pow3));

}
