#include <stdio.h>
#include <math.h>
void main(){
    float a,b,c,delta,solution,s1,s2;
printf("pour resoudre equation ax^2+bx+c veuiller saisir:");
printf("a= ");
scanf("%d",&a);
printf("b= ");
scanf("%d",&b);
printf("c= ");
scanf("%d",&c);
delta=pow(b,2)-(4*a*c);
if (delta==0){
        solution= -b /(2*a);
    printf("la solution est : %d",solution);
}
if (delta>0){
    s1= (-b+sqrt(delta))/(2*a);
    s2=  (-b-sqrt(delta))/(2*a);
    printf("l'equation admet deux solutions:\n s1=%d\n s2=%d ",s1,s2);
}
else
    printf("l'equation n'a pas de solution");



}
