#include <stdio.h>

void modificar (int*, int);

int main()
{
    int x = 78;
    // puntero (variable de tipo apuntador)
    
    int *p = &x;

    printf("%d\n",x);

    x = 67;
    printf("%d\n",x);
    modificar(&x,11);

    return 0;
}

void modificar (int *j, int nuevo){
    *j = nuevo;
}
