/* Escriba un programa que permita calcular si un numero entero es mayor,
menor o igual a cero.*/

//librerias.
#include <stdio.h>
#include <conio.h>
/*-------------------- Cuerpo del Programa -----------------------*/
int main()
{
//Declaracion de Variables.
int numero;

//Recoleccion de datos.
printf("Introduzca un numero");
scanf("%d",&numero);

//Procedimiento
if(numero>0)
	printf("El numero ingresado es mayor a cero");
		if(numero<0)
			printf("El numero ingresado es menor a cero");
			if(numero==0)
				printf("El numero ingresado es igual a cero");
getch();
}
