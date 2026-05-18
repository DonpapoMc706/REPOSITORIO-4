#include <stdio.h>

void elevarAlCuadrado(int *n) {
    *n = (*n) * (*n);
}

int main() {
    int numero = 10;
    elevarAlCuadrado(&numero);
    printf("Cuadrado: %d\n", numero);
    return 0;
}