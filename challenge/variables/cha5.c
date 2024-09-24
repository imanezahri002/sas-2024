#include <stdio.h>
void main(){
    int temp;
printf("veuiller entrer la temperature en celesius :");
scanf("%d",&temp);
if(temp<0){
    printf("l'état de l'eau est solide");
}
if(temp>=0 && temp<100){
    printf("l'état de l'eau est liquide");
}
if(temp >= 100){
    printf("l'état de l'eau est gaz");
}
}
