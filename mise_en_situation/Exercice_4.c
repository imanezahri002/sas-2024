#include <stdio.h>
void main(){
    float tableau[5],max,min;
printf("    tableau de temperature:\n   ");
for(int i=0;i<5;i++){
    printf("\nveuiller saisir l'element %d du tableau: ",i);
    scanf("%f",&tableau[i]);
};

min=tableau[0];
max=tableau[0];
for(int i=1 ; i<5 ; i++){
    if(max < tableau[i]){
        max = tableau[i];
    }else if(min > tableau[i]){
        min = tableau[i];
    };


};
printf("le maximum est:%.2f \n",max);
printf("le minimum est:%.2f \n",min);







}
