#include <stdio.h>

int main() {
    int n;
    printf("Digite o tamanho das matrizes: ", n);
    scanf("%d", &n);

    float matriz1[n][n], matriz2[n][n], res[n][n];

    //Recebe os valores das matrizes:
    printf ("Digite os valores da matriz 1: ");
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("linha %d coluna %d: ", i, j);
            scanf("%f", &matriz1[i][j]);
        }
    }
     printf ("Digite os valores da matriz 2: ");
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("linha %d coluna %d: ", i, j);
            scanf("%f", &matriz2[i][j]);
        }
    }
    printf("oioioioioi");

    //Printa as duas matrizes:
    printf("\n\nMatriz 1:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%f ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n\nMatriz 2:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%f ", matriz2[i][j]);
        }
        printf("\n");
    }


    //Cria variavel para ajudar no calculo de cada elemento:
    int soma = 0;

    //Calculo da  multiplicacao:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                soma = soma + matriz1[i][k]*matriz2[k][j]; 
            }
            res[i][j] = soma;
            soma = 0;
        }
    }

    //Printa a matriz resultado:
    printf("\n\nMatriz res:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%f ", res[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}