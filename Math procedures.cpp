/* Escriba un programa que permita calcular el área de un rectángulo.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
/*-------------------- Cuerpo del Programa -----------------------*/
int main()
{
/* -------------- Declaracion de Variables--------------------- */
int base, altura, area;

//Pedir y leer datos del usuario 
printf("\n Introduzca el valor de la base \n \t ");
scanf("%d",&base);
printf("\n Introduzca el valor de la altura \n \t ");
scanf("%d",&altura);
//Procedimiento
area=+base*altura;
//Salida 
printf("\n El area del rectangulo es %d \n \t ",area);
getch();
}
