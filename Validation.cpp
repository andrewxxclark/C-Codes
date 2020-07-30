/* Codificar un programa que escriba la calificacion escrita correspondiente a una nota con el siguiente
criterio:

Desde 0 hasta 5pts. Escribir: "En suspenso"
Desde 6 hasta 7pts. Escribir: "Aprobado"
Desde 8 hasta 9pts. Escribir: "Sobresaliente"
Si son 10pts. Escribir: "Matricula de honor".  */

//librerias.
#include <stdio.h>
#include <conio.h>

/*-------------------- Cuerpo del Programa -----------------------*/
int main()
{
//Declaracion de Variables.
float puntos=0;
//Recoleccion de datos.
printf("\n \t Introduzca la calificacion escrita del estudiante del 1 al 10 \n \n ");
scanf("%f",&puntos);

if(puntos>=0 && puntos <=5)
{
	printf("En suspenso");
}
else
if(puntos>=6 && puntos <=7)
{
	printf("Aprobado");
}
else
if (puntos>=8 && puntos <=9)
{
	printf("Sobresaliente");
}
else
if(puntos==10)
{
	printf("Matricula de honor");
}
else
printf("Introduza un numero valido entre 0 y 10");	
getch();
}
