#include <stdio.h>
#include <string.h>
struct ingredientes
{
    char ingrediente1 [20];
    char ingrediente2 [20];
    char ingrediente3 [20];
};

//definiciones
struct platillo
{
    char nombre[30];
    char region[30];
    float precio;
    struct ingredientes _ingredientes;

    /* data */
};


int main()
{
    struct platillo mole;
    struct platillo tamal;
    // darle valores 
    // operador punto
    strcpy(mole.nombre,"mole de olla");
    strcpy(mole.region,"oaxaca");
    mole.precio = 34.5;
    strcpy(mole._ingredientes.ingrediente1,"Chile");
    strcpy(mole._ingredientes.ingrediente2,"Chocolate");
    strcpy(mole._ingredientes.ingrediente3,"carne de puerco");

    mole.precio = 100;



    return 0;
}
