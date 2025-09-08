#include <stdio.h>


int main (){

    int linha, coluna;
    char tabuleiro[10][10]= {
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
       
    };

    printf("Bem vindo ao jogo batalha naval! \n");
    printf("O tabuleiro é 10x10 \n");
    printf("O tabuleiro é representado por 0, e o navio por 3. \n");
    printf("Boa sorte! \n");

    tabuleiro[1][7] = '3';
    tabuleiro[1][8] = '3';
    tabuleiro[1][9] = '3';
    tabuleiro[2][1] = '3';
    tabuleiro[3][1] = '3';  
    tabuleiro[4][1] = '3';
    tabuleiro[9][0] = '3';
    tabuleiro[8][1] = '3';
    tabuleiro[7][2] = '3';
    tabuleiro[9][3] = '3';
    tabuleiro[8][4] = '3';
    tabuleiro[7][5] = '3';



    for(int i=0; i<1; i++){
        printf("  0 1 2 3 4 5 6 7 8 9\n");
        for(int i=0; i<10; i++){
            printf("%d ", i);
            for(int j=0; j<10; j++){
                printf("%c ", tabuleiro[i][j]);
            }
            printf("\n");
        }
            }

    return 0;
}