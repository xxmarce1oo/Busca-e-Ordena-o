#include <stdio.h>

void ordenarDecrescente(int vetor[], int n) {
    // Algoritmo de ordenacao (Bubble Sort) para ordem decrescente
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] < vetor[j + 1]) {
                // Troca de valores para ordem decrescente
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Solicita ao usuário o tamanho do vetor
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    // Solicita ao usuário os valores para o vetor
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Ordena o vetor de maneira decrescente
    ordenarDecrescente(vetor, n);

    // Exibe o vetor ordenado de maneira decrescente
    printf("Vetor ordenado de forma decrescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
