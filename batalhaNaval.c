#include <stdio.h>

int main () {


    

    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};

 
      for (int i = 9; i < 10; i++){

         for (int j = 0; j < 3; j++) {
        tabuleiro[i][j] = 3;  

      }

    }

        for (int j = 0; j < 1; j++){

         for (int i = 5; i < 8; i++) {
        tabuleiro[i][j] = 3;  

      }

    }

        for (int i, j = 3 ; i == j && i, j < 6; i++, j++){

        
        tabuleiro[i][j] = 3;  

      

    }

    
        for (int i = 0; i < 10; i++) {
   
            for (int j = 0; j < 10; j++) {
        
                if (i + j == 9 && i < 3) {
           
                    tabuleiro[i][j] = 3;
        }
    }
}

for (int i = 0; i < 10; i++) {
   
            for (int j = 0; j < 10; j++) {
        
                if ((i == 5) && (j >= 4 && j <= 6)) {
           
                    tabuleiro[i][j] = 4;
        }

            if ((j == 5) && (i >= 4 && i <= 6)) {

                tabuleiro[i][j] = 4;
            }
    }
}

for (int i = 0; i < 10; i++) {
   
            for (int j = 0; j < 10; j++) {
        
                if ((i == 8) && (j >= 3 && j <= 7)) {
           
                    tabuleiro[i][j] = 5;
        }

            if ((j == 5) && (i >= 7 && i <= 9)) {

                tabuleiro[i][j] = 5;
            }
    }
}

for (int i = 0; i < 10; i++) {
   
            for (int j = 0; j < 10; j++) {
        
                if ((i == 4) && (j >= 0 && j <= 4)) {
           
                    tabuleiro[i][j] = 6;
        }

                if ((i == 3) && (j >= 1 && j <= 3)) {

                tabuleiro[i][j] = 6;
            }

            
                if ((i == 2) && (j == 2)) {

                tabuleiro[i][j] = 6;
            }

                
    }
}






    printf("Tabuleiro Batalha Naval\n  ");

    for (int j = 0; j < 10; j++)
        printf(" %c", colunas[j]);

    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d", i + 1);
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    


    
    return 0;

}

