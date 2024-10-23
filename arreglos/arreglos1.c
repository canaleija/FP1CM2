#include <stdio.h>

int main()
{
    int x,i,j, temp;
    int arreglo [] = {6,5,4,3,2,1};
    
    /// se implementar un ordenamiento de datos Burbuja
    for(i=1;i<6;i++){ ///  son las veces que tiene que subir la burbuja
        for(j=0;j<6-i;j++){// son los intercambios para subir cada burbuja
            if(arreglo[j]>arreglo[j+1]){// si cumple que es mayor
                // intercambio
                temp = arreglo[j];
                arreglo[j]=arreglo[j+1];
                arreglo[j+1] = temp;
            }
        }
    }


    // mostrar los datos en consola, verificar que los elementos 
    // en el arreglo estan ordenados de forma Asc
    for(x=0;x<5;x++){
        printf("%d\n", arreglo[x]);
    }

    
    return 0;
}
