#include <stdio.h>
#include <math.h>

int main() 
{

	    // Declara variables de distintos tipos de dato	   
	int lon = 0;
	int bandera = 0;
	int bubble();
	void swap(int pos, int sig);

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
	    bubble();
	 

	}
	else
	{
	printf("Dato ingresado invalido.\n");
	}
	
	
	void bubble()
	{
	  for(int x=0;x<lon;x+=1)
	    {
	    	int y=x+1;
		if(x>y)
		{
		bandera = swap(x,y);
		}
	    }  
	    
	}
	
	void swap(int pos, int sig)
	{
	  int temp = datos[pos];
	  datos[pos] = datos[sig];
	  datos[sig] = temp;
	   
	    return 1;
	    
	}
  



 
    return 0;
}
