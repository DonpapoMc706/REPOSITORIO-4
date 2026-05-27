#include <string.h>
#include <stdio.h>

int main() {
    // 1. esto es para declarar variables
char nombre[20];
char apellido[20];
char nombre_completo[50];
//pedimos el nombre del usuario
printf("ingresa tu nombre"); 
scanf("%s", nombre);
//pedimos el apellido del usuario
printf("ingresa tu apellido");
scanf("%s", apellido);
strcpy(nombre_completo, nombre);
strcat(nombre_completo, " ");
strcat(nombre_completo, apellido);
printf("Tu nombre completo es: %s\n", nombre_completo);
return 0;
}   