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

#define CLIENTE 5

int main(void) {
	setbuf(stdout,NULL);

	int numeroUno;

	int suma=0;
	int i;

	for(i=0; i<CLIENTE ;i++)
	{
		printf("\nIngrese el numero: \n");
		scanf("%d", &numeroUno);
		suma = suma + numeroUno;

	}
	printf("\nLa suma del numero es: %d", suma);
	return EXIT_SUCCESS;
}
