#include <stdio.h>

float promediar(float[],int);


int main()
{
    float arreglo []= {2222.3,4.5,2,5.6,10.8,56};
    float promedio = promediar(arreglo,6);
    printf("%f\n",promedio);
    /* code */
    return 0;
}

float promediar(float arreglo[],int tam){
    // promedio: sumarlos y posterior dividir entre tam
    float acumulador = 0;
    int x;
    for(x=0; x < tam;x++){
        acumulador +=arreglo[x];
    }
    
    float prom = acumulador / tam;
    return prom;
}