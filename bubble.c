#include <stdio.h>
#include <math.h>
int lon = 0;
int bandera = 1;
int swap(int pos, int sig, int datos[]);
void pasada(int datos[]);

int main() 
{

		    // Declara variables de distintos tipos de dato	   
	
	printf("Ingrese longitud del arreglo: ");
	scanf("%d", &lon);
	int datos[lon];
		    
	
		if (lon>0)
		{
		//aca pide datos
		printf("Ingrese terminos del arreglo: ");
			for(int x=0;x<lon;x+=1)
			{
				scanf("%d", &datos[x]);
			}
		    
		//acá acomoda
		while(bandera == 1)
		{
			bandera=0;
			pasada(datos);
		}
		   
		for(int x=0;x<lon;x+=1)
		{
			printf("%d ", datos[x]);
		}
		    

		}
		else
		{
			printf("Dato ingresado invalido.\n");
		}
	
	 
	return 0;
}

void pasada(int datos[])
{
	for(int x=0;x<lon;x+=1)
	{
		int y=x+1;
		
		if(x>y)
		{
			bandera = swap(x, y, datos);
		}
	}  	    
}
	
int swap(int pos, int sig, int datos[])
{
	int temp = datos[pos];
	datos[pos] = datos[sig];
	datos[sig] = temp;
	   
	return 1;
}
