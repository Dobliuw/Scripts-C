#include <stdio.h>
#include <string.h>

int capicua_yes_no(char *palabra);

int main(){
        char texto[100], *palabra;
        int cantidad_capicua = 0;
        printf("Ingresa una frase: \n");
        fflush(stdin);
        gets(texto);
        palabra=strtok(texto, " ");
        while(palabra!=NULL){
               int capicua = capicua_yes_no(palabra);
               if(capicua==1){
                     cantidad_capicua+=1;
               }
               palabra=strtok(NULL, " ");
        }
        printf("Existe un total de %d palabras capicuas.",cantidad_capicua);
}

int capicua_yes_no(char *palabra){ // hola == aloh
        char palabra_alrevez[100] = ""; // "a l o h"
        int length = strlen(palabra)-1; // 3
        for(int i = length; i>=0; i--){ // i = -1; i(-1) >= 0; i--
                palabra_alrevez[length-i] = palabra[i];
        }
        if(strcmp(palabra, palabra_alrevez)==0){
                return 1; // true
        }else{
                return 0; // false
        }
}
