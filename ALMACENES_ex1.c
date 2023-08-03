// Se tienen N almacenes pertenecientes a una empresa que comercializa M productos.De dichos productos
// se ingresa por teclado el precio como tambien el stock minimo y los valores de N y M.
// Ademas se debera ingresar las existencias de cada producto en cada uno de los almacenes.
// Se pide obtener y mostrar por pantalla utilizando funciones:
// a) La matriz "faltantes" con la diferencia de stock minimo real, en caso que este ultimo sea menor,
// de lo contrario el faltante se considerara cero
// b) el costo de reposicion de stock por almacen.

// Hacer una función para cargar los datos (excepto N y M que seran ignresados en el programa principal),
// y una para cada punto pedido

#include <stdio.h>
#include <string.h>

// Variables Globales
int almacenes_n, productos_m;
char nombres[100][100][100];

void carga(int almacenes, int productos);

int main(){
    printf("\n [!] Porfavor ingresa la cantidad de almacenes: ");
    fflush(stdin);
    scanf("%d",&almacenes_n);
    printf("\n [!] Porfavor ingresa la cantidad de productos: ");
    fflush(stdin);
    scanf("%d",&productos_m);
    carga(almacenes_n, productos_m);
    
    printf("\n\n\n|            |");
    for(int a = 0; a < almacenes_n; a++){
        printf("  Almacen %d   |",a+1);
    }
    printf("\n");
    
    for(int p = 0; p < productos_m; p++){
        printf("| Producto %d |",p+1);
        for(int a = 0; a < almacenes_n; a++){
            printf("   %-10s |",nombres[a][p]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}

void carga(int almacenes, int productos){
    for(int a = 0; a < almacenes; a++){
        for(int p = 0; p < productos; p++){
            //printf("[!] Almacen %d producto %d",a + 1,p + 1);
            printf("\n [!] Porfavor ahora ingresa el nombre del producto n.%d de la almacen n.%d: ",p+1,a+1);
            fflush(stdin);
            gets(nombres[a][p]);
        }
    }
}

