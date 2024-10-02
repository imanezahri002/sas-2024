#include <stdio.h>
#include <string.h>
char inverser(char mot){
char mot_inverser[50];
int taille=strlen(mot)-1;
for(int i=taille;i>=0;i--){
    mot_inverser[taille-i]=mot[i];
}
return mot_inverser;
}




void main(){
char chaine[50],affichage[50];
printf("veuiller saisir un mot:");
gets(chaine);
affichage=inverser(chaine);
puts(affichage);

}
