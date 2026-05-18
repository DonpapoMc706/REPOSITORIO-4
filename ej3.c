#include <stdio.h>

void limpiar(int *n) {
    *n = 0;
}

int main() {
    int otroNumero = 99;
    limpiar(&otroNumero);
    printf("Limpiado: %d\n", otroNumero);
    return 0;
}