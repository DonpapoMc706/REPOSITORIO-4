#include <stdio.h>
#include <string.h>
struct libro {
char titulo[50];
int precio;
};
int main() {
    struct libro bibloteca[3];
    strcpy(bibloteca[0].titulo, "El señor de los anillos");
    bibloteca[0].precio = 1000;
    strcpy(bibloteca[1].titulo, "Harry Potter");
    bibloteca[1].precio = 1500;
    strcpy(bibloteca[2].titulo, "El principito");
    bibloteca[2].precio = 500;
    int maximo = 0;
    int indice_caro = 0;
    for (int i = 0; i < 3; i++) {
        printf("Titulo: %s, Precio: %d\n", bibloteca[i].titulo, bibloteca[i].precio);
        if (bibloteca[i].precio > maximo) {
            maximo = bibloteca[i].precio;
            indice_caro = i;
        }
    }
    printf("Libro más caro: %s, Precio: %d\n", bibloteca[indice_caro].titulo, bibloteca[indice_caro].precio);
    return 0;
}