#include <string.h>
#include <stdio.h>

int main() {   
char palabra1[20];
char palabra2[30];
printf("Ingresa una palabra cualquiera");
scanf ("%s",palabra1);
printf("ingresa otra palabra que seria palabra 2");
scanf("%s", palabra2);
if(strlen(palabra1) > strlen(palabra2)) {
    printf("la primera palabra es mas larga que la segunda palabra");
} else if (strlen(palabra2) > strlen(palabra1)) {
    printf("la segunda palabra es mas larga que la primera");
}  else {
    printf ("tiene el mismo tamaño las 2 palabras");
}
return 0;
}

