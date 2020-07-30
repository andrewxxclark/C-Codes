/* Ulitizando la estructura multiple Switch-case, elabore un programa que lea en numero 
los dias de la semana del (1-7) y de un mensaje de error cuando introduzca un numero incorrecto (9)
en cada dia debe desplegar un mensaje como se indica a continuacion:

Mensaje "ES LUNES, GRACIAS POR ESTA NUEVA SEMANA"
Mensaje "ES MARTES, SE FELIZ"
Mensaje "ES MIERCOLES, QUE NOS FALTA POR HACER"
Mensaje "ES JUEVES, YA CASI TERMINO"
Mensaje "ES VIERNES, A DESCANSAR"
Mensaje "ES SABADO, A DISFRUTAR"
Mensaje "ES DOMINGO, A COMPARTIR"

*/

//librerias.
#include <stdio.h>
#include <conio.h>

/*-------------------- Cuerpo del Programa -----------------------*/
int main()
{
//Declaracion de Variables.
int numero;
//Recoleccion de datos.
printf("\n \t Introduzca un numero del 1 al 7 \n \n ");
scanf("%d",&numero);

switch (numero) 
{
	case 1: 
			printf("ES LUNES, GRACIAS POR ESTA NUEVA SEMANA");
	break;
	case 2:
			printf("ES MARTES, SE FELIZ");
	break;
	case 3:
			printf("ES MIERCOLES, QUE NOS FALTA POR HACER");
	break;
	case 4:
			printf("ES JUEVES, YA CASI TERMINO");
	break;
	case 5:
			printf("ES VIERNES, A DESCANSAR");
	break;
	case 6:
			printf("ES SABADO, A DISFRUTAR");
	break;
	case 7:
			printf("ES DOMINGO, A COMPARTIR");
	break;
	default:
			printf(" El numero debe ser entre 1 y 7");
}	
getch();
}


