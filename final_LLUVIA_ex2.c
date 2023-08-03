/*
Escriba un programa en el que se ingresen por teclado una frase y una palabra y
a continuación muestre por pantalla:

1) Cuántas veces aparece la palabra ingresada en la frase. LISTO
2) la longitud media de las palabras del texto.
3) cantidad de palabras (de tres o más letras) cuyas primeras tres letras sean las mismas que
las ultimas tres en orden inverso. Ejemplos de estas palabras son: RECrudeCER, RAdAR, NARraRAN, SOS.
*/
#include <stdio.h>
#include <string.h>

int orden_inverso(char *palabra_de_texto, int lenght);

int main(){
    char texto[100], palabra[12], *palabra_de_texto;
    int repetida = 0, total_caracteres = 0, total_palabras = 0, inversas = 0;
    printf("\n [!] Ingresa una frase: \n");
    fflush(stdin);
    gets(texto);
    printf("\n [!] Ingresa una palabra: \n");
    fflush(stdin);
    scanf("%s", palabra);
    palabra_de_texto = strtok(texto, " ");
    while(palabra_de_texto!=NULL){
        int length = strlen(palabra_de_texto);
        total_caracteres+=length;
        total_palabras+=1;
        if(strcmp(palabra_de_texto, palabra)==0){
            repetida+=1;
        }
        if(orden_inverso(palabra_de_texto, length)){ // radar, 5 
            inversas+=1;
        }
        palabra_de_texto = strtok(NULL, " ");
    }
    int promedio = total_caracteres  / total_palabras;
    printf("\nLa palabra \"%s\", se repite un total de %d, la logitud media de las palabras es de %d y existen %d palabras cuyas pri tres letras = ult tres",palabra,repetida,promedio,inversas);
    return 0;
}

int orden_inverso(char *palabra_de_texto, int length){ // "radar", 5 
    if(length >= 3){ // 5 >= 3 
        char primeros_c[4] = ""; // [r a d '\0']
        char ultimos_c[4] = "";  // [d a r '\0']
        char ultimos_alrevez[4] = "";  // [r a d '\0']
        // Agarrar los 3 primeros caracteres:
        strncpy(primeros_c, palabra_de_texto, 3); // Guardame en "primceros_c" los 3 primeros caracteres de "radar" 
        primeros_c[3] = '\0'; // [r a d _][3] ---> r[0] a[1] d[2] _[3] --> '\0'
        strncpy(ultimos_c, palabra_de_texto + (length - 3), 3); //  Guardame en "ultimos_c" los 3 primeros caracteres de "radar" + (5-3=2) --> "dar"
        ultimos_c[3] = '\0'; // [ d a r _ ][3] --> d[0] a[1] r[2] _[3] ---> '\0' 

        for(int i = 2; i>=0; i--){ // i = 0,  i >= 0; i--
            ultimos_alrevez[2-i] = ultimos_c[i]; // [ r a d _ ][2] = [d a r '\0'][0]
        }
        ultimos_alrevez[3] = '\0'; // [r a d _ ][3] ---> r[0] a[1] d[2] _[3] --> '\0'
        if(strcmp(primeros_c, ultimos_alrevez)==0){ // rad == rad --> 0==0 --> true
            return 1; // true <-- 1
        }
    }
    return 0; // false <-- 0 
}
