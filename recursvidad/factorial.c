#include <stdio.h>

// n¡ = n * n-1!
int factorialRec(int);

int main()
{
    int n = 4;
    int res = factorialRec(n);
    printf("%d\n",res);

    return 0;
}
int factorialRec(int n ){
    // caso base
    if(n == 0){
        return 1;
    }

    // n! = n * factorialRec(n-1);
    return n*factorialRec(n-1);
}