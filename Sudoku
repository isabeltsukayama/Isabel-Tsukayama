#include <stdio.h>
#include <stdbool.h>

#define N 9  

bool linha_valida(int matriz[N][N], int linha) {
    bool presente[N + 1] = {false};  

    for (int i = 0; i < N; i++) {
        int num = matriz[linha][i];
        if (presente[num]) return false;  
        presente[num] = true;
    }
    return true;
}


bool coluna_valida(int matriz[N][N], int coluna) {
    bool presente[N + 1] = {false};

    for (int i = 0; i < N; i++) {
        int num = matriz[i][coluna];
        if (presente[num]) return false;  
        presente[num] = true;
    }
    return true;
}


bool bloco_valido(int matriz[N][N], int inicio_linha, int inicio_coluna) {
    bool presente[N + 1] = {false};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int num = matriz[inicio_linha + i][inicio_coluna + j];
            if (presente[num]) return false;  
            presente[num] = true;
        }
    }
    return true;
}


bool sudoku_valido(int matriz[N][N]) {
   
    for (int i = 0; i < N; i++) {
        if (!linha_valida(matriz, i) || !coluna_valida(matriz, i)) {
            return false;
        }
    }

    
    for (int i = 0; i < N; i += 3) {
        for (int j = 0; j < N; j += 3) {
            if (!bloco_valido(matriz, i, j)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;  
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        int matriz[N][N];

        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        
        printf("Instancia %d\n", k);
        if (sudoku_valido(matriz)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");  
    }

    return 0;
}
