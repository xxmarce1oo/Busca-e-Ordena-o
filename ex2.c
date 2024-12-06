#include <stdio.h>

int verificarOrdemCrescente(int vetor[], int n) {
    // Verifica se o vetor está em ordem crescente
    for (int i = 0; i < n - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            return 0; // Retorna 0 se o vetor não estiver em ordem crescente
        }
    }
    return 1; // Retorna 1 se o vetor estiver em ordem crescente
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

    // Verifica se o vetor está em ordem crescente
    if (verificarOrdemCrescente(vetor, n)) {
        printf("ORDENADO\n");
    } else {
        printf("NAO ORDENADO\n");
    }

    return 0;
}
