#include <stdio.h>


int main()
{
    int x, y;

    // control, secuencial
    // A , B , C
    // 1 
    for(x=0;x<10;x++){
        // 0
        for(y=0;y<10;y++){
            printf("%d %d\n",x,y);
        }

    }
    /* 
    0 0
    0 1
    ...
    0 9
    1 0
    */
    return 0;
}
