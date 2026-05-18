#include <stdio.h>

void aMayuscula(char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 32;
    }
}

int main() {
    char letra = 'g';
    aMayuscula(&letra);
    printf("Mayuscula: %c\n", letra);
    return 0;
}