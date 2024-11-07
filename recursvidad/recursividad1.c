#include <stdio.h>

void prueba(int);

int main()
{
    
    prueba(5);
    return 0;
}

void prueba(int n){
    // verificar que el caso base se cumpla
    if(n>0){

    printf("Hola\n");
    prueba(n-1);
    }
    
}
