/*
if else if
for()
*/

#include <stdio.h>

int main()
{
  
  int x;
  scanf("%d",&x);
  int res = x%2;

  if (res == 0)
  {
    printf("%d Es par\n",x );
  }else{

     printf("%d Es impar\n",x );   
  }
  
    
  
    return 0;
}