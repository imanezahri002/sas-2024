#include <stdio.h>
void main(){
    int nbr,i;
printf("tables de multiplication:\n");
printf("saisir un nombre pour afficher sa table de multiplication: ");
scanf("%d",&nbr);
for (i=0;i<=10;i++){
    printf("%d * %d = %d\n",nbr,i,nbr*i);
}
}
