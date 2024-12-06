#include <stdio.h>

int buscaBinaria(int vetor[], int n, int numero) {
    int inicio = 0;
    int fim = n - 1;
    
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2; // Calcula o meio do vetor
        
        // Verifica se o número está no meio
        if (vetor[meio] == numero) {
            return meio; // Retorna o índice se o número for encontrado
        }
        
        // Se o número é maior que o meio, ele está à direita
        if (vetor[meio] < numero) {
            inicio = meio + 1;
        }
        // Se o número é menor que o meio, ele está à esquerda
        else {
            fim = meio - 1;
        }
    }
    
    return -1; // Retorna -1 se o número não for encontrado
}

int main() {
    int n;

    // Solicita ao usuário o tamanho do vetor
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    // Solicita ao usuário os valores para o vetor
    printf("Digite os elementos do vetor (ordenados):\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int numero;
    // Solicita o número a ser procurado
    printf("Digite o numero a ser procurado: ");
    scanf("%d", &numero);

    // Chama a função de busca binária
    int resultado = buscaBinaria(vetor, n, numero);

    if (resultado != -1) {
        printf("Numero encontrado na posicao %d.\n", resultado);
    } else {
        printf("Numero nao encontrado.\n");
    }

    return 0;
}
