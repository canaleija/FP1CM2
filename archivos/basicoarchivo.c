#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *archivo = fopen ("hola.txt","w");

    if(archivo == NULL){
        printf("Error, no se porque pero no se pudo!");
        return 1;

    } else{

        fprintf(archivo, "%d\n",34);

        fprintf(archivo, "%d",23);
        fprintf(archivo, "\nHola bb");
        //fclose(archivo);
    }

    return 0;
}
