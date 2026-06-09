#include <stdio.h>
#include <string.h>
struct participante {
    char nombre[50];
    int edad;
};
void cambiar_edad(struct participante* p, int nueva_edad) {
    p->edad = nueva_edad;
}
char* obtener_edad(struct participante p) {
    if (p.edad < 12 || p.edad > 100) {
            return "edad no valida";
        } else if (p.edad >= 12 && p.edad <= 100) {
            return "edad valida";
        }
}
int main() {
    struct participante participante[1];
    strcpy(participante[0].nombre, "Juan");
    participante[0].edad = 25;
    printf("nombre: %s, edad: %d\n", participante[0].nombre, participante[0].edad);
    printf("estado civil: %s\n", obtener_edad(participante[0]));
    cambiar_edad(&participante[0], 10);
    printf("nombre: %s, edad: %d\n", participante[0].nombre, participante[0].edad);
    printf("estado civil: %s\n", obtener_edad(participante[0]));
    return 0;
}