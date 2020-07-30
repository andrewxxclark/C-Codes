/* Teniendo en cuenta que una persona promedio por cada paso avanza 45 centímetros. 
Dado el número de pasos avanzados por una persona, determinar cuántos kilómetros,
 metros y centímetros avanza esa persona */
 
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

//Constantes
#define paso 45

/*-------------------- Cuerpo del Programa -----------------------*/
int main()
{
/* ----------- Declaracion de Variables------------------- */
int cantDePasos;
float centimetro,metros,kilometro;

//Recoleccion de datos
printf("\t Indique la cantidad de pasos avanzados \n \n \t");
scanf(" %d",&cantDePasos);

//Procedimiento
centimetro=+paso*cantDePasos; 
metros=+centimetro/100;
kilometro=+centimetro/10000;

//Salida de datos
printf("\t \n \n El total de centimetros es: %0.2f",centimetro);
printf("\t \n \n El total de metros es: %0.2f",metros);
printf("\t \n \n El total de Kilometros es: %0.2f",kilometro);

getch();
}
