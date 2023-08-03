// escriba un programa en el que se ingrese por teclado una frase y a continuación muestre por pantalla
// a) Cuantas palabras terminan con la letra N
// b) La palabra del texto más larga indicando la cantidad de letras que tiene

#include <stdio.h>
#include <string.h>

int tiene_n(char *palabra);
int larga_length = 0, cant_n = 0;
char *larga;

int main(){
    char texto[100], *palabra;
    printf("\n Ingrease un texto: \n");
    fflush(stdin);
    gets(texto);
    palabra=strtok(texto, " ");
    while(palabra!=NULL){
        tiene_n(palabra);
        palabra=strtok(NULL, " ");
    }
    printf("\n[!] La palabra %s es la palabra más larga, con un total de %d letras.",larga,larga_length);
    printf("\n[!] Se registraron un total de %d palabras que terminan con la letra N.",cant_n);
    return 0;
}

int tiene_n(char *palabra){
    int length = strlen(palabra); // h o l a --> 4
    if(length > larga_length){
        larga_length = length;
        larga = palabra;
    }
    
    if(palabra[length - 1] == 'N' || palabra[length - 1] == 'n'){
        cant_n+=1;
    }
    return 0; 
}


