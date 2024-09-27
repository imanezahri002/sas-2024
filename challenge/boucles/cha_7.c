#include <stdio.h>
void main(){
int number,modulo;
printf("saisir un nombre: ");
scanf("%d",&number);
while(number>0){
    modulo=number%10;
    printf("%d",modulo);
    number=number/10;

}
}
