#include <stdio.h>
#include <math.h>

int main() {

    // Declara variables de distintos tipos de datos
   

	int a = 7;
	int b = 15;
	int c = -2;
	int d;
	double x0; 
	double X1;

	
   // Calculo de discriminante
	d = b*b-4*a*c;
if (d<0)
{
printf("No tiene soluciones reales." );
}
else
{
//calcula x0 y x1
x0 = (-b+sqrt(d))/(2*a);
x1 = (-b-sqrt(d))/(2*a);
}
	    
    // Imprime x0 y x1 


	printf("x0 = %d\n", x0);
  	printf("x1 = %d\n", x1);



 
    return 0;
}
