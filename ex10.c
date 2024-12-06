#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[] = "algoritmo";
    int n = strlen(str);

    bubbleSort(str, n);

    printf("String ordenada: %s\n", str);

    return 0;
}
