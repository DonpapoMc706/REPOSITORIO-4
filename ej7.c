#include <string.h>
#include <stdio.h>

int main() {
char nombre[20];
char apellido[20];
char nombre_completo[50];
printf("ingresa tu nombre"); 
scanf("%s", nombre);
printf("ingresa tu apellido");
scanf("%s", apellido);
strcpy(nombre_completo, nombre);
strcat(nombre_completo, " ");
strcat(nombre_completo, apellido);
printf("Tu nombre completo es: %s\n", nombre_completo);
return 0;
}   