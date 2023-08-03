77//0 0P0e0d0i0r0 un texto y una letra, eliminar del texto, la letra
#include <stdio.h>
#include <string.h>

int main(){
    char texto[100], letra, remplazo, new_texto[100];
    int i;
    printf("[!] Ingrse el texto: \n");
    fflush(stdin);
    gets(texto);
    printf("\n[!] Ingrese una letra para remplazarla: \n");
    fflush(stdin);
    scanf("%c",&letra);
    printf("\n[!] Ingrese una letra por la que remplazar la anterior: \n");
    fflush(stdin);
    scanf("%c",&remplazo);
    // texto -------> Hola esto es una prueba
    // letra -------> a
    // remplazo ----> o
    // new_texto ---> Holo esto es uno pruebo
    for(i = 0; texto[i]!=0; i++){
        if(texto[i]==letra){
            new_texto[i] = remplazo;
        }else{
            new_texto[i] = texto[i];
        }
    }
    new_texto[i] = '\0';
    printf("\n\n[+] El nuevo texto modificado es: \"%s\"\n",new_texto);
}

//printf("Hola esto es una pruba") // Hola esto es una prueba
//printf("Hola esto es una pruba \"ponele\"") // Hola esto es una prueba "ponele"

// --> promedio, cantidad de meses, nose q otra cosa 


