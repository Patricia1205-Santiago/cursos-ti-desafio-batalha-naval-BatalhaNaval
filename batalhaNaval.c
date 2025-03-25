#include <stdio.h>

#define N 5

void exibirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void habilidadeCone(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = 0;
        }
    }

    matriz[2][2] = 1;
    matriz[1][2] = 1;
    matriz[2][1] = 1;
    matriz[2][3] = 1;
    matriz[3][2] = 1;
    matriz[2][0] = 1;
    matriz[2][4] = 1;
    matriz[1][1] = 1;
    matriz[1][3] = 1;
}

void habilidadeCruz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        matriz[2][i] = 1;
        matriz[i][2] = 1;
    }
}

void habilidadeOctaedro(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = 0;
        }
    }

    matriz[2][2] = 1;
    matriz[1][2] = 1;
    matriz[3][2] = 1;
    matriz[2][1] = 1;
    matriz[2][3] = 1;
}

int main() {
    int tabuleiro[N][N];

    printf("Habilidade em Cone:\n");
    habilidadeCone(tabuleiro);
    exibirMatriz(tabuleiro);
    printf("\n");

    printf("Habilidade em Cruz:\n");
    habilidadeCruz(tabuleiro);
    exibirMatriz(tabuleiro);
    printf("\n");

    printf("Habilidade em Octaedro:\n");
    habilidadeOctaedro(tabuleiro);
    exibirMatriz(tabuleiro);
    printf("\n");

    return 0;
}
