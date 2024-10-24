#include <stdio.h>

int main()
{

    //int x = 8;
    int x[7];
    int * k = x;

    printf("%p\n",k);
    printf("%p\n",&x);
    printf("%p\n",&x[0]);
    printf("%p\n",x);

    /* code */
    return 0;
}
