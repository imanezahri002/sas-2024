#include <stdio.h>
int main(){
float celesius;
float kelvin;
printf("veuiller entrer la temperature en celesius:");
scanf("%f",&celesius);
kelvin=273.15+celesius;
printf("la temperature en kelvin est:%.2f ",kelvin);
return 0;
}
