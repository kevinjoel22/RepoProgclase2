/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//parte 3
int sumarEnteros(int numUno,int numDos);


int main(void) {
		setbuf(stdout,NULL);

		int numeroUno;
		int numeroDos;
		int resultado;
		float promedio;
		float impuestos;
		float impuestoResultado;


		//para crear una funcion hay que crear 3 partes

		printf("Ingrese el valor de la primero compra: \n");
		scanf("%d",&numeroUno);

		printf("Ingrese el valor de la segunda compra: \n");
		scanf("%d",&numeroDos);
		//parte 2
		resultado= sumarEnteros(numeroUno,numeroDos);
					//8 casteo, 8.00
		promedio = (float)resultado / 2;

		printf("\nEste es el resultado de la suma %d",resultado);
		printf("\nEste es el resultado del promedio %f", promedio);


		printf("\n Ingrese los impuestos abonados\n");
		scanf("%f",&impuestos);

		impuestoResultado = impuestos + resultado;


	return EXIT_SUCCESS;
}


//parte 1
//retornar, nombrefuncion(parametros de la funcion)
int sumarEnteros(int numUno,int numDos)
{
	int retorno;

	retorno = numUno + numDos;

	return retorno;
}
