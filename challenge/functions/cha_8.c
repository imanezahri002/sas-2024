#include <stdio.h>
int parite(int a){
if(a%2==0){
    return 1;
}else return 0;
};




void main(){
int nbr,result;
printf("sasir un nombre : ");
scanf("%d",&nbr);
result=parite(nbr);
printf("%d",result);
}
