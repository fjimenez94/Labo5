#include <stdio.h>
#include <math.h>
    // Declara variables de distintos tipos de datos y funciones
int lon = 0;
int bandera = 1;
void swap(int pos, int sig, int datos[]);
void pasada(int datos[]);

int main() 
{

		     
	
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
		    
		//acá acomoda los datos
			do
			{
				bandera=0;		//BANDERA EN 0
				pasada(datos);		//indica sin 								//intercambios
							//en la pasada
			}
			while(bandera==1);
			
			printf("\n");
		//Este for imprime  
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

//esta función revisa si es necesario intercambiar valores 
void pasada(int datos[])
{
	for(int x=0;x<lon;x+=1)
	{
		int y=x+1;
		
		if(datos[x]>datos[y])
		{
			bandera = 1;
			swap(x, y, datos);
		
		}
	}  	    
}

//esta funcion intercambia valores
	
void swap(int pos, int sig, int datos[])
{
	int temp = datos[pos];
	datos[pos] = datos[sig];
	datos[sig] = temp;

}
