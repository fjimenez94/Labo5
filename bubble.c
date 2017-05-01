#include <stdio.h>
#include <math.h>

int main() 
{

	    // Declara variables de distintos tipos de datos
	   

		int f1 = 1;
		int f2 = 1;
		int f3 = 2;
		


	printf("Ingrese longitud del arreglo: ");
	    scanf("%d", &lon);
	    int datos[lon];
	    
	
	if (term>0)
	{
	  printf("Ingrese terminos del arreglo: ");
	  for(int x=0;x<lon;x+=1)
	    {

		  scanf("%d", &lon[x]);
	    }
	    for(int x=0;x<lon;x+=1)
	    {

		  printf("%d\n", lon[x]);
	    }

	}
	else
	{
	printf("Dato ingresado invalido.\n");
	}

  



 
    return 0;
}
