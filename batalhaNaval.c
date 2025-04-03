#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHAS 10
#define COLUNAS 10

int main() {

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int tabuleiro[LINHAS][COLUNAS];
    char * letras[] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

    int agua = 0;
    int navio = 3;
    int index = 1;
    int i, j;

    //iniciando tabuleiro
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = agua;
        }
    }

    //posiciona navio na horizontal
    for (i = 1; i < 2; i++)
    {
        for (j = 3; j < 6; j++)
        {
            tabuleiro[i][j]= navio;
        }
    }

    //posiciona navio na vertical
    for (i = 2; i < 5; i++)
    {
        for (j = 2; j < 3; j++)
        {
            tabuleiro[i][j]= navio;
        } 
    }
    
    //posiciona navio na diagonal principal
    for (i = 5; i < 8; i++)
    {
        tabuleiro [i][i] = navio;
    }

    //posiciona navio na diagonal secundaria
    for (i = 1; i < 4; i++)
    {
        tabuleiro [i][9 - i] = navio;
    }  


    printf(" * TABULEIRO BATALHA NAVAL * \n"); 

    //Exibi as letras referente as Colunas
    for (i = 0; i < 10; i++)
    {
        printf(" %s", letras[i]);
    }
    printf("\n");    
 
    //Loop irá imprimir o índices das linhas e o tabuleiro.
    for (i = 0; i < LINHAS; i++)
    {
        printf ("%d  ", index++);
        for (j = 0; j < COLUNAS; j++)
        {  
            printf("%d ", tabuleiro[i][j]);   
        }
        printf("\n");
    } 
    
    
    return 0;
}
