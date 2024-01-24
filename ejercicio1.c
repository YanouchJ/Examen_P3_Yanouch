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
    struct producto
    {
        char codigo[25];
        char nombreProd[50];
        char descProd[50];
        int cantidad;
        float precioCompra;
    };

    return 0;
}
