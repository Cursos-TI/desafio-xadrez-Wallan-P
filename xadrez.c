#include <stdio.h>

int main(){
    int i,j=0;
    


    printf("movimento da torre\n\n");

    for (int i = 0; i < 5; i++){

        printf("direita\n");
    };



    printf("\n\nmovimento do bispo \n\n");


    while ( i < 5){

        printf("cima direita\n");
        i++;
    }
    


    printf("\n\nmovimento da rainha \n\n");

    do
    {
        printf("esquerda\n");
        j++;

    } while (j<8);
    
    

    printf("\n\nmovimento do cavalo \n\n");


    for (int i=0,j = 0; i < 1; i++){

        while ( j < 2){

            printf("baixo\n");
            j++;
        }
        printf("esquerda\n");
    };



return 0;
}
