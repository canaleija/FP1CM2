#include <stdio.h>

float promediar(float[],int);
int calcularMenor(int[], int);


int main()
{
    //float arreglo []= {2222.3,4.5,2,5.6,10.8,56};
    int arreglo []= {2,4,5,6,11,32,12,-17};
    //int menor = calcularMenor(arreglo,8);
    printf("%p\n",arreglo);
    printf("%p\n",&arreglo);
    printf("%p\n",&arreglo[0]);

    // char 
    



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

int calcularMenor(int arreglo[], int tam){
    int pos = 0, x;
    
    for(x=1; x<tam;x++){

        if(arreglo[x]<arreglo[pos]){
            pos = x;
        }
    }
    return arreglo[pos];
}
