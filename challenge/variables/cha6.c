#include <stdio.h>
void main(){
    double a,b;

printf("veuiller entrer le premier nombre: ");
scanf("%lf",&a);
printf("veuiller entrer le deuxieme nombre: ");
scanf("%lf",&b);
printf("somme:%.2f\n soustraction:%.2f\n multiplication:%.2f\n",a+b,a-b,a*b);

if(b==0){
    printf("il faut que le deuxieme nombre sera different de 0 pour faire la devision");
}
else {
        printf("division:%.2f",a/b);}



}
