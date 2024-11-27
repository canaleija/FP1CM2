#include <stdio.h>

struct fecha
{
    /* todos los datos que de alguna se concluyen que describen a un fecha convencial*/
    int dia;
    int mes;
    int anio;
};



int main(int argc, char const *argv[])
{
    struct fecha cumple_beto;
    //struct fecha cumple_beto;

    struct fecha fechas[] = {cumple_beto};
   
    
    cumple_beto.dia = 29;
    cumple_beto.mes = 7;
    cumple_beto.anio = 1987;

    printf("%d",cumple_beto.dia*cumple_beto.mes);

    
    
    return 0;
}


// nombre
// apellido p
// apellido m
// 
// fecha de nacimiento   
// ciudad
// curp 
