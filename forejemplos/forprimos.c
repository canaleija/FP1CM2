#include <stdio.h>

int main()
{

   
    int z;
    for(z=1;z<=500;z++){
    int n = z, x;
    int c = 0 ;
    for(x=n; x>=1; x--){
        if(n%x==0)
            c++;
    }
    if(c>=3){
        printf("%d\n",n);
    }else{
       printf("%d es primo\n",n); 
    }
    }



    return 0;
}
