#include <string.h>
#include <stdio.h>
int main(){
    char secreto[20];
    printf("ingresa la palabra secreta para poder acceder ;)");
    scanf("%s",secreto);
    if (strcmp(secreto, "secreto") == 0) {
        printf("adivinaste la palabra secreta ahora el FBI vendra a por ti...");
    } else {
        printf("sos un muerto no adivinaste la palabra secreta");
    }
return 0;
}