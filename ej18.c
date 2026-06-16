#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct participante {
    char nombre[50];
    int edad;
};

int main() {
    struct participante *p = (struct participante *)malloc(sizeof(struct participante));
    printf("ingrese su nombre: ");
    scanf("%s", p->nombre);
    printf("ingrese su edad: ");
    scanf("%d", &p->edad);
    printf("nombre: %s\n", p->nombre);
    printf("edad: %d\n", p->edad);
    free(p);
    return 0;

}