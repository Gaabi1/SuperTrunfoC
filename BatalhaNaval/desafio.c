#include <stdio.h>

int main(){

    char linha [10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    int matriz [10][10];

    // Inicializa toda a matriz com 0
    for (int i = 0; i<10; i++) {
        for (int j= 0; j<10; j++){
            matriz[i][j]= 0;
        }
    }

    // Altera valores específicos na linha 2 (índice 2), colunas 2, 3 e 4
    matriz[2][2] = 3;
    matriz[2][3] = 3;
    matriz[2][4] = 3;

    printf("   ");
    for ( int g=0 ; g<10; g++){
        printf(" %c",linha[g]);

    }
    printf("\n");

    for (int i= 1; i<11; i++){
        printf("%2d", i);  // Índice da linha (1 a 10)
        for(int j= 0; j<10; j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}