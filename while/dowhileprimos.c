#include <stdio.h>

int main()
{
    int n;
    int flag;
    do{
        printf("Ingresa un numero: \n");
        scanf("%d",&n);

        int x;
        int c = 0 ;
        for(x=n; x>=1; x--){
        if(n%x==0)
            c++;
        }
        if(c>=3){
            flag = 1;
    }else{
            flag = 0;
    }


    }while(flag == 1);
    return 0;
}
