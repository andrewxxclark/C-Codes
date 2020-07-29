#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Variables
float acumula_promedio,promedio;
//Cuerpo del programa

int main()
{
   int i,n,a[100];
   
       printf("\n\nLee los elementos del arreglo\n");
       printf("------------------------------------------------------------------------\n");
   
   printf("Ingresa la cantidad de posiciones que deseas tener en el arreglo: \t"); // Lee la cantidad de posiciones que deseas tener en el arreglo.
   
   scanf("%d",&n);
   
   printf("Ahora ingresa %d valores para los elementos del arreglo \n",n); // Lee los valores de las posiciones dentro del arreglo.
   
   for(i=0;i<n;i++)
      {
	  printf("elemento - %d : ",i);
	  
	  scanf("%d",&a[i]);
	  
	  acumula_promedio = acumula_promedio+a[i]; //se define un acumulador para almacenar los valores de las posiciones
	  
	  }
	  
	promedio = acumula_promedio / n; // el verdadero promedio se calcula a partir de la suma de los valores dividido entre la cantidad de elementos del arreglo
    
   printf("\nLos valores que ingresaste fueron: \n");
   
   for(i=0;i<n;i++)
     {
	   printf("% 5d",a[i]);
	 }
 
   printf("El promedio de los %d elementos es: %0.2f",n,promedio);
   
   getch();
} 
 




