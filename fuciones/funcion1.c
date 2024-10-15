#include <stdio.h>
// prototipos
void saludar();

int main()
{
    // llamar la función
    int x;
    for(x=0;x<10;x++)
        saludar();
   
    return 0;
}
// implmentaciones

// id / que hace ?
// parametro / qué necesita?
// llaves / cómo lo realiza?
// valor de retorno / que retorna?
void saludar(){
    printf("Hola!\n");
}