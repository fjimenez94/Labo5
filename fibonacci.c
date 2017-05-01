#include <stdio.h>
#include <math.h>

int main() {

	    // Declara variables de distintos tipos de datos
	   

		int f1 = 1;
		int f2 = 1;
		int f3 = 2;
		int term;


	printf("Ingrese número de datos deseado: ");
	    scanf("%d", &term);

	if (term>0)
	{
	  for(int x=0;x<term;x+=1)
	    {

		if (x<2)
		{
		printf("%d ", f1);
		}
		else
		{
	
		f3=f1+f2;
	
		f1=f2;
		f2=f3;
	
		printf("%d ", f3);
	
		}

	    }

	}
	else
	{
	printf("Dato ingresado invalido.\n");
	}

  



 
    return 0;
}
