#include <stdio.h>

void insertionSortComContagem(int arr[], int n) {
    int i, j, key, copias = 0;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            copias++;
        }
        arr[j + 1] = key;
        copias++;
    }

    printf("Número total de cópias: %d\n", copias);
}

int main() {
    int arr[] = {72, 12, 62, 69, 27, 67, 41, 56, 33, 74};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSortComContagem(arr, n);

    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
