#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char temporal[100];
    printf("ingrese su nombre: ");
    fgets(temporal, sizeof(temporal), stdin);
    int longitud = strlen(temporal);
    char *nombreDinamico = (char *)malloc((longitud + 1) * sizeof(char));
    strcpy(nombreDinamico, temporal);
    printf("el nombre ingresado es: %s", nombreDinamico);
    free(nombreDinamico);
    return 0;
}