#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // 0 = água
    
    // Navio horizontal 
    tabuleiro[1][1] = 3;  // Linha 2, Coluna B
    tabuleiro[1][2] = 3;  // Linha 2, Coluna C
    tabuleiro[1][3] = 3;  // Linha 2, Coluna D
    
    // Navio vertical 
    tabuleiro[3][8] = 3;  // Linha 4, Coluna I
    tabuleiro[4][8] = 3;  // Linha 5, Coluna I
    tabuleiro[5][8] = 3;  // Linha 6, Coluna I
    tabuleiro[6][8] = 3;  // Linha 7, Coluna I
    
    // Navio diagonal 1 
    tabuleiro[7][1] = 3;  // Linha 8, Coluna B
    tabuleiro[8][2] = 3;  // Linha 9, Coluna C
    tabuleiro[9][3] = 3;  // Linha 10, Coluna D
    
    // Navio diagonal 2 
    tabuleiro[3][4] = 3;  // Linha 4, Coluna E
    tabuleiro[4][3] = 3;  // Linha 5, Coluna D
    tabuleiro[5][2] = 3;  // Linha 6, Coluna C
    tabuleiro[6][1] = 3;  // Linha 7, Coluna B
    
    // Imprime o tabuleiro
    printf("   A B C D E F G H I J\n");
    
    for(int i = 0; i < 10; i++) {
        printf("%2d ", i+1);
        
        for(int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}