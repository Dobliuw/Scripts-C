#include <stdio.h>
#include <string.h>

int cantidad_vocales(char *palabra);

int main(){
    char texto[100], *palabra, *palabra_mas_vocales;
    int max_vocales = 0;

    printf("\n Ingrese un texto: \n");
    fflush(stdin);
    gets(texto);
    palabra=strtok(texto, " ");
    while(palabra!=NULL){
        printf("La palabra seleccionada es %s \n",palabra);
        int total_vocales = cantidad_vocales(palabra);
        if(total_vocales > max_vocales){
            max_vocales=total_vocales;
            palabra_mas_vocales=palabra;
        }
        palabra=strtok(NULL, " ");
    }
    printf("Palabra %s tiene un total de %d vocales",palabra_mas_vocales,max_vocales);
}


int cantidad_vocales(char *palabra){

    int contador=0;
    char vocales[]="a,e,i,o,u,A,E,I,O,U";
    int i;
    int j;
    for(i = 0; palabra[i]!=0; i++){
        for(j = 0; vocales[j]!=0; j++){
            if(palabra[i]==vocales[j]){
                contador++;
                break;
            }
        }
    }

    return contador;
}
