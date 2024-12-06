#include <stdio.h>

void ordenarPrecos(float precos[], int n) {
    // Algoritmo de ordenacao (Bubble Sort)
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (precos[j] > precos[j+1]) {
                // Troca de valores
                float temp = precos[j];
                precos[j] = precos[j+1];
                precos[j+1] = temp;
            }
        }
    }
}

float encontrarMenorValor(float precos[], int n) {
    // Funcao para encontrar o menor valor
    float menor = precos[0];
    for (int i = 1; i < n; i++) {
        if (precos[i] < menor) {
            menor = precos[i];
        }
    }
    return menor;
}

int main() {
    // Lista de precos dos produtos
    float precos[] = {50.0, 30.0, 20.0, 100.0, 80.0};
    int n = sizeof(precos) / sizeof(precos[0]);

    // Ordenacao dos precos
    ordenarPrecos(precos, n);

    printf("Lista de precos ordenados: \n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", precos[i]);
    }
    printf("\n");

    // Encontrar o menor valor
    float menor = encontrarMenorValor(precos, n);
    printf("O menor preco e: %.2f\n", menor);

    return 0;
}
