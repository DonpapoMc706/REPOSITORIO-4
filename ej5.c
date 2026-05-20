#include <stdio.h>

int calcularLongitud(char *cadena) {
    char *inicio = cadena;
    while (*cadena != '\0') {
        cadena++;
    }
    return cadena - inicio; 
}
int main() {
    char texto[] = "ZAIDPIANAROSA";
    int longitud = calcularLongitud(texto);
    printf("La palabra '%s' tiene %d letras.\n", texto, longitud);
    return 0;
}