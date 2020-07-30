/* Escriba un programa que permita convertir un valor ingresado en pulgadas a milímetros.
 Tenga en cuenta que 1 pulgada equivale a 25,4 milímetros */
 
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

//Constantes
#define milimetro 25.4
/*-------------------- Cuerpo del Programa -----------------------*/
int main()
{
/* -------------- Declaracion de Variables--------------------- */
float pulgada,resultado;

//Recolección de datos
printf("Ingrese el valor en pulgadas que desea convertir a milimetros \n \n ");
scanf("%f",&pulgada);

//Procedimiento
resultado=+pulgada*milimetro;

//Salida de datos
printf("\t \n Las pulgadas ingresadas corresponden a %0.2f milimetros \n ", resultado);
getch();
}
