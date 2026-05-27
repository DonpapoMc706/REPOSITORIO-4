#include <stdio.h>

int main(void) {
    int i;
    char s[100];

    printf("Escriba su edad: ");
    if (scanf("%d", &i) != 1) {
        return 1;
    }

    printf("Ingrese su nombre: ");
    if (scanf("%99s", s) != 1) {
        return 1;
    }

    printf("Edad: %d\nNombre: %s\n", i, s);
    return 0;
}