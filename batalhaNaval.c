#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // 0 = água
    
    // Navio horizontal (3 posições)
    tabuleiro[2][3] = 3;  // Linha 3, Coluna D
    tabuleiro[2][4] = 3;  // Linha 3, Coluna E
    tabuleiro[2][5] = 3;  // Linha 3, Coluna F
    
    // Navio vertical (4 posições)
    tabuleiro[5][7] = 3;  // Linha 6, Coluna H
    tabuleiro[6][7] = 3;  // Linha 7, Coluna H
    tabuleiro[7][7] = 3;  // Linha 8, Coluna H
    tabuleiro[8][7] = 3;  // Linha 9, Coluna H
    
    printf("BATALHA NAVAL\n");
    
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