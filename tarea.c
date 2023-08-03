// 1. El usuario tiene que ingresar una frase, la cual se
// debe separar por espacios y en un bucle e imprimir en consola
// la palabra tomada junto a su longitud

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    printf("Ingrese una frase: ");
    fflush(stdin); // ! LOS ; SON IMPORTANTISIMOS
    gets(frase);

    char *palabra = strtok(frase, " ");
    while (palabra != NULL) {
        printf("%s (%ld)\n", palabra, strlen(palabra));
        palabra = strtok(NULL, " ");
    }

    return 0;
}
