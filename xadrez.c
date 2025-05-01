#include <stdio.h>

void torre(int n){


    if (n > 0){ 
        
        printf("direita\n");
        torre(n-1);
    };

};

void bispo(int n){


    if (n > 0){ 
        
        printf("cima, direita\n");
        bispo(n-1);
    };

};

void rainha(int n){


    if (n > 0){ 
        
        printf("esquerda\n");
        rainha(n-1);
    };

};
int main(){
    int i,j=0;
    


    printf("movimento da torre\n\n");

    torre(5);


    printf("\n\nmovimento do bispo \n\n");


   bispo(5);

    printf("\n\nmovimento da rainha \n\n");

    
    rainha(8);
    

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
