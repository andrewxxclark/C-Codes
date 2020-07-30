/*  Wilmary Lozano
	27877699
	01JM
	
	Realizar un programa en lenguaje C que permita leer 20 numeros enteros y posteriormente muestre por pantalla lo siguiente:
	
	a) Promedio general 
	b) cantidad de numeros pares
	c) promedio de numeros impares
	d) mayor numero leído
*/

//librerias.
#include <stdio.h>
#include <conio.h>
//Declaracion de variables 
int i=0,suma=0,numero,contadorpares=0,contadorimpares=0,valormayor;
float promedio;
/*-------------------- Cuerpo del Programa -----------------------*/
int main()
{
	for (i = 0; i < 20; i++)
	{
		printf("Ingrese el valor entero #%i  \n \t",i + 1);
		scanf("%d",&numero);
		
			suma=+suma+numero;
		
			if( numero%2 == 0 )
			{
				contadorpares =+ contadorpares+1;
			}
			else
			{
				contadorimpares=+contadorimpares+1;
			}
			if (i == 0)
			{
				valormayor=numero;
			}
				if(numero>valormayor)
				{
					valormayor=numero;
				}
	}
	
	promedio=+(suma/20);
	
	printf(" \n \t El promedio de numeros es %0.2f  \n \t",promedio);
	printf(" \n \t La cantidad de numeros pares es %d  \n \t",contadorpares);
	printf(" \n \t La cantidad de numeros impares es %d  \n \t",contadorimpares);
	printf(" \n \t el numero mayor es %d  \n \t",valormayor);
	
	
getch();
}
