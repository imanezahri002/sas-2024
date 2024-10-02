#include <stdio.h>
#include <string.h>

char inverser(char tab[]){
    char rverse[50];
    int taille;
taille=strlen(tab)-1;
for(int i=taille;i>=0;i--){
    rverse[taille-i]=tab[i];
};
return rverse;

}

void main(){

char mot[50];
printf("saisir un mot ");
scanf("%s",mot);
strcpy(mot,inverser(mot));
printf("%s",mot);


}
