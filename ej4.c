#include <stdio.h>

int main() {
    int numeros[] = {10, 20, 30};
    int cantidad = 3;
    int *p = numeros + (cantidad - 1); 
    printf("Orden inverso:\n");
    for(int i = 0; i < cantidad; i++) {
        printf("Valor: %d\n", *(p - i));
    }
    
    return 0;
}