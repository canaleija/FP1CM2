#include <stdio.h>

int contador (char[],char);


int main()
{
    
    char cadena [] = {'B','e','t','o',' ','C','r','u','z','\0'};
    char cadena_lit [] = "Jarales 101 Villa Verdekndsfajkdñasdlñadksnjdklsajndklsañlkdnlksdnklawndklanslkdnsklandksnadklnsakndkndslkandklsandklnskdnsaldn";
    int aux = contador(cadena_lit,'s');
    printf("%d\n",aux);

    return 0;
}

int contador (char cadena[],char caracter){

    // recorrer el arreglo mientras los elementos sean diferentes
    // al final (\0)de la cadena
    char aux = cadena[0];
    int contador = 0, i = 0;
    while(aux!='\0'){
        if(aux==caracter){
            contador++;
        }
        i++;
        aux = cadena[i];
    }
     
    return contador;
}
