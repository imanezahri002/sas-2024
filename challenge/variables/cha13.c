#include <stdio.h>
void main(){
    int nombre=0,tab1[32] ,tab2[100], count = 0,cpt = 0;
printf("veuiller saisir un nombre entier:");
scanf("%d",&nombre);
    int nombrehexa=nombre;
    for(int i=0;nombre>0;i++)
    {
    tab1[i]= nombre%2;
             nombre=nombre/2;
             cpt++;
    };
    for( int i=cpt -1;i >= 0 ;i--){
            printf("%d",tab1[i]);
            };


    for(int j=0;nombrehexa>0;j++){
        tab2[j]= nombrehexa%16;
                 nombrehexa=nombrehexa/16;
                 count++;
    };
    for(int j=count-1;j>=0;j--){

        switch (tab2[j]){
            case 10: printf("A");
                    break;
            case 11: printf("B");
                    break;
            case 12: printf("C");
                    break;
            case 13: printf("D");
                    break;
            case 14: printf("E");
                    break;
            case 15: printf("F");
                    break;
            default:
                printf("%d",tab2[j]);

        }
    }



    }




