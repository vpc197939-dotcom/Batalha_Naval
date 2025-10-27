#include <stdio.h>

int main() {

    int tab [10] [10]; //Variável usada para representar a matriz que será usada de tabuleiro

    //As variáveis i e j representarão respectivamente: a linha e a coluna da matriz

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            tab [i] [j] = 0; // Preenchendo o tablueiro com os valores zeros 
            
        }

    }
    //Apresentando a posição do navio da vertical 
    int coluna_vertical = 5; //variável usada para indicar posição inicial do navio em j

    for(int i = 3; i < 8; i++)
    {
        tab [i] [coluna_vertical] = 3; //Declarando o número que será usado pra representar o navio
    }

    //Apresentando a posição do navio da horizontal
    int linha_horizontal = 6 ; //variável usada para indicar posição inicial do navio em i

    for(int j = 0; j < 4; j++)
    {
        tab [linha_horizontal] [j] = 3; //Declarando o número que será usado pra representar o navio
    }

    //Apresentando a posição do navio na diagonal
    int diagonal_1 = 0; //Variável_1 usada  para auxiliar no posicionamento do "navio" na horizontal
    for(int i = 0; i < 1;i++)
    {
        tab [i] [diagonal_1] = 3; //Declarando o número que será usado pra representar o navio
    }
    
    int diagonal1_2 = 1; //Variável_2 usada  para auxiliar no posicionamento do "navio" na horizontal
    for(int j = 1; j < 2;j++)
    {
        tab [diagonal1_2] [j] = 3; //Declarando o número que será usado pra representar o navio
    }
    int diagonal1_3 = 2; //Variável_3 usada  para auxiliar no posicionamento do "navio" na horizontal
    for(int j = 2; j < 3;j++)
    {
        tab [diagonal1_3] [j] = 3; //Declarando o número que será usado pra representar o navio
    }

     //Apresentando a posição do navio na diagonal
    int diagonal2_1 = 0; //Variável_1 usada  para auxiliar no posicionamento do "navio" na horizontal
    for(int i = 5; i < 6;i++)
    {
        tab [i] [diagonal2_1] = 3; //Declarando o número que será usado pra representar o navio
    }
    
    int diagonal2_2 = 4; //Variável_2 usada  para auxiliar no posicionamento do "navio" na horizontal
    for(int j = 1; j < 2;j++)
    {
        tab [diagonal2_2] [j] = 3; //Declarando o número que será usado pra representar o navio
    }
    
    int diagonal2_3 = 3; //Variável_3 usada  para auxiliar no posicionamento do "navio" na horizontal
    for(int j = 2; j < 3;j++)
    {
        tab [diagonal2_3] [j] = 3; //Declarando o número que será usado pra representar o navio
    }

     int diagonal2_4 = 2; //Variável_4 usada  para auxiliar no posicionamento do "navio" na horizontal
    for(int j = 3; j < 4;j++)
    {
        tab [diagonal2_4] [j] = 3; //Declarando o número que será usado pra representar o navio
    }

    //Apresentação do tabuleiro na saída do programa 
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d   ", tab [i] [j]); //Apresentando  o tabuleiro na saída do programa 
        }
        printf("\n"); //Linha pulada com o objetivo de manter a organização da matriz na saída do programa
        
    }

    return 0;
}