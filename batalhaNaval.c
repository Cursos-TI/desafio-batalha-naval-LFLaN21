#include <stdio.h>
#include <stdbool.h>

#define TAMANHO 10

int main() {
    // Tabuleiro 10x10 (0 = água, 1 = navio)
    int tabuleiro[TAMANHO][TAMANHO] = {0};
    
    // Navio 1 - horizontal (tamanho 4)
    int navio1_x = 2;
    int navio1_y = 3;
    int tamanho_navio1 = 3;
    
    // Navio 2 - vertical (tamanho 3)
    int navio2_x = 5;
    int navio2_y = 5;
    int tamanho_navio2 = 3;
    
    // Posicionar navio 1 (horizontal)
    for (int i = 0; i < tamanho_navio1; i++) {
        if (navio1_x + i < TAMANHO) {
            tabuleiro[navio1_y][navio1_x + i] = 1;
        }
    }
    
    // Posicionar navio 2 (vertical)
    for (int i = 0; i < tamanho_navio2; i++) {
        if (navio2_y + i < TAMANHO) {
            tabuleiro[navio2_y + i][navio2_x] = 1;
        }
    }
    
    // Imprimir tabuleiro
    printf("Tabuleiro de Batalha Naval 10x10:\n\n");
    printf("   ");
    for (int x = 0; x < TAMANHO; x++) {
        printf("%2d ", x);
    }
    printf("\n");
    
    for (int y = 0; y < TAMANHO; y++) {
        printf("%2d ", y);
        for (int x = 0; x < TAMANHO; x++) {
            if (tabuleiro[y][x] == 1) {
                printf(" 3 "); // 3 representa o navio
            } else {
                printf(" 0 "); // 0 representa água
            }
        }
        printf("\n");
    }
    
    return 0;
}