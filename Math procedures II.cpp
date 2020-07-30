/* Escriba un programa que permita calcular el área de un trapecio*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
/*-------------------- Cuerpo del Programa -----------------------*/
int main()
{
/* -------------- Declaracion de Variables--------------------- */
int BaseInf,BaseSup, altura,basetotal;
float area,area1;

//Peticion de datos al usuario
printf("\t Ingrese el tamaño de la base inferior \n \n \t ");
	scanf("%d",&BaseInf);
printf("\t Ingrese el tamaño de la base superior\n \n \t ");
	scanf("%d",&BaseSup);
printf("\t Ingrese la altura \n \n \t ");
	scanf("%d",&altura);

//Procedimiento
area=+(BaseInf+BaseSup)*altura/2;

//Salida de datos
printf("\n \t El area del trapecio es %0.2f \n \t",area);
getch();
}
