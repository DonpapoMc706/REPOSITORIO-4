#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    printf("ingresa la primera nota: ");
    scanf("%f", &nota1);
    printf("ingresa la segunda nota: ");
    scanf("%f", &nota2);
    printf("ingresa la tercera nota: ");
    scanf("%f", &nota3);
    float promedio = (nota1 + nota2 + nota3) / 3;
    printf("el promedio de las notas es: %.2f", promedio);
    return 0;
}