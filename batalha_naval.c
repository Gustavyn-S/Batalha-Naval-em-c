#include <stdio.h>
#include <stdlib.h>

void MontagemDoTabuleiro(int n[10][10]){
    int i, j;
    //Montando o tabuleiro
    for ( i = 0; i < 10; i++) {
      for ( j = 0; j < 10; j++) {
        n[i][j] = 0; // Atribuindo valores à matriz
      }
    }
}

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
/*
void Habilidades(int tabu[10][10],int H1[3][5],int H2[3][5],int H3[3][5]){
    int i, j, k, l;
    //Posicionando as habilidades:
    //habilidade 1
    for ( i = 0, k = 0; i < 2, k = 2; i++, k++)
    {
        for ( j = 0, l = 0; j < 3, l = 3; j++, l++)
        {
            tabu[i][j] = 4;
        }
        
    }
    
}
*/
void MontandoCone(int n[3][5]){
    int i, j;
    for ( i = 0; i < 3; i++) {
      for ( j = 0; j < 5; j++) {
        if ( j == 2 || i == 2 || i == 1 && j > 0 && j < 4)
        {
            n[i][j] = 5;
        }else
        n[i][j] = 0; // Atribuindo valores à matriz
      }
    }
}

void MontandoCruz(int n[3][5]){
    int i, j;
    for ( i = 0; i < 3; i++) {
      for ( j = 0; j < 5; j++) {
        if (j == 2 || i == 1)
        {
            n[i][j] = 5;
        }else
        n[i][j] = 0; // Atribuindo valores à matriz
      }
    }
}

void MontandoLosango(int n[3][5]){
    int i, j;
    for ( i = 0; i < 3; i++) {
      for ( j = 0; j < 5; j++) {
        if (j == 2 || i == 1 && j > 0 && j < 4)
        {
            n[i][j] = 5;
        }else
        n[i][j] = 0; // Atribuindo valores à matriz
      }
    }
}

//testes

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
/*
void PrintCone(int n[3][5]){
    int i, j; 
   //printando o tabuleiro 
    for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 5; j++)
        {
            printf("%i ", n[i][j]);
        }
      printf("\n");
    }
}

void PrintCruz(int n[3][5]){
    int i, j; 
   //printando o tabuleiro 
    for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 5; j++)
        {
            printf("%i ", n[i][j]);
        }
      printf("\n");
    }
}

void PrintLosangulo(int n[3][5]){
    int i, j; 
   //printando o tabuleiro 
    for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 5; j++)
        {
            printf("%i ", n[i][j]);
        }
      printf("\n");
    }
}
*/

int main(){
    int tabuleiro[10][10], cone[3][5], cruz[3][5], octaedro[3][5];
    MontandoCone(cone);
    //PrintCone(cone);
    MontandoCruz(cruz);
    //PrintCruz(cruz);
    MontandoLosango(octaedro);
    //PrintLosangulo(octaedro);
    MontagemDoTabuleiro(tabuleiro);
    //Habilidades(tabuleiro, cone, cruz, octaedro);
    Navios(tabuleiro);
    PrintTabuleiro(tabuleiro);
    return 0;
}