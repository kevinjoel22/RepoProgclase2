/*
 ============================================================================
 Name        : programacion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define  CLIENTE 999
#define LIMPIAR_BUFFER_ENTRADA()  fflush(stdin) //MACRO
#define EDAD_DE_ADULTO 18

int main(void) {
	//WINDORRRR
	setbuf (stdout,NULL);
	//___________________

	//TIPO NOMBRE ;
	/*int a; //numeros enteros
	float f; // numeros con decimales
	char c; // 1 caracter. 1 letra.

	printf("\nIngresame tu edad:\n");

	LIMPIAR_BUFFER_ENTRADA();// LIMPIAR EL BUFFER DE ENTRADA ANTES DE LEER
	scanf("%d", &a); // LEEMOS

	if(a>=EDAD_DE_ADULTO)
	{

	}

	printf("Ingresaste la edad:%d ",a);*/

	int numeroUno;

		int promedio;
		int i;
		int cont=0;
		for(i=0; i<CLIENTE ;i++)
		{
			printf("\nIngrese el numero: \n");
			scanf("%d", &numeroUno);
			cont++;
			if(numeroUno == 999){
				printf("\nfin del calulo.");
			}
		}
		promedio= numeroUno /cont;
		printf("\nEL promedio es: ",&promedio);


	return EXIT_SUCCESS;
}
