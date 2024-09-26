#include <stdio.h>

int main()
{
    int x, t, n;
    printf("Inserte el numero para conocer su tabla de multiplicar\n");
    scanf("%d", &t);
    printf("Inserte el limite de su tabla de multiplicar\n");
    scanf("%d", &n);
    for(x=0;x<=n;x++){
        printf("%d x %d = %d\n",t,x,t*x);

    }
    /* code */
    return 0;
}