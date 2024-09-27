#include <stdio.h>
void main(){
    float tableau[5],max,min;
printf("tableau de temperature:\n");
for(int i=0;i<5;i++){
    printf("\nveuiller saisir l'element %d du tableau: ",i);
    scanf("%f",&tableau[i]);
};


max=tableau[0];
for(int i=0 ; i<5 ; i++){
    if(max < tableau[i+1]){
        max = tableau[i+1];
    }
};
printf("le maximum est:%.2f \n",max);





}
