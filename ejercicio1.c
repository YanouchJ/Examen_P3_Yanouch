/*
struct producto
    {
        char codigo[25];
        char nombreProd[50];
        char descrProd[50];
        int cantidad;
        float precioCompra;
    };
Menu
1) Ingresar datos  -> archivo plano  ->  A01 Producto: Arroz     Marca: SanCarlos    Cantidad: 100kg      Precio: 2,50
2) Mostrar datos
3) Salir
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Declaracion del archivo
    FILE *archivo;
    char ingresoDatos[300]; // Cadena para guardar los datos ingresados

    int opcion, cant;
    printf("Seleccione la opcion.\n");
    printf("1. Ingresar datos \n2. Mostrar datos \n3. Salir \n--> ");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1: // Bloque para ingresar los datos por teclado
        printf("Ingrese el numero de productos a ingresar\n");
        scanf("%d", &cant);

        struct producto
        {
            char codigo[25];
            char nombreProd[50];
            char descrProd[50];
            int cantidad;
            float precioCompra;
        };

        struct producto ingresoDatos[300];
        if (archivo = fopen("Datos.txt", "w"))
        {
            printf("El archivo se ha abierto correctamente. INGRESE LOS DATOS. \n ");
            for (int i = 0; i < cant; i++)
            {
                printf("Codigo del producto: \n");
                fflush(stdin);
                fgets(ingresoDatos[i].codigo, 25, stdin);
                printf("Nombre del producto: \n");
                fflush(stdin);
                fgets(ingresoDatos[i].nombreProd, 50, stdin);
                printf("Descripcion del producto: \n");
                fflush(stdin);
                fgets(ingresoDatos[i].descrProd, 50, stdin);
                printf("Cantidad: \n");
                fflush(stdin);
                scanf("%d", &ingresoDatos[i].cantidad);
                printf("Precio: \n");
                fflush(stdin);
                scanf("%f", &ingresoDatos[i].precioCompra);
            }
        }
        else
        {
            printf("Error al abrir el archivo.");
        }
        fclose(archivo);
        break;

    case 2:
        printf("DATOS INGRESADOS. \n ");
        if (archivo = fopen("Datos.txt", "r"))
        {
            printf("El archivo se ha abierto correctamente. INGRESE LOS DATOS. \n ");
            for (int i = 0; i < cant; i++)
            {
                printf("%c\n", ingresoDatos[i].codigo, 25, stdin);
                printf("%c\n", ingresoDatos[i].nombreProd, 50, stdin);
                fgets(ingresoDatos[i].nombreProd, 50, stdin);
                printf("Descripcion del producto: \n");
                fflush(stdin);
                fgets(ingresoDatos[i].descrProd, 50, stdin);
                printf("Cantidad: \n");
                fflush(stdin);
                scanf("%d", &ingresoDatos[i].cantidad);
                printf("Precio: \n");
                fflush(stdin);
                scanf("%f", &ingresoDatos[i].precioCompra);
            }
        }
        else
        {
            printf("Error al abrir el archivo.");
        }
        fclose(archivo);
        break;

    case 3:
        printf("Fin del programa. \n ");
        break;
    }
    return 0;
}
