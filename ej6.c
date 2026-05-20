#include <stdio.h>
int buscarNumero(int *arreglo, int tamaño, int buscado) {
    for (int i = 0; i < tamaño; i++) {
        if (*(arreglo + i) == buscado) {
            return 1; 
        }
    }
    return 0; 
}
int main() {
    int numeros[] = {5, 15, 25, 35, 45};
    int valorABuscar = 25;
    if (buscarNumero(numeros, 5, valorABuscar) == 1) {
        printf("El numero %d SI esta en el arreglo.\n", valorABuscar);
    } else {
        printf("El numero %d NO esta en el arreglo.\n", valorABuscar);
    }
    return 0;
}