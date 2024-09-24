// if (Estructura)
// evaluar si "algo" se cumple
// ejecución se hace de forma secuencial
/*
if ("algo verdadero"){   si o no /  1 o 0
lo que esta entre las llaves es lo que se va
a realizar
}
igual     ==
diferente !=
menor que  <
mayor que  >
menor o igual que  <=
mayor o igual que >=

if ()
    printf("hola");
printf

*/
#include <stdio.h>

int main()
{
    int x = 5;
    int y = 6;
    if (x<=y)
    {
        if (x<y)
        {
            printf("es menor\n");
        }else{
            printf("es igual\n");
        }    
    }else{
        printf("es mayor\n");

    }
    
    return 0;
}
