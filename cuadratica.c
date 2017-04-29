#include <stdio.h>
#include <math.h>

int main() {

    // Declara variables de distintos tipos de datos
   

	int a = 1;
	int b = 3;
	int c = 2;
	int d;
	double x; 
	double y;

	
   // Calculo de discriminante
	d = b*b-4*a*c;
if (d<0)
{
printf("No tiene soluciones reales." );
}
else
{
//calcula x0 y x1
x = (-b+sqrt (d))/(2*a);
y = (-b-sqrt (d))/(2*a);
}
	    
    // Imprime x0 y x1 


	printf("x0 = %lf\n", x);
  	printf("x1 = %lf\n", y);



 
    return 0;
}
