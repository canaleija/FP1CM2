#include <stdio.h>
 
int main()
{
    float aux = 34;
    float  *a = &aux;
    *a /=23+aux;
    float ** b = &a; // 

   printf("%f\n",aux);
   printf("%p\n",b);
   printf("%p\n",&b);
    
    return 0;
}

