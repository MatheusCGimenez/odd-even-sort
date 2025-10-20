#include <stdio.h>
#include <stdbool.h>

void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void oddEvenSort(int arr[], int n) {
    bool estaOrdenado = false;

    while (!estaOrdenado) {
        estaOrdenado = true;

        // compara e troca os elementos em posições ímpares (1-2, 3-4, 5-6, ...)
        for (int i = 1; i <= n - 2; i = i + 2) {
            if (arr[i] > arr[i + 1]) {
                trocar(&arr[i], &arr[i + 1]);
                estaOrdenado = false;
            }
        }

        // compara e troca os elementos em posições pares (0-1, 2-3, 4-5, ...)
        for (int i = 0; i <= n - 2; i = i + 2) { 
            if (arr[i] > arr[i + 1]) {
                trocar(&arr[i], &arr[i + 1]);
                estaOrdenado = false;
            }
        }
    }
}

void imprimirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numeros[] = { 34, 2, 10, -9, 23, 0, 1 };
    int tamanho = 7;

    printf("Fila bagunçada: ");
    imprimirArray(numeros, tamanho);

    oddEvenSort(numeros, tamanho);

    printf("Fila organizada:  ");
    imprimirArray(numeros, tamanho);

    return 0;
}
