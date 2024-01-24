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

int main(int argc, char const *argv[])
{
    int opcion;
    printf("Seleccione la opcion.\n");
    printf("1. Ingresar datos \n2. Mostrar datos \n3.Salir ");
    switch(opcion)
    {
        case 1:
        printf("INGRESE LOS DATOS. \n ");

        break;



        case 2:
        printf("DATOS INGRESADOS. \n ");
        break;



        case 3:

        break;
        default("No existe la opcion que ingresaste.\n");
    }

    return 0;
}
