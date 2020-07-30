/* Escriba un programa que después de leer tres temperaturas correspondientes
 a un día cualquiera, calcule la  temperatura promedio de ese día. */
 
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
/*-------------------- Cuerpo del Programa -----------------------*/
int main()
{
/* -------------- Declaracion de Variables--------------------- */
float temp1,temp2,temp3,promedio; 

//Recoleccion de datos
printf("Ingrese la temperatura numero 1 ");
scanf("%f",&temp1);
printf("Ingrese la temperatura numero 2 ");
scanf("%f",&temp2); 
printf("Ingrese la temperatura numero 3 ");
scanf("%f",&temp3);

//Procedimiento
promedio=+(temp1+temp2+temp3)/3;

//Salida de informacion
printf("La temperatura promedio del dia es: %0.2f",promedio);
getch();
}
