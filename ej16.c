#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("ingrese la cantidad que quiere guardar: ");
    scanf("%d", &n);
    int *arreglo = (int *)malloc(n * sizeof(int));
    printf ("ingresa %d numeros enteros: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
        for (int j = 0; j <= i; j++) {
            printf("%d ", arreglo[j]);
        }
    }
    free(arreglo);
    return 0;
}