#include <stdio.h>
#include <math.h>
void main(){
    int nbr_1,nbr_2,nbr_3 ,pui2,pui3,pui5;
printf("veuiller entrer first number:");
scanf("%d",&nbr_1);
printf("veuiller entrer second number:");
scanf("%d",&nbr_2);
printf("veuiller entrer third number:");
scanf("%d",&nbr_3);
pui2=pow(nbr_1,2);
pui3=pow(nbr_2,3);
pui5=pow(nbr_3,5);
printf("%d ^ 2 = %d\n%d ^ 3 = %d\n%d ^ 5=%d\n",nbr_1,pui2,nbr_2,pui3,nbr_3,pui5);

}
