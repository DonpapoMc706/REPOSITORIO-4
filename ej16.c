#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("ingrese la cantidad que quiere guardar: ");
    scanf("%d", &n);
    int *arreglo = (int *)malloc(n * sizeof(int));
    printf("ingresa %d numeros enteros:\n", n);
    for (int i = 0; i < n; i++) {
    scanf("%d", &arreglo[i]);
    }
    printf("Los numeros ingresados son: ");
    for (int j = 0; j < n; j++) {
    printf("%d ", arreglo[j]);
    }
    printf("\n");
    free(arreglo);
    return 0;
}