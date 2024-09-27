#include <stdio.h>
void main (){
    int nombre,i,s=0;
printf("***suite de fibonnacci***\n");
printf("veuiller saisir un nombre:");
scanf("%d",&nombre);
if(nombre <= 0){
    printf("%d",nombre);
}
if(nombre == 1 ){
    printf("%d",nombre);
}
if(nombre>0){
    i=1;
    do{
        s=s+i;
        i++;
    }while(i<=nombre);
    };
    printf("%d",s);
}


