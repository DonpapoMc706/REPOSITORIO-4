#include <stdio.h>

int main() {
    char nombreCompleto[50];
    printf("ingresa tu nombre completo y apellido: ");
    fgets(nombreCompleto, sizeof(nombreCompleto), stdin);
    printf("el nombre completo ingresado es: %s", nombreCompleto);
    return 0;
}