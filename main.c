#include <stdio.h>

#define MAX_L 100
#define MAX_C 100

int main() {
    int L, C, P;
    scanf("%d %d", &L, &C);
    scanf("%d", &P);

    int tabuleiro[MAX_L][MAX_C] = {0};

    
    for (int i = 0; i < P; i++) {
        int Xi, Yi;
        scanf("%d %d", &Xi, &Yi);
        tabuleiro[Xi - 1][Yi - 1] = 1;
    }

    
    int maxPecasBrancas = 0;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (tabuleiro[i][j] == 0) {
                
                maxPecasBrancas++;

               
                for (int x = i - 1; x <= i + 1; x++) {
                    for (int y = j - 1; y <= j + 1; y++) {
                        if (x >= 0 && x < L && y >= 0 && y < C) {
                            tabuleiro[x][y] = 1;
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", maxPecasBrancas);

    return 0;
}
