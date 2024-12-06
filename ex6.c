#include <stdio.h>

void selectionSortTrocas(int arr[], int n, int trocas) {
    int i, j, minIndex, temp, trocaCount = 0;

    for (i = 0; i < n - 1 && trocaCount < trocas; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            trocaCount++;
        }
    }
}

int main() {
    int arr[] = {72, 12, 62, 69, 27, 67, 41, 56, 33, 74};
    int n = sizeof(arr) / sizeof(arr[0]);
    int trocas = 4;

    selectionSortTrocas(arr, n, trocas);

    printf("Array após %d trocas: ", trocas);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
