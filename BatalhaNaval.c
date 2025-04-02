#include <stdio.h>

int main() {
    printf("Jogo Batalha Naval\n\n");

    int matriz[10][10];

    // Inicialização da matriz com 0 representando a água 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = 0;
        }
    }

    // Preenchendo a matriz com 3 nas posições específicas representando os navios 
    matriz[1][6] = 3;  
    matriz[1][7] = 3;  
    matriz[1][8] = 3;  
    matriz[2][1] = 3;  
    matriz[3][1] = 3;  
    matriz[4][1] = 3;  
    matriz[4][5] = 3;  
    matriz[5][4] = 3;  
    matriz[6][3] = 3;  

    // Impressão da matriz com letras para as colunas
    printf("    ");  
    for (int j = 0; j < 10; j++) {
        printf("%c  ", 'A' + j);  
    }
    printf("\n");

    // Impressão das linhas com numeração
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i);  
        for (int j = 0; j < 10; j++) {
            printf("%d  ", matriz[i][j]);  
        }
        printf("\n");
    }

    return 0;
}
