#include <stdio.h>

#define TAM 10
#define NAVIOS 4

char cabecalho [10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
int matriz [TAM][TAM];

// Estrutura para armazenar um navio
typedef struct {
    int x; //coluna
    int y; //linha
    int tamanho;
    char direcao; // 'H', 'V' ou 'D' (diagonal)
}Navio;

// Verifica se a posição é válida e não sobrepõe
int pode_posicionar (Navio n){
    for (int i =0; i< n.tamanho; i++){
        int linha= n.y;
        int coluna= n.x;
        if (n.direcao== 'H') coluna += i;
        else if (n.direcao == 'V') linha += i;
        else if (n.direcao == 'D'){
            linha += i;
            coluna += i;
        }

        // Verifica limites
        if (linha >= TAM || coluna >= TAM)
            return 0;

        // Verifica sobreposição
        if (matriz[linha][coluna] != 0)
            return 0;
    }
        return 1;
}

// Posiciona o navio no tabuleiro
void posicionar_navio(Navio n) {
    for (int i = 0; i < n.tamanho; i++) {
        int linha = n.y;
        int coluna = n.x;

        if (n.direcao == 'H') coluna += i;
        else if (n.direcao == 'V') linha += i;
        else if (n.direcao == 'D') {
            linha += i;
            coluna += i;
        }

        matriz[linha][coluna] = 3;
    }
}

void imprimir_tabuleiro(){
    printf("  ");
    for ( int g=0 ; g<10; g++){
        printf(" %c",cabecalho[g]);

    }
    printf("\n");

    for (int i= 0; i<10; i++){
        printf("%2d", i);  // Índice da linha (1 a 10)
        for(int j= 0; j<10; j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }

}
int main() {
    // Inicializa tabuleiro com 0
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            matriz[i][j] = 0;

    Navio navios[NAVIOS] = {
        {0, 0, 4, 'H'}, // horizontal
        {2, 2, 3, 'V'}, // vertical
        {4, 4, 3, 'D'}, // diagonal
        {7, 1, 2, 'D'}  // diagonal
    };

    for (int i = 0; i < NAVIOS; i++) {
        if (pode_posicionar(navios[i])) {
            posicionar_navio(navios[i]);
        } else {
            printf("Erro: navio %d comeca em (%d,%d) e não pode ser posicionado.\n", i + 1, navios[i].x, navios[i].y);
        }
    }

    imprimir_tabuleiro();

    return 0;
}