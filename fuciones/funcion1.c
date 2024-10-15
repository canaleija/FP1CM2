#include <stdio.h>
// prototipos
void saludar();
double promedio(double,double,double,double);

int main()
{
    float a,b,c,d;

    scanf("%f %f %f %f",&a,&b,&c,&d);

   double aux = promedio(a,b,c,d); 
   printf("%f\n",aux);
    return 0;
}
// implmentaciones

// id / que hace ?
// parametro / qué necesita?
// llaves / cómo lo realiza?
// valor de retorno / que retorna?
void saludar(){
    printf("Hola!\n");
}

// necesidad de promediar 4 numeros doubles y me retorne el resultado
double promedio(double a,double b, double c, double d){
    double prom = (a+b+c+d)/4;

 return prom;   

}
