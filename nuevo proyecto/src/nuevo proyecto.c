/*
 ============================================================================
 Name        : nuevo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	printf("Esta es la primera clase");

	int numero;
	int suma;

	printf("\nIngrese el numero: \n");
	scanf("%d", &numero);

	suma = numero + numero;

	printf("\nLa suma del numero es %d", suma);

	if(numero>17)
	{
		printf("\nSos mayor de edad");

	}

	return EXIT_SUCCESS;
}
//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	/*int numeroUno;
	int numeroDos;
	int suma;
	char letra;

	do{
	printf("\nIngrese el numero: \n");

	scanf("%d", &numeroUno);

	printf("\nIngrese el numero: \n");

	scanf("%d" , &numeroDos);

	suma = numeroUno + numeroDos;


		printf("\nQuiere seguir ingresando?\n");
		fflush(stdin);
		scanf("%c",&letra);
	}while(letra == 's');

	printf("\nLa suma es: %d", suma);*/
