#include <stdio.h>
struct Rectangulo {
    int base;
    int altura;
};
int calcularArea(struct Rectangulo r) {
    return r.base * r.altura;
}
int main() {
    struct Rectangulo mi_rectangulo;
    mi_rectangulo.base = 100;
    mi_rectangulo.altura = 32;
    int area = calcularArea(mi_rectangulo);
    printf("El area del rectangulo es: %d\n", area);
    return 0;
}