/*  Se desea realizar un programa que lea la siguiente informacion sobre las personas que asisten al cine:
	
	Cedula
	Nombre
	Edad (validar que sea entre 1 y 125 a�os maximo) 
	Sexo (Utilizar menu Femenino / Masculino 
	Edo. civil (Utilizar un menu con Soltero, casado, divorciado, viudo)
	La cantidad de personas que asistieron al cine es desconocido, por lo tanto el programa debe preguntar si desea registrar otra persona 
	y debe hacer lo siguiente:
	
	A) Calcular el promedio de edad de las personas asistentes del sexo femenino
	B) Calcular la mayor edad de sexo masculino y casado
	C) Cantidad de ni�os (<=12), jovenes (12 -30), Adultos (>=30) que van al cine, porcentaje de mujeres y hombres que asistieron al cine
	
*/

//librerias.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//Declaracion de variables.
int cedula,edad,aux,sexo,edo_civil,n=0,valormayor,contador_ninos=0,contador_jovenes=0,contador_adultos=0,contador_masculino=0,contador_femenino=0,contador_de_sexos;
char nombre[10];
float suma_edad,promedio_edad,prom_hombres,prom_mujeres;

/*-------------------- Cuerpo del Programa -----------------------*/
int main()
{
	do{
		printf("\n \t ***Bienvenido al cine, vamos a recopilar algo de informacion*** \n \t");
		printf (" \n \t Ingrese su numero de cedula \n \n \t \t");
		scanf("%d",&cedula);
		system ("CLS");
		
		printf(" \n \t Ingrese su nombre \n \n \t \t ");
		scanf("%s",&nombre);
		system ("CLS");
		
			do{
				printf(" \n \t Ingrese su edad \n \n \t \t");
				scanf("%d",&edad);
				system ("CLS");
					//Validacion de edad
					if ( edad < 1 || edad > 125 )
					{
						printf(" \n \t ERROR. Ingrese una edad valida entre 1 y 125 a�os \n ");
					}
					//Validacion de cantidad de asistentes (ni�os, jovenes, adultos)
					if(edad < 12 )
					{
						contador_ninos++;
					}
						if(edad >= 12 && edad <30)
						{
							contador_jovenes++;
						}
							if(edad >= 30)
							{
								contador_adultos++;
							}
							
					
			
			}while ( edad < 1 || edad > 125 );//termina validacion de edad
		
		//Validacion de sexo
		printf(" \n \t Ingrese su sexo \n \t ");
		printf("\n \t 1. Masculino \n \t ");
		printf("\n \t 2. Femenino \n \n \t ");
		scanf("%d",&sexo);
		system ("CLS");
			switch (sexo) 
			{
			case 1: 
				printf("\n \t Ha seleccionado Masculino \n \t");
				contador_masculino++;
			break;
			case 2: 
				printf("\n \t Ha seleccionado Femenino \n \t ");
				contador_femenino++;
			break;
			default:
				printf("\n \t ERROR. Ingrese un valor correcto \n \t ");
			}
			contador_de_sexos++;
			
			//CALCULO DE PORCENTAJE DE MUJERES Y HOMBRES ASISTENTES AL CINE
			prom_hombres=+(contador_masculino*100)/contador_de_sexos;
			prom_mujeres=+(contador_femenino*100)/contador_de_sexos;
			
			system ("pause");
			system ("CLS");
			// termina validacion de sexo
		
			do{
				//VALIDACION DE ESTADO CIVIL
		printf(" \n \t Ingrese su estado civil \n \t ");
		printf("\n \t 1. Soltero \n \t ");
		printf("\n \t 2. Casado \n \t ");
		printf("\n \t 3. Divorciado \n \t ");
		printf("\n \t 4. Viudo \n \n \t ");
		
		scanf("%d",&edo_civil);
		system ("CLS");
			switch (edo_civil) 
			{
			case 1: 
				printf("\n \t Ha seleccionado Soltero \n \t");
			break;
			case 2: 
				printf("\n \t Ha seleccionado Casado \n \t ");
			break;
			case 3: 
				printf("\n \t Ha seleccionado Divorciado \n \t ");
			break;
			case 4: 
				printf("\n \t Ha seleccionado Viudo \n \t ");
			break;
			default:
				printf("\n \t ERROR. Ingrese un valor correcto \n \t ");
			}
			system ("pause");
			system ("CLS");		
			}while(edo_civil < 1 || edo_civil > 4);//Termina validacion de estado civil	
		
			
		//CONTADOR DE ITERACIONES
		n=+(n+1);
		
		//PROMEDIO DE ASISTENTES DEL SEXO FEMENINO
		if(sexo==2)
		{
			suma_edad=+(suma_edad+edad);
			promedio_edad=+(suma_edad/n);
		}
		
		//MAYOR EDAD DEL SEXO MASCULINO Y CASADO
		if(sexo == 1 && edo_civil ==2)
		{
			if(n==0)
				{
					valormayor=edad;
				}
					if(edad>valormayor)
				{
					valormayor=edad;
				}
		}
		
		//VALIDACION DE NUEVO REGISTRO				
		printf(" \n \t ***Desea cargar otro registro?*** \n \t ");
		printf(" \n \t 1. Continuar \n \t ");
		printf(" \n \t 2. Ver resultados \n \n \t ");
		scanf("%d",&aux);
		system ("CLS");
		
	}while (aux == 1);
	
	//MUESTRA DE RESULTADOS
		printf("\n \t CINE, C.A \n \t ");
		printf("\n \t RIF: J-00000000-0 \n \t ");
		printf("\n \t Resultados obtenidos: \n \n \t ");
		printf("\n \t El promedio de edades del sexo femenino es: %0.0f \n \t ",promedio_edad);
		printf(" \n \t El mayor numero ingresado en el rango de sexo masculino y casado es: %d  \n \t",valormayor);
		printf("\n \t La cantidad de niños asistentes al cine es: %d \n \t ",contador_ninos);
		printf("\n \t La cantidad de jovenes asistentes al cine es: %d \n \t ",contador_jovenes);
		printf("\n \t La cantidad de adultos asistentes al cine es: %d \n \t ",contador_adultos);
		printf("\n \t El porcentaje de hombres es: %0.2f \n \t",prom_hombres);
		printf("\n \t El porcentaje de mujeres es: %0.2f \n \n \t",prom_mujeres);	
		system ("pause");
		system ("CLS");
}
