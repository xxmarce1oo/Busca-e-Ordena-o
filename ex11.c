#include <stdio.h>
#include <string.h>

void selectionSort(char arr[][50], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (strlen(arr[j]) < strlen(arr[minIdx]))
                minIdx = j;
        }

        if (minIdx != i) {
            char temp[50];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[minIdx]);
            strcpy(arr[minIdx], temp);
        }
    }
}

int main() {
    char nomes[][50] = {"Joao", "Ana", "Francisco", "Beatriz"};
    int n = sizeof(nomes) / sizeof(nomes[0]);

    selectionSort(nomes, n);

    printf("Nomes ordenados por tamanho:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
