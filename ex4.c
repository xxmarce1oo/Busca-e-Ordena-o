#include <stdio.h>

void inserirNumeroOrdenado(int vetor[], int *n, int numero) {
    // Encontra a posição correta para o novo número
    int i = *n - 1;

    // Desloca os elementos para a direita para abrir espaço para o novo número
    while (i >= 0 && vetor[i] > numero) {
        vetor[i + 1] = vetor[i];  // Desloca o elemento
        i--;
    }

    // Insere o número na posição correta
    vetor[i + 1] = numero;

    // Incrementa o tamanho do vetor
    (*n)++;
}

int main() {
    int n;

    // Solicita ao usuário o tamanho do vetor
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);

    int vetor[n + 1];  // Vetor com espaço para um elemento extra

    // Solicita ao usuário os valores para o vetor
    printf("Digite os elementos do vetor (ordenados):\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int numero;
    // Solicita o número extra a ser inserido
    printf("Digite o numero a ser inserido: ");
    scanf("%d", &numero);

    // Chama a função para inserir o número na posição correta
    inserirNumeroOrdenado(vetor, &n, numero);

    // Exibe o vetor após a inserção
    printf("Vetor apos a insercao do numero:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
