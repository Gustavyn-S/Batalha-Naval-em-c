#include <stdio.h>
#include <stdlib.h>

void Navios(int n[10][10]){
    int i, j;
    //Posicionando os navios:
    //navio 1 horizontal
    for ( i = 0; i < 3; i++)
    {
        n[2][i]= 3;
    }
    //navio 2 Vertical
    for ( i = 5; i < 8; i++)
    {
        n[i][5]= 3;
    }

    //navio 3 Diagonal 1
    for ( i = 0, j = 9; i < 3, j > 6; i++, j--)
    {   //pontos de origem,ponto limite,baixo esquerda
        n[i][j]= 3;
    }

    //navio 4 Diagonal 2
    for ( i = 9, j = 2; i < 6, j >= 0; i--, j--)
    {
        n[i][j]= 3;
    }
}

void MontagemDoTabuleiro(int n[10][10]){
    int i, j;
    //Montando o tabuleiro
    for ( i = 0; i < 10; i++) {
      for ( j = 0; j < 10; j++) {
        n[i][j] = 0; // Atribuindo valores à matriz
      }
    }
}

void PrintTabuleiro(int n[10][10]){
  int i, j; 
   //printando o tabuleiro 
    for(i = 0; i < 10; i++)
    {
      for(j = 0; j < 10; j++)
        {
            printf("%i ", n[i][j]);
        }
      printf("\n");
    }
}

void Cone(int n[2][3]){
    int i, j;
    for (i = 0; i < 2; i++) {      // Loop externo para as linhas
        for (j = 0; j < 3; j++) {  // Loop interno para as colunas
            if (n[i][j] == 0) {
                n[i][j] = 5; 
            }
        }
    }
}

int main(){
    int tabuleiro[10][10], cone[2][3], cruz[4][3], octaedro[3][3];
    MontagemDoTabuleiro(tabuleiro);
    Navios(tabuleiro);
    Cone(cone);
    PrintTabuleiro(tabuleiro);
    return 0;
}