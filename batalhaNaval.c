#include <stdio.h>
#include <stdlib.h>

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
    printf("O tabuleiro é 10x10, e você tem 10 chances de acertar o navio inimigo! \n");
    printf("O tabuleiro é representado por ~, e o navio por 3. \n");
    printf("Boa sorte! \n");

    tabuleiro[1][7] = '3';
    tabuleiro[1][8] = '3';
    tabuleiro[1][9] = '3';
    tabuleiro[2][2] = '3';
    tabuleiro[3][2] = '3';  
    tabuleiro[4][2] = '3';



    for(int i=0; i<1; i++){
        printf("  A B C D E F G H I J\n");
        for(int j=0; j<10; j++){
            printf("%d ", j);
            for(int k=0; k<10; k++){
                printf("%c ", tabuleiro[j][k]);
            }
            printf("\n");
        }
            }

    return 0;
}