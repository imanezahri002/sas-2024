#include <stdio.h>

void main(){
    int base,exposant,result=1,i;
    printf("veuiller saisir la base:");
    scanf("%d",&base);
    printf("veuiller saisir l'exposant:");
    scanf("%d",&exposant);


    for(i=0;i<exposant;i++){
        result = result * base;

    };
    printf("%d",result);

}
